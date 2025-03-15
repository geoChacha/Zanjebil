#pragma once
#ifdef ZJ_PLATFORM_WINDOWS

extern Zanjebil::Application* Zanjebil::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Zanjebil::CreateApplication();
	app->Run();
	delete app;
}

#endif // ZJ_PLATFORM_WINDOWS
