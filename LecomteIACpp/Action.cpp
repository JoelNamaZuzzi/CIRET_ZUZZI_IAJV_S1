#include "Action.h"

bool Action::Can() {
	bool state = true;
	for (auto var : this->requirements){
		state = state && var.Require();
	}
	return state;
}