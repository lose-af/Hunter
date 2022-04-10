#include "pch.h"
#include <I18nAPI.h>
#include <Utils/FileHelper.h>
#include <Nlohmann/json.hpp>

class Config {
private:
	int daily_limit;
	HunterTable conf;
	std::pair<int, int> others;
public:
	static Config Load() {
		try {
			Config config;
			auto file = ReadAllFile(CONFIG_PATH);
			auto json = nlohmann::json::parse(file.value());

			for (auto& i : json.items()) {
				auto& key = i.key();
				if (key != "daily_limit" &&
					key != "lang" &&
					key != "others") {
					config.conf[key] = {
						i.value()["min"].get<int>(),
						i.value()["max"].get<int>()
					};
				}
			}
			config.daily_limit = json["daily_limit"].get<int>();
			config.others = {
				json["others"]["min"].get<int>(),
				json["others"]["max"].get<int>()
			};
			auto lang_type = json["lang"].get<std::string>();
			Translation::load(LANG_DIR + lang_type + ".json");
			return config;
		}
		catch (nlohmann::detail::exception exc) {
			logger.error(exc.what());
		}
	}

	//poor english : (
	HunterTable getHunterTable() {
		return this->conf;
	}

	std::pair<int, int> getRewardByMobType(std::string mob_type) {
		if (conf.count(mob_type)) {
			return conf[mob_type];
		}
		return others;
	}

	int getDailyLimit() {
		return this->daily_limit;
	}
};