/* Added HAVE_CONFIG_H for autogen files */
#ifdef HAVE_CONFIG_H
#  include <mbsystem_config.h>
#endif



/* Begin user code block <abstract> */
/* End user code block <abstract> */

/**
 * README: Portions of this file are merged at file generation
 * time. Edits can be made *only* in between specified code blocks, look
 * for keywords <Begin user code> and <End user code>.
 */
/*
 * Generated by the ICS Builder Xcessory (BX).
 *
 * BuilderXcessory Version 6.1.3
 * Code Generator Xcessory 6.1.3 (08/19/04) CGX Scripts 6.1 Motif 2.1
 *
 */


/* Begin user code block <file_comments> */
/* End user code block <file_comments> */

#include <Xm/Xm.h>
#include <Xm/MainW.h>
#include <Xm/DialogS.h>
#include <Xm/MwmUtil.h>
#include <Xm/Form.h>
#include <Xm/MainW.h>
#include <Xm/DialogS.h>
#include <Xm/MwmUtil.h>
#include <Xm/Form.h>

/*
 * Global declarations are now stored in the header file.
 *
 * If DECLARE_BX_GLOBALS is defined then this header file
 * declares the globals, otherwise it just externs them.
 */
#define DECLARE_BX_GLOBALS

/**
 * Globally included information.
 */

#include "MBpedit.h"

/**
 * Common constant and pixmap declarations.
 */
#include "mbpingedit_creation.h"

/**
 * Convenience functions from utilities file.
 */
extern void RegisterBxConverters(XtAppContext);
extern XtPointer BX_CONVERT(Widget, char *, char *, int, Boolean *);
extern XtPointer BX_DOUBLE(double);
extern XtPointer BX_SINGLE(float);
extern void BX_MENU_POST(Widget, XtPointer, XEvent *, Boolean *);
extern Pixmap XPM_PIXMAP(Widget, char **);
extern void BX_SET_BACKGROUND_COLOR(Widget, ArgList, Cardinal *, Pixel);

/**
 * Declarations for callbacks and handlers.
 */
extern void do_mbpingedit_dismiss(Widget, XtPointer, XtPointer);

/**
 * Create the mbpingedit_window hierarchy of widgets.
 */
Widget
Creatembpingedit_window(Widget parent)
{
    Cardinal ac = 0;
    Arg      args[256];
    Cardinal cdc = 0;
    Boolean  argok = False;
    Widget   mbpingedit_dialogShell;
    static MBpeditData mBpedit;

    /**
     * Register the converters for the widgets.
     */
    RegisterBxConverters(XtWidgetToApplicationContext(parent));
    XtInitializeWidgetClass((WidgetClass)xmMainWindowWidgetClass);
    XtInitializeWidgetClass((WidgetClass)xmDialogShellWidgetClass);
    XtInitializeWidgetClass((WidgetClass)xmFormWidgetClass);

    ac = 0;
    XtSetArg(args[ac], XmNx, 135); ac++;
    XtSetArg(args[ac], XmNy, 180); ac++;
    XtSetArg(args[ac], XmNwidth, 143); ac++;
    XtSetArg(args[ac], XmNheight, 52); ac++;
    mbpingedit_window = XmCreateMainWindow(parent,
        (char *)"mbpingedit_window",
        args,
        ac);

    ac = 0;
    XtSetArg(args[ac], XmNtitle, "MBeditviz Swath View"); ac++;
    XtSetArg(args[ac], XmNwidth, 1004); ac++;
    XtSetArg(args[ac], XmNheight, 694); ac++;
    XtSetArg(args[ac], XmNdeleteResponse, XmDO_NOTHING); ac++;
    mbpingedit_dialogShell = XmCreateDialogShell(mbpingedit_window,
        (char *)"mbpingedit_dialogShell",
        args,
        ac);

    MBpeditCreate(&(mBpedit),
        mbpingedit_dialogShell,
        "mBpedit",
        args,
        ac);
    ac = 0;
    XtSetArg(args[ac], XmNx, 518); ac++;
    XtSetArg(args[ac], XmNy, 310); ac++;
    XtSetArg(args[ac], XmNwidth, 1004); ac++;
    XtSetArg(args[ac], XmNheight, 694); ac++;
    XtSetValues(mBpedit.MBpedit, args, ac);


    /* Begin user code block <end_Creatembpingedit_window> */
    /* End user code block <end_Creatembpingedit_window> */
    return( mbpingedit_window );
}
