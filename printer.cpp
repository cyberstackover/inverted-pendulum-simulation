// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "printer.h"


/////////////////////////////////////////////////////////////////////////////
// CPrinter properties

/////////////////////////////////////////////////////////////////////////////
// CPrinter operations

long CPrinter::GetDetail()
{
	long result;
	InvokeHelper(0x18, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPrinter::SetDetail(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x18, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPrinter::GetMarginBottom()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPrinter::SetMarginBottom(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPrinter::GetMarginLeft()
{
	long result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPrinter::SetMarginLeft(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPrinter::GetMarginTop()
{
	long result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPrinter::SetMarginTop(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPrinter::GetMarginRight()
{
	long result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPrinter::SetMarginRight(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPrinter::GetOrientation()
{
	long result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPrinter::SetOrientation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void CPrinter::Print()
{
	InvokeHelper(0x40, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CPrinter::PrintLandscape()
{
	InvokeHelper(0x41, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CPrinter::PrintPortrait()
{
	InvokeHelper(0x43, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CPrinter::ShowPreview()
{
	InvokeHelper(0x1c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CPrinter::PrintPartial(long Left, long Top, long Right, long Bottom)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Left, Top, Right, Bottom);
}

void CPrinter::BeginDoc()
{
	InvokeHelper(0x7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CPrinter::EndDoc()
{
	InvokeHelper(0x8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long CPrinter::GetPrinterIndex()
{
	long result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPrinter::SetPrinterIndex(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPrinter::GetPrinterCount()
{
	long result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString CPrinter::GetPrinterDescription(long Index)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms,
		Index);
	return result;
}

void CPrinter::PrintChart()
{
	InvokeHelper(0xc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long CPrinter::GetPageHeight()
{
	long result;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CPrinter::GetPageWidth()
{
	long result;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString CPrinter::GetJobTitle()
{
	CString result;
	InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CPrinter::SetJobTitle(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL CPrinter::GetPrintProportional()
{
	BOOL result;
	InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CPrinter::SetPrintProportional(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x11, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void CPrinter::PrintPartialHandle(const VARIANT& DC, long Left, long Top, long Right, long Bottom)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x12, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &DC, Left, Top, Right, Bottom);
}
