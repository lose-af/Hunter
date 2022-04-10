#include "pch.h"
#include "Config.hpp"
#include "Database.h"
#include "HunterUtils.h"
#include <EventAPI.h>
#include <MC/Player.hpp>

THook(void, "?respawn@Player@@UEAAXXZ",
	Player* self) {
	db.initPlayerData(self);
	return original(self);
}