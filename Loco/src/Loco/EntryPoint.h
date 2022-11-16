#pragma once

#ifdef LC_PLATFORM_WINDOWS
//	Tell "Entrypoint.h" that somewhere there exists
// function implementation & declared called [ CreateApplication() ]
// That function will get declared inside the engine, implemented inside Sandbox
extern Loco::Application* Loco::CreateApplication();

int main(int argc, char** argv) {
	Loco::Logger::Init();
	LC_CORE_WARN("Initialized CORE_LOG");
	LC_CLIENT_INFO("CLIENT LOG INITIALIZED");
	int a = 4;
	LC_CLIENT_FATAL("CLIENT LOG INITIALIZED Var={0}", a);


	auto app = Loco::CreateApplication();
	app->Run();
	delete app;


}


	
#else
#error Currently only support Windows
#endif