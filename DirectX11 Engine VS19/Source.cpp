#include "Engine.h"
#include "Graphics/Graphics.h"


int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR lpCmdLine,
	_In_ int nCmdShow)
{
	Engine engine;
	engine.Initialize(hInstance, "Title", "MyWindowClass", 800, 600);

	while (engine.ProcessMessages())
	{
		engine.Update();
		engine.RenderFrame();
	}
	//S_OK :success    E_INVALIDARG-> parmameter incorrect
	return 0;
}