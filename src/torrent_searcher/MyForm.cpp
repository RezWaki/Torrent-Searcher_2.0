#include <Windows.h>
#include "widgetform.h"

using namespace System; using namespace System::Windows::Forms;
[STAThread]
INT WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int){
	Application::Run( gcnew torrent_searcher::widgetform() );
	return 1;
}