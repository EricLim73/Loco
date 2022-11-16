#pragma once

#include "Core.h"
namespace Loco {
	//	This "Application Class" is written so that 
	//	the SandBox can inherit it and build its own application
	class LOCO_API Application
	{
	public:
		Application();
		virtual ~Application();	//	This function gets inherited by sandbox application
		void Run();
	};

	Application* CreateApplication();
}

