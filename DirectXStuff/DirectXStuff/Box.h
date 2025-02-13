#pragma once
#include "BaseObject.h"

class Box : public BaseObject<Box>
{
public:
	Box(Graphics& graphics, std::mt19937& rng,
		std::uniform_real_distribution<float>& adist,
		std::uniform_real_distribution<float>& ddist,
		std::uniform_real_distribution<float>& odist,
		std::uniform_real_distribution<float>& rdist,
		std::uniform_real_distribution<float>& bdist,
		DirectX::XMFLOAT3 material);

	DirectX::XMMATRIX GetTransformMatrix() const noexcept override;
private:
	//model transform
	DirectX::XMFLOAT3X3 _modelTransform;
};

