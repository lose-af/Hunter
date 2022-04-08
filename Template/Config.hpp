#include "pch.h"
#include <Utils/FileHelper.h>
#include <Nlohmann/json.hpp>

class Config {
private:
	int daily_limit;
	std::string lang_type;
	std::unordered_map<std::string, std::pair<int, int>> conf;
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
		config.lang_type = json["lang"].get<std::string>();
	}


};