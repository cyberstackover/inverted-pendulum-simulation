// InvertedPendulumFixDlg.h : header file
//
//{{AFX_INCLUDES()
#include "tchart.h"
//}}AFX_INCLUDES

#if !defined(AFX_INVERTEDPENDULUMFIXDLG_H__53847AFE_35BE_4D54_9E8C_7B6DADEAE5B1__INCLUDED_)
#define AFX_INVERTEDPENDULUMFIXDLG_H__53847AFE_35BE_4D54_9E8C_7B6DADEAE5B1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CInvertedPendulumFixDlg dialog

class CInvertedPendulumFixDlg : public CDialog
{
// Construction
public:
	CInvertedPendulumFixDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CInvertedPendulumFixDlg)
	enum { IDD = IDD_INVERTEDPENDULUMFIX_DIALOG };
	CTChart	CCart;
	int		FORCE;
	int		GAIN_P;
	int		GAIN_D;
	int		GAIN_I;
	CTChart	CPendulum;
	double	PErr;
	double	IErr;
	double	DErr;
	double	PV;
	double	MV;
	CTChart	CPerror;
	CTChart	CIError;
	CTChart	CDError;
	CTChart	CForce;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CInvertedPendulumFixDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CInvertedPendulumFixDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INVERTEDPENDULUMFIXDLG_H__53847AFE_35BE_4D54_9E8C_7B6DADEAE5B1__INCLUDED_)
