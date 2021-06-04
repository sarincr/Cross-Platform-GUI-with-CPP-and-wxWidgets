/***************************************************************
 * Name:      BaseMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2021-06-04
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef BASEMAIN_H
#define BASEMAIN_H



#include "BaseApp.h"


#include "GUIFrame.h"

class BaseFrame: public GUIFrame
{
    public:
        BaseFrame(wxFrame *frame);
        ~BaseFrame();
    private:
        virtual void OnClose(wxCloseEvent& event);
        virtual void OnQuit(wxCommandEvent& event);
        virtual void OnAbout(wxCommandEvent& event);
};

#endif // BASEMAIN_H
