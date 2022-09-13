#include "AI.hpp"
#include "HeaderActions.hpp"

std::vector<Action<Requirement>> AI::TestActions(const std::vector<Action<Requirement>> actions)const {
	std::vector<Action<Requirement>> PossibleActions;
	for (auto act : actions) {
		if (act.checkPossibleAction(MP)) {
			PossibleActions.push_back(act);
		}
	}
	return PossibleActions;
}