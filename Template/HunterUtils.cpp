#include "pch.h"
#include "Config.hpp"
#include "Database.h"
#include <random>
#include <LLMoney.h>
#include <MC/Player.hpp>

namespace Hunter {
	int makeRandom(int min, int max) {
		auto seed = std::random_device();
		std::default_random_engine gen(seed());
		std::uniform_int_distribution<int> dis(min, max);
		return dis(gen);
	}

	int makeRandom(std::pair<int, int> pair) {
		return makeRandom(pair.first, pair.second);
	}

	std::string getTimeString() {
		SYSTEMTIME time;
		GetLocalTime(&time);
		return std::to_string(time.wYear) +
			":" + std::to_string(time.wMonth) +
			":" + std::to_string(time.wDay);
	}

	int getTodayGain(Player* pl) {
		return db.getTodayGain(pl);
	}

	void  addTodayGain(Player* pl, int num) {
		db.addTodayGain(pl, num);
		LLMoneyAdd(pl->getXuid(), num);
	}

	bool isInLimit(Player* pl) {
		auto gain = db.getTodayGain(pl);
		return gain >= setting.getDailyLimit();
	}
}