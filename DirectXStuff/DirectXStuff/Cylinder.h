#pragma once
#include "BaseObject.h"

class Cylinder : public BaseObject<Cylinder>
{
public:
	Cylinder(Graphics& graphics, std::mt19937& rng,
		std::uniform_real_distribution<float>& adist,
		std::uniform_real_distribution<float>& ddist,
		std::uniform_real_distribution<float>& odist,
		std::uniform_real_distribution<float>& rdist,
		std::uniform_real_distribution<float>& bdist,
		std::uniform_int_distribution<int>& tdist);
};

