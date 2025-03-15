#pragma once
#include "Core.h"
namespace Zanjebil {
	class ZANJEBIL_API Application
	{
	public:
		Application()
		{

		}
		virtual ~Application()
		{

		}
		void Run();
		
	};
	// to be defined in client
	Application* CreateApplication();
}

