/***************************************************************
 * Name:      Trinome_1_0_1Main.h
 * Purpose:   Defines Application Frame
 * Author:    Kévin (kevinhounsa7@gmail.com)
 * Created:   2024-01-27
 * Copyright: Kévin (KevtheCode.com)
 * License:
 **************************************************************/

#ifndef TRINOME_1_0_1MAIN_H
#define TRINOME_1_0_1MAIN_H

//(*Headers(Trinome_1_0_1Frame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/radiobox.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
#include <wx/textctrl.h>
//*)

#include"Trinome.h"

class Trinome_1_0_1Frame: public wxFrame
{
    public:

        Trinome_1_0_1Frame(wxWindow* parent,wxWindowID id = -1);
        virtual ~Trinome_1_0_1Frame();

        Trinome trinome ;

    private:

        //(*Handlers(Trinome_1_0_1Frame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnTextCtrl2Text(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnTextCtrl1Text(wxCommandEvent& event);
        void OnTextCtrl3Text(wxCommandEvent& event);
        //*)

        //(*Identifiers(Trinome_1_0_1Frame)
        static const long ID_STATICTEXT1;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICTEXT2;
        static const long ID_TEXTCTRL2;
        static const long ID_STATICTEXT3;
        static const long ID_TEXTCTRL3;
        static const long ID_STATICTEXT4;
        static const long ID_TEXTCTRL4;
        static const long ID_STATICTEXT5;
        static const long ID_TEXTCTRL5;
        static const long ID_BUTTON1;
        static const long ID_RADIOBOX1;
        static const long ID_BUTTON2;
        static const long ID_PANEL1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(Trinome_1_0_1Frame)
        wxButton* Button1;
        wxButton* Button2;
        wxPanel* Panel1;
        wxRadioBox* RadioBox1;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxStaticText* StaticText4;
        wxStaticText* StaticText5;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl1;
        wxTextCtrl* TextCtrl2;
        wxTextCtrl* TextCtrl3;
        wxTextCtrl* TextCtrl4;
        wxTextCtrl* TextCtrl5;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // TRINOME_1_0_1MAIN_H
