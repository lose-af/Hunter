#include "pch.h"
#include "Database.h"
#include <I18nAPI.h>
#include <EventAPI.h>
#include <MC/ServerPlayer.hpp>
#include <DynamicCommandAPI.h>

void commandExec(DynamicCommand const& command, CommandOrigin const& origin, CommandOutput& output,
	std::unordered_map<std::string, DynamicCommand::Result>& results) {
	auto action = results["HunterOP"].get<std::string>();
	switch (do_hash(action.c_str())) {
	case do_hash("info"): {
		auto pl = (Player*)origin.getEntity();
		auto gain = db.getTodayGain(pl);
		output.addMessage(tr("hunter.command.info", std::to_string(gain)));
		break;
	}
	case do_hash("help"): {
		output.addMessage(tr("hunter.command.help"));
		break;
	}
	}
}

void initCommands() {
	using ParamType = DynamicCommand::ParameterType;
	using Param = DynamicCommand::ParameterData;
	DynamicCommand::setup(
		"hunter",
		"Hunter command",
		{
			{"HunterOP", {"help", "info"}}
		},
			  {
				  Param("HunterOP", ParamType::Enum, "HunterOP"),
			  },
			  {
				  {"HunterOP"}
			  },
		commandExec, CommandPermissionLevel::Any);
}