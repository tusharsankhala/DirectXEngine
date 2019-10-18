#include "App/AppWindow.h"
#include <stdexcept>

int main()
{
	try
	{
		AppWindow app;
		if (app.Init())
		{
			while (app.isRun())
			{
				app.broadcast();
			}
		}
	}
	catch (const std::runtime_error& error)
	{
		MessageBox(nullptr, error.what(), "An error has occured", MB_OK);
	}

	return 0;
}