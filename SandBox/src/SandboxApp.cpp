//SandboxApp.cpp
#include <Qiang.h>
class Sanbox :public Qiang::Application {
public: 
	Sanbox()
	{

	}

	~Sanbox()
	{

	}
};

Qiang::Application* Qiang::CreateApplication()
{
	return new Sanbox();
}