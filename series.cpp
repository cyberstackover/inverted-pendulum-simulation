// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "series.h"

// Dispatch interfaces referenced by this interface
#include "AreaSeries.h"
#include "ArrowSeries.h"
#include "BarSeries.h"
#include "bubbleseries.h"
#include "candleseries.h"
#include "errorbarseries.h"
#include "FastLineSeries.h"
#include "ganttseries.h"
#include "HorizBarSeries.h"
#include "customseries.h"
#include "PieSeries.h"
#include "pointseries.h"
#include "PolarSeries.h"
#include "shapeseries.h"
#include "SurfaceSeries.h"
#include "VolumeSeries.h"
#include "teefunction.h"
#include "marks.h"
#include "valuelist.h"
#include "bezierseries.h"
#include "contourseries.h"
#include "ErrorSeries.h"
#include "Point3DSeries.h"
#include "RadarSeries.h"
#include "ClockSeries.h"
#include "WindRoseSeries.h"
#include "bar3dseries.h"
#include "imagebarseries.h"
#include "teepoint2d.h"


/////////////////////////////////////////////////////////////////////////////
// CSeries properties

/////////////////////////////////////////////////////////////////////////////
// CSeries operations

BOOL CSeries::GetActive()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CSeries::SetActive(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CAreaSeries CSeries::GetAsArea()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CAreaSeries(pDispatch);
}

CArrowSeries CSeries::GetAsArrow()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CArrowSeries(pDispatch);
}

CBarSeries CSeries::GetAsBar()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CBarSeries(pDispatch);
}

CBubbleSeries CSeries::GetAsBubble()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CBubbleSeries(pDispatch);
}

CCandleSeries CSeries::GetAsCandle()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CCandleSeries(pDispatch);
}

CErrorBarSeries CSeries::GetAsErrorBar()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CErrorBarSeries(pDispatch);
}

CFastLineSeries CSeries::GetAsFastLine()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CFastLineSeries(pDispatch);
}

CGanttSeries CSeries::GetAsGantt()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CGanttSeries(pDispatch);
}

CHorizBarSeries CSeries::GetAsHorizBar()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CHorizBarSeries(pDispatch);
}

CCustomSeries CSeries::GetAsLine()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CCustomSeries(pDispatch);
}

CPieSeries CSeries::GetAsPie()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPieSeries(pDispatch);
}

CPointSeries CSeries::GetAsPoint()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPointSeries(pDispatch);
}

CPolarSeries CSeries::GetAsPolar()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPolarSeries(pDispatch);
}

CShapeSeries CSeries::GetAsShape()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CShapeSeries(pDispatch);
}

CSurfaceSeries CSeries::GetAsSurface()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x12, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CSurfaceSeries(pDispatch);
}

CVolumeSeries CSeries::GetAsVolume()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x13, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CVolumeSeries(pDispatch);
}

unsigned long CSeries::GetColor()
{
	unsigned long result;
	InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CSeries::SetColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x14, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL CSeries::GetColorEachPoint()
{
	BOOL result;
	InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CSeries::SetColorEachPoint(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x15, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long CSeries::GetCount()
{
	long result;
	InvokeHelper(0x16, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

short CSeries::GetCursor()
{
	short result;
	InvokeHelper(0x17, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CSeries::SetCursor(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x17, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString CSeries::GetDataSource()
{
	CString result;
	InvokeHelper(0x18, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CSeries::SetDataSource(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x18, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long CSeries::GetFirstValueIndex()
{
	long result;
	InvokeHelper(0x19, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CTeeFunction CSeries::GetFunctionType()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x1a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTeeFunction(pDispatch);
}

long CSeries::GetHorizontalAxis()
{
	long result;
	InvokeHelper(0x1b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CSeries::SetHorizontalAxis(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString CSeries::GetLabelsSource()
{
	CString result;
	InvokeHelper(0x1c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CSeries::SetLabelsSource(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long CSeries::GetLastValueIndex()
{
	long result;
	InvokeHelper(0x1d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CMarks CSeries::GetMarks()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x1e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CMarks(pDispatch);
}

CString CSeries::GetName()
{
	CString result;
	InvokeHelper(0x1f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CSeries::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString CSeries::GetPercentFormat()
{
	CString result;
	InvokeHelper(0x21, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CSeries::SetPercentFormat(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x21, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

unsigned long CSeries::GetPointColor(long Index)
{
	unsigned long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x22, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, parms,
		Index);
	return result;
}

void CSeries::SetPointColor(long Index, unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x22, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 Index, newValue);
}

CString CSeries::GetPointLabel(long Index)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x23, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms,
		Index);
	return result;
}

void CSeries::SetPointLabel(long Index, LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x23, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 Index, lpszNewValue);
}

double CSeries::GetPointValue(long Index)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x24, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, parms,
		Index);
	return result;
}

void CSeries::SetPointValue(long Index, double newValue)
{
	static BYTE parms[] =
		VTS_I4 VTS_R8;
	InvokeHelper(0x24, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 Index, newValue);
}

long CSeries::GetSeriesType()
{
	long result;
	InvokeHelper(0x25, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL CSeries::GetShowInLegend()
{
	BOOL result;
	InvokeHelper(0x26, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CSeries::SetShowInLegend(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x26, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString CSeries::GetTitle()
{
	CString result;
	InvokeHelper(0x27, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CSeries::SetTitle(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x27, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString CSeries::GetValueFormat()
{
	CString result;
	InvokeHelper(0x28, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CSeries::SetValueFormat(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x28, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString CSeries::GetValueMarkText(long ValueIndex)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x29, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms,
		ValueIndex);
	return result;
}

long CSeries::GetVerticalAxis()
{
	long result;
	InvokeHelper(0x2a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CSeries::SetVerticalAxis(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CValueList CSeries::GetXValues()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x2b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CValueList(pDispatch);
}

CValueList CSeries::GetYValues()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x2c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CValueList(pDispatch);
}

long CSeries::GetZOrder()
{
	long result;
	InvokeHelper(0x2d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CSeries::Add(double AValue, LPCTSTR ALabel, unsigned long Value)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_BSTR VTS_I4;
	InvokeHelper(0x2e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		AValue, ALabel, Value);
	return result;
}

long CSeries::AddNull(LPCTSTR SomeLabel)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2f, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		SomeLabel);
	return result;
}

long CSeries::AddXY(double AX, double AY, LPCTSTR ALabel, unsigned long Value)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_BSTR VTS_I4;
	InvokeHelper(0x30, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		AX, AY, ALabel, Value);
	return result;
}

long CSeries::CalcXPos(long SomeValueIndex)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x31, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		SomeValueIndex);
	return result;
}

long CSeries::CalcXPosValue(double SomeValue)
{
	long result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x32, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		SomeValue);
	return result;
}

long CSeries::CalcXSizeValue(double SomeValue)
{
	long result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x33, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		SomeValue);
	return result;
}

long CSeries::CalcYPos(long SomeValueIndex)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x34, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		SomeValueIndex);
	return result;
}

long CSeries::CalcYPosValue(double SomeValue)
{
	long result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x35, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		SomeValue);
	return result;
}

long CSeries::CalcYSizeValue(double SomeValue)
{
	long result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x36, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		SomeValue);
	return result;
}

void CSeries::CheckDataSource()
{
	InvokeHelper(0x37, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CSeries::Clear()
{
	InvokeHelper(0x38, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long CSeries::Clicked(long XCoord, long YCoord)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x39, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		XCoord, YCoord);
	return result;
}

void CSeries::Delete(long Index)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3a, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Index);
}

void CSeries::FillSampleValues(long NumValues)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3b, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 NumValues);
}

long CSeries::GetMousePoint()
{
	long result;
	InvokeHelper(0x3c, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL CSeries::IsNull(long ValueIndex)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3d, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		ValueIndex);
	return result;
}

void CSeries::RefreshSeries()
{
	InvokeHelper(0x3e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CSeries::SetFunction(long AFunction)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 AFunction);
}

void CSeries::SwapValues(long a, long b)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x40, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 a, b);
}

double CSeries::XScreenToValue(long ScreenCoord)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x41, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		ScreenCoord);
	return result;
}

CString CSeries::XValueToText(double SomeValue)
{
	CString result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x42, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		SomeValue);
	return result;
}

double CSeries::YScreenToValue(long ScreenCoord)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x43, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		ScreenCoord);
	return result;
}

CString CSeries::YValueToText(double SomeValue)
{
	CString result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x44, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		SomeValue);
	return result;
}

CBezierSeries CSeries::GetAsBezier()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CBezierSeries(pDispatch);
}

CContourSeries CSeries::GetAsContour()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CContourSeries(pDispatch);
}

CErrorSeries CSeries::GetAsError()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x45, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CErrorSeries(pDispatch);
}

CPoint3DSeries CSeries::GetAsPoint3D()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x46, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPoint3DSeries(pDispatch);
}

CRadarSeries CSeries::GetAsRadar()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x47, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CRadarSeries(pDispatch);
}

long CSeries::AddNullXY(long X, long Y, LPCTSTR ALabel)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_BSTR;
	InvokeHelper(0x48, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		X, Y, ALabel);
	return result;
}

CString CSeries::LegendString(long LegendIndex, long LegendTextStyle)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x49, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		LegendIndex, LegendTextStyle);
	return result;
}

unsigned long CSeries::LegendItemColor(long LegendIndex)
{
	unsigned long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4a, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		LegendIndex);
	return result;
}

long CSeries::CountLegendItems()
{
	long result;
	InvokeHelper(0x4b, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CSeries::LegendToValueIndex(long LegendIndex)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		LegendIndex);
	return result;
}

long CSeries::VisibleCount()
{
	long result;
	InvokeHelper(0x4d, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

void CSeries::AssignValues(long SeriesIndex)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 SeriesIndex);
}

long CSeries::GetHorizontalAxisCustom()
{
	long result;
	InvokeHelper(0x20, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CSeries::SetHorizontalAxisCustom(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x20, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CSeries::GetVerticalAxisCustom()
{
	long result;
	InvokeHelper(0x4e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CSeries::SetVerticalAxisCustom(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CClockSeries CSeries::GetAsClock()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x50, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CClockSeries(pDispatch);
}

CWindRoseSeries CSeries::GetAsWindRose()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x51, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CWindRoseSeries(pDispatch);
}

CBar3DSeries CSeries::GetAsBar3D()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x52, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CBar3DSeries(pDispatch);
}

CImageBarSeries CSeries::GetAsImageBar()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x53, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CImageBarSeries(pDispatch);
}

void CSeries::DisconnectAxisCustom(BOOL IsHorizontal)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x54, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 IsHorizontal);
}

CTeePoint2D CSeries::GetMouseValues()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x56, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTeePoint2D(pDispatch);
}
