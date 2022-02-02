#include "EntryPoint.h"

wxIMPLEMENT_APP(EntryPoint);

bool EntryPoint::OnInit()
{
	sMainWinFrame = new sMainWin();
	sMainWinFrame->Show();

	return true;
}