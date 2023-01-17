//EntryPoint.h
#pragma once

#ifdef QIANG_PLATFORM_WINDOWS
extern Qiang::Application* Qiang::CreateApplication();

int main(){
	printf("Hello!\n");
	auto app = Qiang::CreateApplication();
	app->Run();
	delete app;

}

#endif // QIANG_PLATFORM
