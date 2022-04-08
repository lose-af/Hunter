#include "pch.h"
#include <random>

namespace Hunter {
	int makeRandom(int min, int max) {
		auto seed = std::random_device();
		std::default_random_engine gen(seed);
		std::uniform_int_distribution<int> dis(min, max);
		return dis(gen);
	}

	int makeRandom(std::pair<int, int> pair) {
		return makeRandom(pair.first, pair.second);
	}
}