#pragma once
#include "Window.h"
#include "WinTimer.h"
#include "ImGuiManager.h"
#include "Camera.h"
#include "PointLight.h"

class App
{
public:
	App();
	~App();

	int StartApp();
private:
	void Update();
	
private:
	ImGuiManager _imGuiManager;
	Window _window;
	Camera _camera;
	WinTimer _timer;
	PointLight _pointLight;
	std::vector<std::unique_ptr<class Drawable>> _drawables;
	static constexpr size_t _nDrawable = 180;
	float _speedFactor = 0.0f;
};

