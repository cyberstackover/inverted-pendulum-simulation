# Microsoft Developer Studio Project File - Name="InvertedPendulumFix" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=InvertedPendulumFix - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "InvertedPendulumFix.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "InvertedPendulumFix.mak" CFG="InvertedPendulumFix - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "InvertedPendulumFix - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "InvertedPendulumFix - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "InvertedPendulumFix - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x409 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "InvertedPendulumFix - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ  /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /GZ   /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x409 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "InvertedPendulumFix - Win32 Release"
# Name "InvertedPendulumFix - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\areaseries.cpp
# End Source File
# Begin Source File

SOURCE=.\arrowseries.cpp
# End Source File
# Begin Source File

SOURCE=.\aspect.cpp
# End Source File
# Begin Source File

SOURCE=.\axes.cpp
# End Source File
# Begin Source File

SOURCE=.\axis.cpp
# End Source File
# Begin Source File

SOURCE=.\axislabels.cpp
# End Source File
# Begin Source File

SOURCE=.\axistitle.cpp
# End Source File
# Begin Source File

SOURCE=.\bar3dseries.cpp
# End Source File
# Begin Source File

SOURCE=.\barseries.cpp
# End Source File
# Begin Source File

SOURCE=.\bezierseries.cpp
# End Source File
# Begin Source File

SOURCE=.\brush.cpp
# End Source File
# Begin Source File

SOURCE=.\bubbleseries.cpp
# End Source File
# Begin Source File

SOURCE=.\candleseries.cpp
# End Source File
# Begin Source File

SOURCE=.\canvas.cpp
# End Source File
# Begin Source File

SOURCE=.\chartfont.cpp
# End Source File
# Begin Source File

SOURCE=.\circlelabels.cpp
# End Source File
# Begin Source File

SOURCE=.\clockseries.cpp
# End Source File
# Begin Source File

SOURCE=.\contourseries.cpp
# End Source File
# Begin Source File

SOURCE=.\curvefittingfunction.cpp
# End Source File
# Begin Source File

SOURCE=.\customseries.cpp
# End Source File
# Begin Source File

SOURCE=.\environment.cpp
# End Source File
# Begin Source File

SOURCE=.\errorbarseries.cpp
# End Source File
# Begin Source File

SOURCE=.\errorseries.cpp
# End Source File
# Begin Source File

SOURCE=.\expavgfunction.cpp
# End Source File
# Begin Source File

SOURCE=.\explodedslices.cpp
# End Source File
# Begin Source File

SOURCE=.\export.cpp
# End Source File
# Begin Source File

SOURCE=.\fastlineseries.cpp
# End Source File
# Begin Source File

SOURCE=.\ganttseries.cpp
# End Source File
# Begin Source File

SOURCE=.\gradient.cpp
# End Source File
# Begin Source File

SOURCE=.\horizbarseries.cpp
# End Source File
# Begin Source File

SOURCE=.\imagebarseries.cpp
# End Source File
# Begin Source File

SOURCE=.\import.cpp
# End Source File
# Begin Source File

SOURCE=.\InvertedPendulumFix.cpp
# End Source File
# Begin Source File

SOURCE=.\InvertedPendulumFix.rc
# End Source File
# Begin Source File

SOURCE=.\InvertedPendulumFixDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\legend.cpp
# End Source File
# Begin Source File

SOURCE=.\marks.cpp
# End Source File
# Begin Source File

SOURCE=.\movingavgfunction.cpp
# End Source File
# Begin Source File

SOURCE=.\page.cpp
# End Source File
# Begin Source File

SOURCE=.\panel.cpp
# End Source File
# Begin Source File

SOURCE=.\pen.cpp
# End Source File
# Begin Source File

SOURCE=.\pieotherslice.cpp
# End Source File
# Begin Source File

SOURCE=.\pieseries.cpp
# End Source File
# Begin Source File

SOURCE=.\point3dseries.cpp
# End Source File
# Begin Source File

SOURCE=.\pointer.cpp
# End Source File
# Begin Source File

SOURCE=.\pointseries.cpp
# End Source File
# Begin Source File

SOURCE=.\polarseries.cpp
# End Source File
# Begin Source File

SOURCE=.\printer.cpp
# End Source File
# Begin Source File

SOURCE=.\radarseries.cpp
# End Source File
# Begin Source File

SOURCE=.\scroll.cpp
# End Source File
# Begin Source File

SOURCE=.\series.cpp
# End Source File
# Begin Source File

SOURCE=.\seriesmarkposition.cpp
# End Source File
# Begin Source File

SOURCE=.\seriesmarkspositions.cpp
# End Source File
# Begin Source File

SOURCE=.\shapeseries.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\stddeviationfunction.cpp
# End Source File
# Begin Source File

SOURCE=.\strings.cpp
# End Source File
# Begin Source File

SOURCE=.\surfaceseries.cpp
# End Source File
# Begin Source File

SOURCE=.\tchart.cpp
# End Source File
# Begin Source File

SOURCE=.\teefunction.cpp
# End Source File
# Begin Source File

SOURCE=.\teeopengl.cpp
# End Source File
# Begin Source File

SOURCE=.\teepoint2d.cpp
# End Source File
# Begin Source File

SOURCE=.\teepoint3d.cpp
# End Source File
# Begin Source File

SOURCE=.\titles.cpp
# End Source File
# Begin Source File

SOURCE=.\valuelist.cpp
# End Source File
# Begin Source File

SOURCE=.\volumeseries.cpp
# End Source File
# Begin Source File

SOURCE=.\wall.cpp
# End Source File
# Begin Source File

SOURCE=.\walls.cpp
# End Source File
# Begin Source File

SOURCE=.\windroseseries.cpp
# End Source File
# Begin Source File

SOURCE=.\zoom.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\areaseries.h
# End Source File
# Begin Source File

SOURCE=.\arrowseries.h
# End Source File
# Begin Source File

SOURCE=.\aspect.h
# End Source File
# Begin Source File

SOURCE=.\axes.h
# End Source File
# Begin Source File

SOURCE=.\axis.h
# End Source File
# Begin Source File

SOURCE=.\axislabels.h
# End Source File
# Begin Source File

SOURCE=.\axistitle.h
# End Source File
# Begin Source File

SOURCE=.\bar3dseries.h
# End Source File
# Begin Source File

SOURCE=.\barseries.h
# End Source File
# Begin Source File

SOURCE=.\bezierseries.h
# End Source File
# Begin Source File

SOURCE=.\brush.h
# End Source File
# Begin Source File

SOURCE=.\bubbleseries.h
# End Source File
# Begin Source File

SOURCE=.\candleseries.h
# End Source File
# Begin Source File

SOURCE=.\canvas.h
# End Source File
# Begin Source File

SOURCE=.\chartfont.h
# End Source File
# Begin Source File

SOURCE=.\circlelabels.h
# End Source File
# Begin Source File

SOURCE=.\clockseries.h
# End Source File
# Begin Source File

SOURCE=.\contourseries.h
# End Source File
# Begin Source File

SOURCE=.\curvefittingfunction.h
# End Source File
# Begin Source File

SOURCE=.\customseries.h
# End Source File
# Begin Source File

SOURCE=.\environment.h
# End Source File
# Begin Source File

SOURCE=.\errorbarseries.h
# End Source File
# Begin Source File

SOURCE=.\errorseries.h
# End Source File
# Begin Source File

SOURCE=.\expavgfunction.h
# End Source File
# Begin Source File

SOURCE=.\explodedslices.h
# End Source File
# Begin Source File

SOURCE=.\export.h
# End Source File
# Begin Source File

SOURCE=.\fastlineseries.h
# End Source File
# Begin Source File

SOURCE=.\ganttseries.h
# End Source File
# Begin Source File

SOURCE=.\gradient.h
# End Source File
# Begin Source File

SOURCE=.\horizbarseries.h
# End Source File
# Begin Source File

SOURCE=.\imagebarseries.h
# End Source File
# Begin Source File

SOURCE=.\import.h
# End Source File
# Begin Source File

SOURCE=.\InvertedPendulumFix.h
# End Source File
# Begin Source File

SOURCE=.\InvertedPendulumFixDlg.h
# End Source File
# Begin Source File

SOURCE=.\legend.h
# End Source File
# Begin Source File

SOURCE=.\marks.h
# End Source File
# Begin Source File

SOURCE=.\movingavgfunction.h
# End Source File
# Begin Source File

SOURCE=.\page.h
# End Source File
# Begin Source File

SOURCE=.\panel.h
# End Source File
# Begin Source File

SOURCE=.\pen.h
# End Source File
# Begin Source File

SOURCE=.\pieotherslice.h
# End Source File
# Begin Source File

SOURCE=.\pieseries.h
# End Source File
# Begin Source File

SOURCE=.\point3dseries.h
# End Source File
# Begin Source File

SOURCE=.\pointer.h
# End Source File
# Begin Source File

SOURCE=.\pointseries.h
# End Source File
# Begin Source File

SOURCE=.\polarseries.h
# End Source File
# Begin Source File

SOURCE=.\printer.h
# End Source File
# Begin Source File

SOURCE=.\radarseries.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\scroll.h
# End Source File
# Begin Source File

SOURCE=.\series.h
# End Source File
# Begin Source File

SOURCE=.\seriesmarkposition.h
# End Source File
# Begin Source File

SOURCE=.\seriesmarkspositions.h
# End Source File
# Begin Source File

SOURCE=.\shapeseries.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\stddeviationfunction.h
# End Source File
# Begin Source File

SOURCE=.\strings.h
# End Source File
# Begin Source File

SOURCE=.\surfaceseries.h
# End Source File
# Begin Source File

SOURCE=.\tchart.h
# End Source File
# Begin Source File

SOURCE=.\teefunction.h
# End Source File
# Begin Source File

SOURCE=.\teeopengl.h
# End Source File
# Begin Source File

SOURCE=.\teepoint2d.h
# End Source File
# Begin Source File

SOURCE=.\teepoint3d.h
# End Source File
# Begin Source File

SOURCE=.\titles.h
# End Source File
# Begin Source File

SOURCE=.\valuelist.h
# End Source File
# Begin Source File

SOURCE=.\volumeseries.h
# End Source File
# Begin Source File

SOURCE=.\wall.h
# End Source File
# Begin Source File

SOURCE=.\walls.h
# End Source File
# Begin Source File

SOURCE=.\windroseseries.h
# End Source File
# Begin Source File

SOURCE=.\zoom.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\InvertedPendulumFix.ico
# End Source File
# Begin Source File

SOURCE=.\res\InvertedPendulumFix.rc2
# End Source File
# End Group
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# End Target
# End Project
# Section InvertedPendulumFix : {6F617F0E-CFA9-11D0-BEED-00AA00C9A74F}
# 	2:5:Class:CSeries
# 	2:10:HeaderFile:series.h
# 	2:8:ImplFile:series.cpp
# End Section
# Section InvertedPendulumFix : {23E77A81-ACE1-11D2-80AE-006097385FF5}
# 	2:5:Class:CBar3DSeries
# 	2:10:HeaderFile:bar3dseries.h
# 	2:8:ImplFile:bar3dseries.cpp
# End Section
# Section InvertedPendulumFix : {07A65C40-3DA6-11D1-AB57-00400141862D}
# 	2:5:Class:CZoom
# 	2:10:HeaderFile:zoom.h
# 	2:8:ImplFile:zoom.cpp
# End Section
# Section InvertedPendulumFix : {6F617F12-CFA9-11D0-BEED-00AA00C9A74F}
# 	2:5:Class:CPointSeries
# 	2:10:HeaderFile:pointseries.h
# 	2:8:ImplFile:pointseries.cpp
# End Section
# Section InvertedPendulumFix : {008BBE7C-C096-11D0-B4E3-00A0C901D681}
# 	2:5:Class:CTChart
# 	2:10:HeaderFile:tchart.h
# 	2:8:ImplFile:tchart.cpp
# End Section
# Section InvertedPendulumFix : {7D423BA1-D053-11D0-9F64-837B7E193D48}
# 	2:5:Class:CGradient
# 	2:10:HeaderFile:gradient.h
# 	2:8:ImplFile:gradient.cpp
# End Section
# Section InvertedPendulumFix : {A9752906-3FA0-11D1-9F64-444553540000}
# 	2:5:Class:CMovingAvgFunction
# 	2:10:HeaderFile:movingavgfunction.h
# 	2:8:ImplFile:movingavgfunction.cpp
# End Section
# Section InvertedPendulumFix : {ED84FB83-A700-11D2-80AB-006097385FF5}
# 	2:5:Class:CWindRoseSeries
# 	2:10:HeaderFile:windroseseries.h
# 	2:8:ImplFile:windroseseries.cpp
# End Section
# Section InvertedPendulumFix : {F3A0ED82-3C01-11D1-AB52-00400141862D}
# 	2:5:Class:CWalls
# 	2:10:HeaderFile:walls.h
# 	2:8:ImplFile:walls.cpp
# End Section
# Section InvertedPendulumFix : {554B3033-47C5-11D2-AEC7-00400141862D}
# 	2:5:Class:CSeriesMarkPosition
# 	2:10:HeaderFile:seriesmarkposition.h
# 	2:8:ImplFile:seriesmarkposition.cpp
# End Section
# Section InvertedPendulumFix : {A748ECF1-A3DD-11D2-80A6-006097385FF5}
# 	2:5:Class:CTeeOpenGL
# 	2:10:HeaderFile:teeopengl.h
# 	2:8:ImplFile:teeopengl.cpp
# End Section
# Section InvertedPendulumFix : {273020D1-95B6-11D2-809C-006097385FF5}
# 	2:5:Class:CTeePoint3D
# 	2:10:HeaderFile:teepoint3d.h
# 	2:8:ImplFile:teepoint3d.cpp
# End Section
# Section InvertedPendulumFix : {6F617F11-CFA9-11D0-BEED-00AA00C9A74F}
# 	2:5:Class:CAreaSeries
# 	2:10:HeaderFile:areaseries.h
# 	2:8:ImplFile:areaseries.cpp
# End Section
# Section InvertedPendulumFix : {9F932476-4311-11D2-AEBC-00400141862D}
# 	2:5:Class:CExplodedSlices
# 	2:10:HeaderFile:explodedslices.h
# 	2:8:ImplFile:explodedslices.cpp
# End Section
# Section InvertedPendulumFix : {C648F0C8-B5C8-11D0-9F64-B10C6D3C1C4F}
# 	2:5:Class:CPage
# 	2:10:HeaderFile:page.h
# 	2:8:ImplFile:page.cpp
# End Section
# Section InvertedPendulumFix : {6F617F41-CFA9-11D0-BEED-00AA00C9A74F}
# 	2:5:Class:CFastLineSeries
# 	2:10:HeaderFile:fastlineseries.h
# 	2:8:ImplFile:fastlineseries.cpp
# End Section
# Section InvertedPendulumFix : {3EDC0326-4C6C-11D2-AED0-00400141862D}
# 	2:5:Class:CStdDeviationFunction
# 	2:10:HeaderFile:stddeviationfunction.h
# 	2:8:ImplFile:stddeviationfunction.cpp
# End Section
# Section InvertedPendulumFix : {DD96FA40-D15C-11D0-9F64-9B8561B59916}
# 	2:5:Class:CAxes
# 	2:10:HeaderFile:axes.h
# 	2:8:ImplFile:axes.cpp
# End Section
# Section InvertedPendulumFix : {133FE602-D1CD-11D0-84B8-006097386599}
# 	2:5:Class:CAxisTitle
# 	2:10:HeaderFile:axistitle.h
# 	2:8:ImplFile:axistitle.cpp
# End Section
# Section InvertedPendulumFix : {B6352502-45FD-11D1-AB84-00400141862D}
# 	2:5:Class:CImport
# 	2:10:HeaderFile:import.h
# 	2:8:ImplFile:import.cpp
# End Section
# Section InvertedPendulumFix : {DFBF9395-46FD-11D2-AEC3-00400141862D}
# 	2:5:Class:CPoint3DSeries
# 	2:10:HeaderFile:point3dseries.h
# 	2:8:ImplFile:point3dseries.cpp
# End Section
# Section InvertedPendulumFix : {495A9400-D2B9-11D0-9F64-9FE810E73741}
# 	2:5:Class:CLegend
# 	2:10:HeaderFile:legend.h
# 	2:8:ImplFile:legend.cpp
# End Section
# Section InvertedPendulumFix : {9B02A321-CDF4-11D0-84B8-006097386599}
# 	2:5:Class:CAxis
# 	2:10:HeaderFile:axis.h
# 	2:8:ImplFile:axis.cpp
# End Section
# Section InvertedPendulumFix : {2800ECA0-D098-11D0-9F64-BF71EF49FEF2}
# 	2:5:Class:CTitles
# 	2:10:HeaderFile:titles.h
# 	2:8:ImplFile:titles.cpp
# End Section
# Section InvertedPendulumFix : {EE05DFE2-5549-11D0-9EA9-0020AF3D82DA}
# 	2:5:Class:CStrings
# 	2:10:HeaderFile:strings.h
# 	2:8:ImplFile:strings.cpp
# End Section
# Section InvertedPendulumFix : {6F617F15-CFA9-11D0-BEED-00AA00C9A74F}
# 	2:5:Class:CHorizBarSeries
# 	2:10:HeaderFile:horizbarseries.h
# 	2:8:ImplFile:horizbarseries.cpp
# End Section
# Section InvertedPendulumFix : {49006AC3-099B-11D1-9F64-444553540000}
# 	2:5:Class:CVolumeSeries
# 	2:10:HeaderFile:volumeseries.h
# 	2:8:ImplFile:volumeseries.cpp
# End Section
# Section InvertedPendulumFix : {A9752900-3FA0-11D1-9F64-444553540000}
# 	2:5:Class:CCurveFittingFunction
# 	2:10:HeaderFile:curvefittingfunction.h
# 	2:8:ImplFile:curvefittingfunction.cpp
# End Section
# Section InvertedPendulumFix : {8B625A00-3A9A-11D1-AB4E-00400141862D}
# 	2:5:Class:CCanvas
# 	2:10:HeaderFile:canvas.h
# 	2:8:ImplFile:canvas.cpp
# End Section
# Section InvertedPendulumFix : {6F617F40-CFA9-11D0-BEED-00AA00C9A74F}
# 	2:5:Class:CPieSeries
# 	2:10:HeaderFile:pieseries.h
# 	2:8:ImplFile:pieseries.cpp
# End Section
# Section InvertedPendulumFix : {D151BD25-0900-11D1-ABC8-006097385FF5}
# 	2:5:Class:CSurfaceSeries
# 	2:10:HeaderFile:surfaceseries.h
# 	2:8:ImplFile:surfaceseries.cpp
# End Section
# Section InvertedPendulumFix : {BEF6E002-A874-101A-8BBA-00AA00300CAB}
# 	2:5:Class:CChartFont
# 	2:10:HeaderFile:chartfont.h
# 	2:8:ImplFile:chartfont.cpp
# End Section
# Section InvertedPendulumFix : {00561F62-EFA9-11D0-9F64-DE033FB8E6C0}
# 	2:5:Class:CArrowSeries
# 	2:10:HeaderFile:arrowseries.h
# 	2:8:ImplFile:arrowseries.cpp
# End Section
# Section InvertedPendulumFix : {D151BD20-0900-11D1-ABC8-006097385FF5}
# 	2:5:Class:CPolarSeries
# 	2:10:HeaderFile:polarseries.h
# 	2:8:ImplFile:polarseries.cpp
# End Section
# Section InvertedPendulumFix : {554B3031-47C5-11D2-AEC7-00400141862D}
# 	2:5:Class:CSeriesMarksPositions
# 	2:10:HeaderFile:seriesmarkspositions.h
# 	2:8:ImplFile:seriesmarkspositions.cpp
# End Section
# Section InvertedPendulumFix : {DFBF9399-46FD-11D2-AEC3-00400141862D}
# 	2:5:Class:CRadarSeries
# 	2:10:HeaderFile:radarseries.h
# 	2:8:ImplFile:radarseries.cpp
# End Section
# Section InvertedPendulumFix : {A75A3DE1-4BE2-11D2-AECF-00400141862D}
# 	2:5:Class:CCircleLabels
# 	2:10:HeaderFile:circlelabels.h
# 	2:8:ImplFile:circlelabels.cpp
# End Section
# Section InvertedPendulumFix : {07A65C42-3DA6-11D1-AB57-00400141862D}
# 	2:5:Class:CScroll
# 	2:10:HeaderFile:scroll.h
# 	2:8:ImplFile:scroll.cpp
# End Section
# Section InvertedPendulumFix : {6F617F39-CFA9-11D0-BEED-00AA00C9A74F}
# 	2:5:Class:CPointer
# 	2:10:HeaderFile:pointer.h
# 	2:8:ImplFile:pointer.cpp
# End Section
# Section InvertedPendulumFix : {6F617F14-CFA9-11D0-BEED-00AA00C9A74F}
# 	2:5:Class:CBarSeries
# 	2:10:HeaderFile:barseries.h
# 	2:8:ImplFile:barseries.cpp
# End Section
# Section InvertedPendulumFix : {DFBF939B-46FD-11D2-AEC3-00400141862D}
# 	2:5:Class:CErrorSeries
# 	2:10:HeaderFile:errorseries.h
# 	2:8:ImplFile:errorseries.cpp
# End Section
# Section InvertedPendulumFix : {A9752904-3FA0-11D1-9F64-444553540000}
# 	2:5:Class:CExpAvgFunction
# 	2:10:HeaderFile:expavgfunction.h
# 	2:8:ImplFile:expavgfunction.cpp
# End Section
# Section InvertedPendulumFix : {ED84FB81-A700-11D2-80AB-006097385FF5}
# 	2:5:Class:CClockSeries
# 	2:10:HeaderFile:clockseries.h
# 	2:8:ImplFile:clockseries.cpp
# End Section
# Section InvertedPendulumFix : {6F617F1B-CFA9-11D0-BEED-00AA00C9A74F}
# 	2:5:Class:CBrush1
# 	2:10:HeaderFile:brush.h
# 	2:8:ImplFile:brush.cpp
# End Section
# Section InvertedPendulumFix : {6F617F44-CFA9-11D0-BEED-00AA00C9A74F}
# 	2:5:Class:CTeeFunction
# 	2:10:HeaderFile:teefunction.h
# 	2:8:ImplFile:teefunction.cpp
# End Section
# Section InvertedPendulumFix : {D9393E16-AEFA-11D2-80AF-006097385FF5}
# 	2:5:Class:CImageBarSeries
# 	2:10:HeaderFile:imagebarseries.h
# 	2:8:ImplFile:imagebarseries.cpp
# End Section
# Section InvertedPendulumFix : {008BBE7E-C096-11D0-B4E3-00A0C901D681}
# 	2:21:DefaultSinkHeaderFile:tchart.h
# 	2:16:DefaultSinkClass:CTChart
# End Section
# Section InvertedPendulumFix : {D389A20A-C6E4-11D0-84B8-006097386599}
# 	2:5:Class:CPen1
# 	2:10:HeaderFile:pen.h
# 	2:8:ImplFile:pen.cpp
# End Section
# Section InvertedPendulumFix : {F3A0ED84-3C01-11D1-AB52-00400141862D}
# 	2:5:Class:CPrinter
# 	2:10:HeaderFile:printer.h
# 	2:8:ImplFile:printer.cpp
# End Section
# Section InvertedPendulumFix : {00561F61-EFA9-11D0-9F64-DE033FB8E6C0}
# 	2:5:Class:CBubbleSeries
# 	2:10:HeaderFile:bubbleseries.h
# 	2:8:ImplFile:bubbleseries.cpp
# End Section
# Section InvertedPendulumFix : {66833F80-EF3F-11D0-9F64-A6119FA8432F}
# 	2:5:Class:CShapeSeries
# 	2:10:HeaderFile:shapeseries.h
# 	2:8:ImplFile:shapeseries.cpp
# End Section
# Section InvertedPendulumFix : {6F617F0F-CFA9-11D0-BEED-00AA00C9A74F}
# 	2:5:Class:CCustomSeries
# 	2:10:HeaderFile:customseries.h
# 	2:8:ImplFile:customseries.cpp
# End Section
# Section InvertedPendulumFix : {6F617F18-CFA9-11D0-BEED-00AA00C9A74F}
# 	2:5:Class:CMarks
# 	2:10:HeaderFile:marks.h
# 	2:8:ImplFile:marks.cpp
# End Section
# Section InvertedPendulumFix : {DFBF9393-46FD-11D2-AEC3-00400141862D}
# 	2:5:Class:CContourSeries
# 	2:10:HeaderFile:contourseries.h
# 	2:8:ImplFile:contourseries.cpp
# End Section
# Section InvertedPendulumFix : {49006AC1-099B-11D1-9F64-444553540000}
# 	2:5:Class:CErrorBarSeries
# 	2:10:HeaderFile:errorbarseries.h
# 	2:8:ImplFile:errorbarseries.cpp
# End Section
# Section InvertedPendulumFix : {273020D3-95B6-11D2-809C-006097385FF5}
# 	2:5:Class:CTeePoint2D
# 	2:10:HeaderFile:teepoint2d.h
# 	2:8:ImplFile:teepoint2d.cpp
# End Section
# Section InvertedPendulumFix : {FADE0A30-6D8A-11D2-AF1E-00400141862D}
# 	2:5:Class:CEnvironment
# 	2:10:HeaderFile:environment.h
# 	2:8:ImplFile:environment.cpp
# End Section
# Section InvertedPendulumFix : {B6352500-45FD-11D1-AB84-00400141862D}
# 	2:5:Class:CExport
# 	2:10:HeaderFile:export.h
# 	2:8:ImplFile:export.cpp
# End Section
# Section InvertedPendulumFix : {297DACC0-D044-11D0-9F64-C8FD4AEAB040}
# 	2:5:Class:CPanel
# 	2:10:HeaderFile:panel.h
# 	2:8:ImplFile:panel.cpp
# End Section
# Section InvertedPendulumFix : {D151BD23-0900-11D1-ABC8-006097385FF5}
# 	2:5:Class:CCandleSeries
# 	2:10:HeaderFile:candleseries.h
# 	2:8:ImplFile:candleseries.cpp
# End Section
# Section InvertedPendulumFix : {4C33D2E0-D291-11D0-9F64-BCC543D9C168}
# 	2:5:Class:CWall
# 	2:10:HeaderFile:wall.h
# 	2:8:ImplFile:wall.cpp
# End Section
# Section InvertedPendulumFix : {6F617F43-CFA9-11D0-BEED-00AA00C9A74F}
# 	2:5:Class:CValueList
# 	2:10:HeaderFile:valuelist.h
# 	2:8:ImplFile:valuelist.cpp
# End Section
# Section InvertedPendulumFix : {9F932473-4311-11D2-AEBC-00400141862D}
# 	2:5:Class:CPieOtherSlice
# 	2:10:HeaderFile:pieotherslice.h
# 	2:8:ImplFile:pieotherslice.cpp
# End Section
# Section InvertedPendulumFix : {E8B97A90-3E69-11D1-AB59-00400141862D}
# 	2:5:Class:CAspect
# 	2:10:HeaderFile:aspect.h
# 	2:8:ImplFile:aspect.cpp
# End Section
# Section InvertedPendulumFix : {B6352504-45FD-11D1-AB84-00400141862D}
# 	2:5:Class:CAxisLabels
# 	2:10:HeaderFile:axislabels.h
# 	2:8:ImplFile:axislabels.cpp
# End Section
# Section InvertedPendulumFix : {00561F60-EFA9-11D0-9F64-DE033FB8E6C0}
# 	2:5:Class:CGanttSeries
# 	2:10:HeaderFile:ganttseries.h
# 	2:8:ImplFile:ganttseries.cpp
# End Section
# Section InvertedPendulumFix : {DFBF9397-46FD-11D2-AEC3-00400141862D}
# 	2:5:Class:CBezierSeries
# 	2:10:HeaderFile:bezierseries.h
# 	2:8:ImplFile:bezierseries.cpp
# End Section
