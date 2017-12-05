#if !defined(AFX_SURFACESERIES_H__ED4D3A04_5B6F_4584_9898_CE44794AF1B6__INCLUDED_)
#define AFX_SURFACESERIES_H__ED4D3A04_5B6F_4584_9898_CE44794AF1B6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CValueList;
class CBrush1;
class CPen1;

/////////////////////////////////////////////////////////////////////////////
// CSurfaceSeries wrapper class

class CSurfaceSeries : public COleDispatchDriver
{
public:
	CSurfaceSeries() {}		// Calls COleDispatchDriver default constructor
	CSurfaceSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CSurfaceSeries(const CSurfaceSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long AddXYZ(long AX, double AY, long AZ, LPCTSTR AXLabel, unsigned long Value);
	void MaxZValue();
	void MinZValue();
	long GetTimesZOrder();
	void SetTimesZOrder(long nNewValue);
	CValueList GetZValues();
	double GetZValue(long Index);
	void SetZValue(long Index, double newValue);
	unsigned long GetEndColor();
	void SetEndColor(unsigned long newValue);
	long GetNumXValues();
	void SetNumXValues(long nNewValue);
	long GetNumZValues();
	void SetNumZValues(long nNewValue);
	long GetPaletteSteps();
	void SetPaletteSteps(long nNewValue);
	unsigned long GetStartColor();
	void SetStartColor(unsigned long newValue);
	BOOL GetUseColorRange();
	void SetUseColorRange(BOOL bNewValue);
	BOOL GetUsePalette();
	void SetUsePalette(BOOL bNewValue);
	double GetXZValue(long X, long Z);
	unsigned long GetSurfacePaletteColor(double Y);
	long AddPalette(double Value, unsigned long Color);
	void ClearPalette();
	void CreateDefaultPalette(long NumSteps);
	CBrush1 GetBrush();
	BOOL GetDotFrame();
	void SetDotFrame(BOOL bNewValue);
	CPen1 GetPen();
	BOOL GetWireFrame();
	void SetWireFrame(BOOL bNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SURFACESERIES_H__ED4D3A04_5B6F_4584_9898_CE44794AF1B6__INCLUDED_)
