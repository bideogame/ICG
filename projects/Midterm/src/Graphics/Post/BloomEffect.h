#pragma once

#include "Graphics/Post/PostEffect.h"

class BloomEffect : public PostEffect
{
public:
	void Init(unsigned width, unsigned height) override;
	void ApplyEffect(PostEffect* buffer) override;

	//Reshapes the buffers
	void Reshape(unsigned width, unsigned height) override;

	//Getters
	float GetDownscale() const { return _downscale; }
	float GetThreshold() const { return _threshold; }
	unsigned GetPasses() const { return _passes; }

	//Setters
	void SetDownscale(float downscale) { _downscale = downscale; }
	void SetThreshold(float threshold) { _threshold = threshold; }
	void SetPasses(unsigned passes) { _passes = passes; }

private:
	float _downscale = 2.f;
	float _threshold = 0.01f;
	unsigned _passes = 10;
	glm::vec2 _pixelSize;
};