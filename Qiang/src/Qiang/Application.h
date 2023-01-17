//Application.h
#pragma once

#include "Core.h"

namespace Qiang
{
	class QIANG_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
		
	};
	Application* CreateApplication();
}



