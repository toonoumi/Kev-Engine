#pragma once

#include "Core.h"

namespace Kev {
	class KEV_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	//to be defined in client app
	Application* CreateApplication();
}


