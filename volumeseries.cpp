// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "volumeseries.h"

// Dispatch interfaces referenced by this interface
#include "valuelist.h"
#include "pen.h"


/////////////////////////////////////////////////////////////////////////////
// CVolumeSeries properties

/////////////////////////////////////////////////////////////////////////////
// CVolumeSeries operations

CValueList CVolumeSeries::GetVolumeValues()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x1e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CValueList(pDispatch);
}

CPen1 CVolumeSeries::GetLinePen()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPen1(pDispatch);
}
