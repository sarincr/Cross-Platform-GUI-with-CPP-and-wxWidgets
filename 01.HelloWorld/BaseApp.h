/***************************************************************
 * Name:      BaseApp.h
 * Purpose:   Defines Application Class
 * Author:     ()
 * Created:   2021-06-04
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef BASEAPP_H
#define BASEAPP_H

#include <wx/app.h>

class BaseApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // BASEAPP_H
