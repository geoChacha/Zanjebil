#include <Zanjebil.h>

class SandBox : public Zanjebil::Application
{
public:
	SandBox()
	{

	}
	~SandBox()
	{

	}
};

Zanjebil::Application* Zanjebil::CreateApplication()
{
	return new SandBox;
}