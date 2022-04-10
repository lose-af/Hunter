#include "pch.h"
#include "Config.hpp"
#include "HunterUtils.h"
#include <EventAPI.h>
#include <MC/Player.hpp>
#include <MC/ActorDamageSource.hpp>

Player* getDamageSrc(ActorDamageSource* src) {
	auto ac = src->getEntity();
	if (!ac)
		return nullptr;
	if (ac->isPlayer())
		return (Player*)ac;
	auto owner = ac->getOwner();
	if (owner && owner->isPlayer())
		return (Player*)owner;
	return (Player*)owner;

}

THook(void, "?die@Mob@@UEAAXAEBVActorDamageSource@@@Z",
	Mob* self, ActorDamageSource* src) {
	auto pl = getDamageSrc(src);
	if (pl) {
		if (Hunter::isInLimit(pl)) {
			return original(self, src);
		}
		auto range = setting.getRewardByMobType(self->getTypeName());
		auto gain = Hunter::makeRandom(range);
		Hunter::addTodayGain(pl, gain);
		pl->sendText(tr("hunter.player.killmob", std::to_string(gain)));
	}
	return original(self, src);
}