#include "pch.h"
#include "global.h"
#include "Database.h"
#include "HunterUtils.h"
#include <MC/Player.hpp>
#include <Nlohmann/json.hpp>


bool inline DB::_isFirstJoin(Player* pl) {
	auto xuid = pl->getXuid();
	auto val = db->get(xuid);
	return !val.has_value();
}

DB DB::Load() {
	DB _self;
	_self.db = KVDB::create(DB_PATH);
	return _self;
}

int DB::getTodayGain(Player* pl) {
	checkPlayerData(pl);
	auto xuid = pl->getXuid();
	auto val = db->get(xuid);
	auto json = nlohmann::json::parse(val.value());
	return json[Hunter::getTimeString()].get<int>();
}

void DB::addTodayGain(Player* pl, int num) {
	checkPlayerData(pl);
	auto xuid = pl->getXuid();
	auto val = db->get(xuid);
	auto json = nlohmann::json::parse(val.value());
	auto gain = json[Hunter::getTimeString()].get<int>();
	json[Hunter::getTimeString()] = gain + num;
	db->set(xuid, json.dump());
}

void inline DB::checkPlayerData(Player* pl) {
	auto xuid = pl->getXuid();
	auto val = db->get(xuid);
	auto json = nlohmann::json::parse(val.value());
	if (!json.contains(Hunter::getTimeString())) {
		json[Hunter::getTimeString()] = 0;
		db->set(xuid, json.dump());
	}
}

void DB::initPlayerData(Player* pl) {
	if (_isFirstJoin(pl)) {
		auto xuid = pl->getXuid();
		db->put(xuid, "{}");
	}
	checkPlayerData(pl);
}
