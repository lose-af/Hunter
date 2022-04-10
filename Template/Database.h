#pragma once
#include <KVDBAPI.h>

class Player;
class DB {
private:
	std::unique_ptr<KVDB> db;
	bool inline _isFirstJoin(Player* pl);
public:
	static DB Load();
	int getTodayGain(Player* pl);
	void addTodayGain(Player* pl, int num);
	void inline checkPlayerData(Player* pl);
	void initPlayerData(Player* pl);
};