
#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "BaseApp.h"
#include "BaseMain.h"

IMPLEMENT_APP(BaseApp);

bool BaseApp::OnInit()
{
    BaseFrame* frame = new BaseFrame(0L);

    frame->Show();

    return true;
}
