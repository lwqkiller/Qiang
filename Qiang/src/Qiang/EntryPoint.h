//EntryPoint.h
#pragma once

#ifdef QIANG_PLATFORM_WINDOWS
extern Qiang::Application* Qiang::CreateApplication();

int main(){
	Qiang::Log::Init();
	QE_CORE_WARN("��ʼ��");
	int a = 5;
	QE_INFO("��ã��û���Var={0}",a);

	auto app = Qiang::CreateApplication();
	app->Run();
	delete app;

}

#endif // QIANG_PLATFORM
