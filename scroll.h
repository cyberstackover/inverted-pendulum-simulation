#if !defined(AFX_SCROLL_H__8F9CE07D_1D26_49E7_8531_6FBCA1CA472A__INCLUDED_)
#define AFX_SCROLL_H__8F9CE07D_1D26_49E7_8531_6FBCA1CA472A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CScroll wrapper class

class CScroll : public COleDispatchDriver
{
public:
	CScroll() {}		// Calls COleDispatchDriver default constructor
	CScroll(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CScroll(const CScroll& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetEnable();
	void SetEnable(long nNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SCROLL_H__8F9CE07D_1D26_49E7_8531_6FBCA1CA472A__INCLUDED_)
