#pragma once

#ifdef KEV_PLATFORM_WINDOWS
#include <stdio.h>

extern Kev::Application* Kev::CreateApplication();

int main(int argc, char**argv) {
	printf("Kev Engine...\n");
	auto app = Kev::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error Kev only supports Windows
#endif
