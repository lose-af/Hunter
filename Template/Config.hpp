#include "pch.h"
#include <Utils/FileHelper.h>
#include <Nlohmann/json.hpp>

class Config {
private:
	int daily_limit;
	std::unordered_map<std::string, std::pair<int, int>> conf;
public:
	static Config Load() {
		auto file = ReadAllFile(CONFIG_PATH);
		auto json = nlohmann::json::parse(file.value());
		for (auto& i : json.items()) {
			auto& key = i.key();
			if (key != "daily_limit") {

			}
		}
	}
};