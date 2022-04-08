#include "pch.h"
#include "Config.hpp"
#include <LLAPI.h>
#include <LoggerAPI.h>

Logger logger("Hunter");
Config setting;

void PluginInit() {
	setting = Config::Load();
}
