#pragma once

#include "../Engine/Window.h"
#include "../Engine/GraphicsEngine.h"

class AppWindow : public Window
{
public:

	AppWindow() = default;
	~AppWindow();

	// Inherited via Window
	virtual void OnCreate() override;
	virtual void OnUpdate() override;
	virtual void OnDestroy() override;
};

