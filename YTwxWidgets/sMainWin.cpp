#include "sMainWin.h"

wxBEGIN_EVENT_TABLE(sMainWin, wxFrame)
EVT_BUTTON(10001, DisplayMessage)
EVT_BUTTON(10002, Quit)
wxEND_EVENT_TABLE()

sMainWin::sMainWin() : wxFrame(NULL, wxID_ANY, "YouTube Fun Window", wxPoint(30, 30), wxSize(800, 420), wxDEFAULT_FRAME_STYLE & ~wxRESIZE_BORDER & ~wxMAXIMIZE_BOX)
{
	m_TestButton = new wxButton(this, 10001, "Test Button", wxPoint(10, 10), wxSize(150, 50));
	m_QuitButton = new wxButton(this, 10002, "Quit Button", wxPoint(170, 10), wxSize(150, 50));
	m_LogListBox = new wxListBox(this, wxID_ANY, wxPoint(10, 70), wxSize(765, 300));

	SetBackgroundColour(*wxBLACK);
}

sMainWin::~sMainWin()
{
	Destroy();
}

void sMainWin::DisplayMessage(wxCommandEvent& evt)
{
	m_LogListBox->Append("Test button was clicked");
}

void sMainWin::Quit(wxCommandEvent& evt)
{
	m_LogListBox->Append("Quit Button was clicked");
}
