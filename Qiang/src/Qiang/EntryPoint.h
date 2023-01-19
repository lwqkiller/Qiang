//EntryPoint.h
#pragma once

#ifdef QIANG_PLATFORM_WINDOWS
extern Qiang::Application* Qiang::CreateApplication();

int main(){
	Qiang::Log::Init();
	QE_CORE_WARN("初始化");
	int a = 5;
	QE_INFO("你好，用户！Var={0}",a);

	auto app = Qiang::CreateApplication();
	app->Run();
	delete app;

}

#endif // QIANG_PLATFORM
