#include "Animation.hpp"

namespace AnmAPI {
	Animation::Animation() { currentState = 0; currentFrame = 0; }
	Animation::Animation(int statesAmount_, int* framesAmounts_):Animation() {
		statesAmount = statesAmount_;
		framesAmounts = new int[statesAmount];
		for (int i = 0; i < statesAmount; i++)
			framesAmounts[i] = framesAmounts_[i];
	}
}