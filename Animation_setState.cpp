#include "Animation.hpp"
#include <iostream>
#include <exception>
#include <stdexcept>

namespace AnmAPI {
	void Animation::setState(int stateNum) {
		if (stateNum > statesAmount) {
			std::cout << "Error: stateNum is greater than statesAmount";
			throw std::runtime_error("stateNum is greater than statesAmount");
			exit(1);
		}
		else currentState = stateNum;
	}
}