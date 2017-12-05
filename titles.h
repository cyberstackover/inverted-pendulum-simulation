#if !defined(AFX_TITLES_H__C672A82A_9D1F_457A_AE9D_DB5AD0C0E653__INCLUDED_)
#define AFX_TITLES_H__C672A82A_9D1F_457A_AE9D_DB5AD0C0E653__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CBrush1;
class CChartFont;
class CPen1;
class CStrings;

/////////////////////////////////////////////////////////////////////////////
// CTitles wrapper class

class CTitles : public COleDispatchDriver
{
public:
	CTitles() {}		// Calls COleDispatchDriver default constructor
	CTitles(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CTitles(const CTitles& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetAdjustFrame();
	void SetAdjustFrame(BOOL bNewValue);
	long GetAlignment();
	void SetAlignment(long nNewValue);
	CBrush1 GetBrush();
	CChartFont GetFont();
	CPen1 GetFrame();
	CStrings GetText();
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	unsigned long GetColor();
	void SetColor(unsigned long newValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TITLES_H__C672A82A_9D1F_457A_AE9D_DB5AD0C0E653__INCLUDED_)
