#pragma once
#ifdef LC_PLATFORM_WINDOWS

//	Tell "Entrypoint.h" that somewhere there exists
// function implementation & declared called [ CreateApplication() ]
// That function will get declared inside the engine, implemented inside Sandbox
extern Loco::Application* Loco::CreateApplication();

int main(int argc, char** argv) {

	auto app = Loco::CreateApplication();
	app->Run();
	delete app;


}


	
#else
#error Currently only support Windows
#endif