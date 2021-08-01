#pragma once

#include <Kev.h>

class Sandbox : public Kev::Application {
public:
	Sandbox(){

	}

	~Sandbox(){

	}
};


Kev::Application* Kev::CreateApplication() {
	return new Sandbox();
}