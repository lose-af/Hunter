#include "pch.h"
#include <I18nAPI.h>
#include <Utils/FileHelper.h>
#include <Nlohmann/json.hpp>

class Config {
private:
	int daily_limit;
	HunterTable conf;
public:
	static Config Load() {
		Config config;
		auto file = ReadAllFile(CONFIG_PATH);
		auto json = nlohmann::json::parse(file.value());
		for (auto& i : json.items()) {
			auto& key = i.key();
			if (key != "daily_limit" && key != "lang") {
				config.conf[key] = {
					i.value()["max"].get<int>(),
					i.value()["min"].get<int>(),
				};
			}
		}
		config.daily_limit = json["daily_limit"].get<int>();
		auto lang_type = json["lang"].get<std::string>();
		Translation::load(LANG_DIR + lang_type + ".json");
	}

	//poor english : (
	HunterTable getHunterTable() {
		return this->conf;
	}

	std::pair<int, int> getRewardByMobType(std::string mob_type) {
		return this->conf[mob_type];
	}

	int getDailyLimit() {
		return this->daily_limit;
	}
};