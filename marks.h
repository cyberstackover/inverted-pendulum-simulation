#if !defined(AFX_MARKS_H__16E21B06_B581_47D4_98FE_53420BD55601__INCLUDED_)
#define AFX_MARKS_H__16E21B06_B581_47D4_98FE_53420BD55601__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CPen1;
class CChartFont;
class CSeriesMarksPositions;

/////////////////////////////////////////////////////////////////////////////
// CMarks wrapper class

class CMarks : public COleDispatchDriver
{
public:
	CMarks() {}		// Calls COleDispatchDriver default constructor
	CMarks(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMarks(const CMarks& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CPen1 GetArrow();
	long GetArrowLength();
	void SetArrowLength(long nNewValue);
	unsigned long GetBackColor();
	void SetBackColor(unsigned long newValue);
	BOOL GetClip();
	void SetClip(BOOL bNewValue);
	CChartFont GetFont();
	CPen1 GetFrame();
	long GetStyle();
	void SetStyle(long nNewValue);
	BOOL GetTransparent();
	void SetTransparent(BOOL bNewValue);
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	CSeriesMarksPositions GetPositions();
	long Clicked(long X, long Y);
	long GetZPosition();
	void SetZPosition(long nNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MARKS_H__16E21B06_B581_47D4_98FE_53420BD55601__INCLUDED_)
