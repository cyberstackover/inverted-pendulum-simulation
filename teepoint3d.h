#if !defined(AFX_TEEPOINT3D_H__CC09D1DE_D1DC_4822_95A6_B1094DFED3E6__INCLUDED_)
#define AFX_TEEPOINT3D_H__CC09D1DE_D1DC_4822_95A6_B1094DFED3E6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CTeePoint3D wrapper class

class CTeePoint3D : public COleDispatchDriver
{
public:
	CTeePoint3D() {}		// Calls COleDispatchDriver default constructor
	CTeePoint3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CTeePoint3D(const CTeePoint3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetX();
	void SetX(double newValue);
	double GetY();
	void SetY(double newValue);
	double GetZ();
	void SetZ(double newValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEEPOINT3D_H__CC09D1DE_D1DC_4822_95A6_B1094DFED3E6__INCLUDED_)
