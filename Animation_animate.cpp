#include "Animation.hpp"

namespace AnmAPI {
	void Animation::animate() {
		if (++currentFrame >= framesAmounts[currentState]) 
			currentFrame = 0;
	}
}