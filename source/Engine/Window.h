#pragma once

#include <Windows.h>

class Window
{
public:
	// Initialize the window.
	Window();
	bool Init();
	void broadcast();
	bool isRun();


	// Events.
	virtual void OnCreate();
	virtual void OnUpdate();
	virtual void OnDestroy();

	// Release the window.
	~Window();

protected:

	HWND m_hWnd = nullptr;

	// Indicate that the window is initialized and running.
	bool m_is_run = true;
};