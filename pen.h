#if !defined(AFX_PEN_H__8687915E_FF2C_4DFF_A891_94DCD299A84B__INCLUDED_)
#define AFX_PEN_H__8687915E_FF2C_4DFF_A891_94DCD299A84B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CPen1 wrapper class

class CPen1 : public COleDispatchDriver
{
public:
	CPen1() {}		// Calls COleDispatchDriver default constructor
	CPen1(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPen1(const CPen1& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	unsigned long GetColor();
	void SetColor(unsigned long newValue);
	long GetWidth();
	void SetWidth(long nNewValue);
	long GetStyle();
	void SetStyle(long nNewValue);
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PEN_H__8687915E_FF2C_4DFF_A891_94DCD299A84B__INCLUDED_)
