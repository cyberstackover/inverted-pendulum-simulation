// InvertedPendulumFixDlg.cpp : implementation file
//

#include "stdafx.h"
#include "InvertedPendulumFix.h"
#include "InvertedPendulumFixDlg.h"
#include "Series.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CInvertedPendulumFixDlg dialog

CInvertedPendulumFixDlg::CInvertedPendulumFixDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CInvertedPendulumFixDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CInvertedPendulumFixDlg)
	FORCE = 0;
	GAIN_P = 0;
	GAIN_D = 0;
	GAIN_I = 0;
	PErr = 0.0;
	IErr = 0.0;
	DErr = 0.0;
	PV = 0.0;
	MV = 0.0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CInvertedPendulumFixDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CInvertedPendulumFixDlg)
	DDX_Control(pDX, IDC_TCHART1, CCart);
	DDX_Text(pDX, IDC_EDIT1, FORCE);
	DDX_Text(pDX, IDC_EDIT2, GAIN_P);
	DDX_Text(pDX, IDC_EDIT4, GAIN_D);
	DDX_Text(pDX, IDC_EDIT3, GAIN_I);
	DDX_Control(pDX, IDC_TCHART2, CPendulum);
	DDX_Text(pDX, IDC_EDIT5, PErr);
	DDX_Text(pDX, IDC_EDIT7, IErr);
	DDX_Text(pDX, IDC_EDIT8, DErr);
	DDX_Text(pDX, IDC_EDIT6, PV);
	DDX_Text(pDX, IDC_EDIT9, MV);
	DDX_Control(pDX, IDC_TCHART3, CPerror);
	DDX_Control(pDX, IDC_TCHART4, CIError);
	DDX_Control(pDX, IDC_TCHART5, CDError);
	DDX_Control(pDX, IDC_TCHART6, CForce);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CInvertedPendulumFixDlg, CDialog)
	//{{AFX_MSG_MAP(CInvertedPendulumFixDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_WM_TIMER()
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CInvertedPendulumFixDlg message handlers

BOOL CInvertedPendulumFixDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CInvertedPendulumFixDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CInvertedPendulumFixDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CInvertedPendulumFixDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}
#define samp 1000
int i, gaya,kp=1000,ki=10,kd=10,sent = 0,max=90,min=-90;
double out[samp],error[samp],PID[samp],derivative,integral=0,ts=0.01;
void clearVar(){
	int i=0;
	for(i=0;i<samp;i++){
		gaya=0;
		out[i]=0;
		error[i]=0;
		PID[i]=0;
		derivative=0;
		integral=0;
	}
}
void CInvertedPendulumFixDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	UpdateData(1);
	i=0;
	PErr=0;
	IErr=0;
	DErr=0;

	clearVar();
	
	CCart.GetSeries(0).Clear();
	CPendulum.GetSeries(0).Clear();
	CPendulum.GetSeries(1).Clear();
	CPerror.GetSeries(0).Clear();
	CIError.GetSeries(0).Clear();
	CDError.GetSeries(0).Clear();
	CForce.GetSeries(0).Clear();
	SetTimer(0,0,0);
	UpdateData(0);
}

void CInvertedPendulumFixDlg::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	CDialog::OnTimer(nIDEvent);
	UpdateData(1);
	out[i]= 0.0002272*PID[i-1]-0.0000001377*PID[i-2]-0.0002271*PID[i-3]+3.001*out[i-1]-2.999*out[i-2]+0.9982*out[i-3];
	error[i] =  out[i];
	integral = (error[i]+error[i-1])*ts;		
	derivative = (error[i]-error[i-1])/ts;
	
	PErr = error[i]*-kp;
	IErr = integral*-ki;
	DErr = derivative*-kd;
	PID[i] = PErr + IErr + DErr;
	if(sent == 1) {
		PID[i]+=gaya;
		sent = 0;
	}
	PV = out[i];
	MV = PID[i];
	if(out[i]>=max){
		CPendulum.GetSeries(0).AddXY(max,-max,"",RGB(0,0,255));
		CPendulum.GetSeries(1).AddXY(max,-55,"",RGB(255,0,0));
		if(gaya<0)
			CPendulum.GetSeries(1).AddXY(40,-50,"",RGB(255,0,0));
		else
		CPendulum.GetSeries(1).AddXY(40,-50,"",RGB(255,0,0));
	}
	else if(out[i]<=min){
		CPendulum.GetSeries(0).AddXY(min,min,"",RGB(10,10,255));
		CPendulum.GetSeries(1).AddXY(min,-55,"",RGB(255,255,0));
		if(gaya<0)
			CPendulum.GetSeries(1).AddXY(-40,-50,"",RGB(255,255,0));
		else
		CPendulum.GetSeries(1).AddXY(-40,-50,"",RGB(255,255,0));
	}
	else{
		CPendulum.GetSeries(0).AddXY(out[i],-90,"",RGB(10,10,255));
		CPendulum.GetSeries(1).AddXY(out[i],-55,"",RGB(255,255,0));
		if(gaya<0)
			CPendulum.GetSeries(1).AddXY(-out[i],90-(out[i]*2*-1),"",RGB(255,255,0));
		else
			CPendulum.GetSeries(1).AddXY(-out[i],90-(out[i]*2*1),"",RGB(255,255,0));
	}
	
	CCart.GetSeries(0).AddXY(i*ts,out[i],"",RGB(0,0,255));
	CPerror.GetSeries(0).AddXY(i*ts,PErr,"",RGB(0,0,255));
	CIError.GetSeries(0).AddXY(i*ts,IErr,"",RGB(0,0,255));
	CDError.GetSeries(0).AddXY(i*ts,DErr,"",RGB(0,0,255));
	CForce.GetSeries(0).AddXY(i*ts,gaya,"",RGB(0,0,255));
	i++;
	if(i%2==0){
		CPendulum.GetSeries(0).Clear();
		CPendulum.GetSeries(1).Clear();
	}
	
	if(i==samp){
		CPendulum.GetSeries(0).AddXY(out[i],-90,"",RGB(10,10,255));KillTimer(0);
		CPendulum.GetSeries(1).AddXY(out[i],-55,"",RGB(255,255,0));KillTimer(0);
		CPendulum.GetSeries(1).AddXY(out[i],90,"",RGB(255,255,0));KillTimer(0);
	}

	
	
	UpdateData(0);
}

void CInvertedPendulumFixDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	UpdateData(1);
	kp = GAIN_P;
	kd = GAIN_D;
	ki = GAIN_I;
	gaya = FORCE;
	UpdateData(0);
	sent=1;

	if(gaya==10000){gaya-=9500;}
	if(gaya==1000){gaya-=900;}
}

void CInvertedPendulumFixDlg::OnButton3() 
{
	KillTimer(0);	
}
