#include "pch.h"
#include "Config.hpp"
#include "Database.h"
#include "HunterCommands.h"
#include <LLAPI.h>
#include <LoggerAPI.h>

DB db;
Config setting;
Logger logger("Hunter");

void PluginInit() {
	setting = Config::Load();
	db = DB::Load();
	initCommands();
	logger.info("load sucess~");
}
