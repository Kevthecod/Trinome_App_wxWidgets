/***************************************************************
 * Name:      Trinome_1_0_1App.cpp
 * Purpose:   Code for Application Class
 * Author:    Kévin (kevinhounsa7@gmail.com)
 * Created:   2024-01-27
 * Copyright: Kévin (KevtheCode.com)
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "Trinome_1_0_1App.h"

//(*AppHeaders
#include "Trinome_1_0_1Main.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Trinome_1_0_1App);

bool Trinome_1_0_1App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Trinome_1_0_1Frame* Frame = new Trinome_1_0_1Frame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
