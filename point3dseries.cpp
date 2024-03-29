// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "point3dseries.h"

// Dispatch interfaces referenced by this interface
#include "valuelist.h"
#include "Pointer.h"
#include "pen.h"


/////////////////////////////////////////////////////////////////////////////
// CPoint3DSeries properties

/////////////////////////////////////////////////////////////////////////////
// CPoint3DSeries operations

long CPoint3DSeries::AddXYZ(long AX, double AY, long AZ, LPCTSTR AXLabel, unsigned long Value)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_I4 VTS_BSTR VTS_I4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		AX, AY, AZ, AXLabel, Value);
	return result;
}

void CPoint3DSeries::MaxZValue()
{
	InvokeHelper(0x1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CPoint3DSeries::MinZValue()
{
	InvokeHelper(0x2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long CPoint3DSeries::GetTimesZOrder()
{
	long result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPoint3DSeries::SetTimesZOrder(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CValueList CPoint3DSeries::GetZValues()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CValueList(pDispatch);
}

double CPoint3DSeries::GetZValue(long Index)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, parms,
		Index);
	return result;
}

void CPoint3DSeries::SetZValue(long Index, double newValue)
{
	static BYTE parms[] =
		VTS_I4 VTS_R8;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 Index, newValue);
}

double CPoint3DSeries::GetDepthSize()
{
	double result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CPoint3DSeries::SetDepthSize(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x65, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

CPointer CPoint3DSeries::GetPointer()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPointer(pDispatch);
}

CPen1 CPoint3DSeries::GetLinePen()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPen1(pDispatch);
}
