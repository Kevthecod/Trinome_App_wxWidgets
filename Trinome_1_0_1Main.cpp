/***************************************************************
 * Name:      Trinome_1_0_1Main.cpp
 * Purpose:   Code for Application Frame
 * Author:    Kévin (kevinhounsa7@gmail.com)
 * Created:   2024-01-27
 * Copyright: Kévin (KevtheCode.com)
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "Trinome_1_0_1Main.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(Trinome_1_0_1Frame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(Trinome_1_0_1Frame)
const long Trinome_1_0_1Frame::ID_STATICTEXT1 = wxNewId();
const long Trinome_1_0_1Frame::ID_TEXTCTRL1 = wxNewId();
const long Trinome_1_0_1Frame::ID_STATICTEXT2 = wxNewId();
const long Trinome_1_0_1Frame::ID_TEXTCTRL2 = wxNewId();
const long Trinome_1_0_1Frame::ID_STATICTEXT3 = wxNewId();
const long Trinome_1_0_1Frame::ID_TEXTCTRL3 = wxNewId();
const long Trinome_1_0_1Frame::ID_STATICTEXT4 = wxNewId();
const long Trinome_1_0_1Frame::ID_TEXTCTRL4 = wxNewId();
const long Trinome_1_0_1Frame::ID_STATICTEXT5 = wxNewId();
const long Trinome_1_0_1Frame::ID_TEXTCTRL5 = wxNewId();
const long Trinome_1_0_1Frame::ID_BUTTON1 = wxNewId();
const long Trinome_1_0_1Frame::ID_RADIOBOX1 = wxNewId();
const long Trinome_1_0_1Frame::ID_BUTTON2 = wxNewId();
const long Trinome_1_0_1Frame::ID_PANEL1 = wxNewId();
const long Trinome_1_0_1Frame::idMenuQuit = wxNewId();
const long Trinome_1_0_1Frame::idMenuAbout = wxNewId();
const long Trinome_1_0_1Frame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Trinome_1_0_1Frame,wxFrame)
    //(*EventTable(Trinome_1_0_1Frame)
    //*)
END_EVENT_TABLE()

Trinome_1_0_1Frame::Trinome_1_0_1Frame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(Trinome_1_0_1Frame)
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer3;
    wxFlexGridSizer* FlexGridSizer1;
    wxFlexGridSizer* FlexGridSizer2;
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;
    wxStaticBoxSizer* StaticBoxSizer1;
    wxStaticBoxSizer* StaticBoxSizer2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Panel1->SetBackgroundColour(wxColour(255,255,193));
    BoxSizer2 = new wxBoxSizer(wxVERTICAL);
    StaticBoxSizer1 = new wxStaticBoxSizer(wxHORIZONTAL, Panel1, _("Definition du trinome ax^2 + bx + c"));
    FlexGridSizer1 = new wxFlexGridSizer(3, 2, 0, 0);
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Coefficient a :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    FlexGridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(145,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    FlexGridSizer1->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Coefficient b :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    FlexGridSizer1->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxSize(144,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    FlexGridSizer1->Add(TextCtrl2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Coefficient c :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    FlexGridSizer1->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl3 = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxDefaultPosition, wxSize(144,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    FlexGridSizer1->Add(TextCtrl3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBoxSizer1->Add(FlexGridSizer1, 1, wxALL|wxEXPAND, 5);
    BoxSizer2->Add(StaticBoxSizer1, 0, wxALL|wxEXPAND, 5);
    StaticBoxSizer2 = new wxStaticBoxSizer(wxHORIZONTAL, Panel1, _("Racines calculees"));
    FlexGridSizer2 = new wxFlexGridSizer(2, 2, 0, 0);
    StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("     Racine 1 :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    FlexGridSizer2->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl4 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxDefaultPosition, wxSize(166,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    FlexGridSizer2->Add(TextCtrl4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("     Racine 2 : "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    FlexGridSizer2->Add(StaticText5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl5 = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxDefaultPosition, wxSize(166,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
    FlexGridSizer2->Add(TextCtrl5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBoxSizer2->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(StaticBoxSizer2, 0, wxALL|wxEXPAND, 5);
    BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("QUITTER"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    BoxSizer3->Add(Button1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    wxString __wxRadioBoxChoices_1[2] =
    {
    	_(" Dans R"),
    	_(" Dans C")
    };
    RadioBox1 = new wxRadioBox(Panel1, ID_RADIOBOX1, _("Reel / Complexe"), wxDefaultPosition, wxDefaultSize, 2, __wxRadioBoxChoices_1, 1, 0, wxDefaultValidator, _T("ID_RADIOBOX1"));
    RadioBox1->SetSelection(0);
    BoxSizer3->Add(RadioBox1, 0, wxALL, 5);
    Button2 = new wxButton(Panel1, ID_BUTTON2, _("CALCULER"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    BoxSizer3->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(BoxSizer3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1->SetSizer(BoxSizer2);
    BoxSizer2->Fit(Panel1);
    BoxSizer2->SetSizeHints(Panel1);
    BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(BoxSizer1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);

    Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&Trinome_1_0_1Frame::OnTextCtrl1Text);
    Connect(ID_TEXTCTRL2,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&Trinome_1_0_1Frame::OnTextCtrl2Text);
    Connect(ID_TEXTCTRL3,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&Trinome_1_0_1Frame::OnTextCtrl3Text);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Trinome_1_0_1Frame::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Trinome_1_0_1Frame::OnButton2Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Trinome_1_0_1Frame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Trinome_1_0_1Frame::OnAbout);
    //*)
}

Trinome_1_0_1Frame::~Trinome_1_0_1Frame()
{
    //(*Destroy(Trinome_1_0_1Frame)
    //*)
}

void Trinome_1_0_1Frame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void Trinome_1_0_1Frame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void Trinome_1_0_1Frame::OnButton1Click(wxCommandEvent& event)
{
    Close();
}

void Trinome_1_0_1Frame::OnButton2Click(wxCommandEvent& event)
{
    wxString Text = TextCtrl1->GetValue();
    double val;
    if (!Text.ToDouble(&val))
        wxMessageBox(_("Saisir un nombre pour \"a\" !"));
    else {
            trinome.Seta(val);

            Text = TextCtrl2->GetValue();
            if (!Text.ToDouble(&val))
                wxMessageBox(_("Saisir un nombre pour \"b\" !"));
            else {
                trinome.Setb(val);

                Text = TextCtrl3->GetValue();
                if (!Text.ToDouble(&val))
                    wxMessageBox(_("Saisir un nombre pour \"c\" !"));
                else {
                    trinome.Setc(val);

                    if (RadioBox1->GetSelection()==0) trinome.SetisComplex(false);
                    else trinome.SetisComplex(true);

                    trinome.calculerRacines();
                    TextCtrl4->SetValue(trinome.Getracine1());
                    TextCtrl5->SetValue(trinome.Getracine2());
                }
            }

    }
}

void Trinome_1_0_1Frame::OnTextCtrl1Text(wxCommandEvent& event)
{
    TextCtrl4->SetValue(_("---"));
    TextCtrl5->SetValue(_("---"));
}

void Trinome_1_0_1Frame::OnTextCtrl2Text(wxCommandEvent& event)
{
    TextCtrl4->SetValue(_("---"));
    TextCtrl5->SetValue(_("---"));
}


void Trinome_1_0_1Frame::OnTextCtrl3Text(wxCommandEvent& event)
{
    TextCtrl4->SetValue(_("---"));
    TextCtrl5->SetValue(_("---"));
}
