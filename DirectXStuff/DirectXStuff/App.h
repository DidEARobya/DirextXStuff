#pragma once
#include "Window.h"
#include "WinTimer.h"

class App
{
public:
	App();
	~App();

	int StartApp();
private:
	void Update();
	
private:
	Window _window;
	WinTimer _timer;
	std::vector<std::unique_ptr<class Drawable>> _drawables;
	static constexpr size_t _nDrawable = 180;
};

