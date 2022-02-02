#include "sMainWin.h"

sMainWin::sMainWin() : wxFrame(NULL, wxID_ANY, "YouTube Fun Window", wxPoint(30, 30), wxSize(800, 420), wxDEFAULT_FRAME_STYLE & ~wxRESIZE_BORDER & ~wxMAXIMIZE_BOX)
{
	SetBackgroundColour(*wxBLACK);
}

sMainWin::~sMainWin()
{
	Destroy();
}