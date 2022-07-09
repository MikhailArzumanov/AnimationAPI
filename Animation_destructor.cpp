#include "Animation.hpp"

namespace AnmAPI {
	Animation::~Animation() {
		delete[] framesAmounts;
	}
}