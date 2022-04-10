#pragma once
#include <utility>

namespace Hunter {
	int makeRandom(int min, int max);
	int makeRandom(std::pair<int, int> pair);
	std::string getTimeString();
	int getTodayGain(Player* pl);
	void addTodayGain(Player* pl, int num);
	bool isInLimit(Player* pl);
}