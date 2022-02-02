#pragma once
#include <wx/wx.h>

class sMainWin : public wxFrame
{
public:
	sMainWin();
	~sMainWin();

	wxButton* m_TestButton = nullptr;
	wxButton* m_QuitButton = nullptr;
	wxListBox* m_LogListBox = nullptr;

	wxDECLARE_EVENT_TABLE();

private:
	void DisplayMessage(wxCommandEvent& evt);
	void Quit(wxCommandEvent& evt);
};

