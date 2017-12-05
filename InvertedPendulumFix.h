// InvertedPendulumFix.h : main header file for the INVERTEDPENDULUMFIX application
//

#if !defined(AFX_INVERTEDPENDULUMFIX_H__E4008C5E_3C13_42FF_87F1_7277CEAF1038__INCLUDED_)
#define AFX_INVERTEDPENDULUMFIX_H__E4008C5E_3C13_42FF_87F1_7277CEAF1038__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CInvertedPendulumFixApp:
// See InvertedPendulumFix.cpp for the implementation of this class
//

class CInvertedPendulumFixApp : public CWinApp
{
public:
	CInvertedPendulumFixApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CInvertedPendulumFixApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CInvertedPendulumFixApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INVERTEDPENDULUMFIX_H__E4008C5E_3C13_42FF_87F1_7277CEAF1038__INCLUDED_)
