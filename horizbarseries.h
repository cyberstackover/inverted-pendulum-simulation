#if !defined(AFX_HORIZBARSERIES_H__59620679_6160_473A_8C13_457DFBD11681__INCLUDED_)
#define AFX_HORIZBARSERIES_H__59620679_6160_473A_8C13_457DFBD11681__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CBrush1;
class CPen1;

/////////////////////////////////////////////////////////////////////////////
// CHorizBarSeries wrapper class

class CHorizBarSeries : public COleDispatchDriver
{
public:
	CHorizBarSeries() {}		// Calls COleDispatchDriver default constructor
	CHorizBarSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CHorizBarSeries(const CHorizBarSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetMultiBar();
	void SetMultiBar(long nNewValue);
	BOOL GetAutoMarkPosition();
	void SetAutoMarkPosition(BOOL bNewValue);
	CBrush1 GetBarBrush();
	CPen1 GetBarPen();
	long GetBarStyle();
	void SetBarStyle(long nNewValue);
	long GetBarWidthPercent();
	void SetBarWidthPercent(long nNewValue);
	BOOL GetDark3D();
	void SetDark3D(BOOL bNewValue);
	long GetOffsetPercent();
	void SetOffsetPercent(long nNewValue);
	BOOL GetSideMargins();
	void SetSideMargins(BOOL bNewValue);
	BOOL GetUseOrigin();
	void SetUseOrigin(BOOL bNewValue);
	double GetOrigin();
	void SetOrigin(double newValue);
	long GetOriginPos(long SomeValueIndex);
	BOOL GetAutoBarSize();
	void SetAutoBarSize(BOOL bNewValue);
	void BarImageLoad(LPCTSTR Filename);
	void BarImageClear();
	long GetBarHeight();
	void SetBarHeight(long nNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HORIZBARSERIES_H__59620679_6160_473A_8C13_457DFBD11681__INCLUDED_)
