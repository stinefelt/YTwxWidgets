#pragma once
#include <wx/wx.h>
#include "sMainWin.h"

class EntryPoint : public wxApp
{
public:
	virtual bool OnInit();
private:
	sMainWin* sMainWinFrame = nullptr;
};