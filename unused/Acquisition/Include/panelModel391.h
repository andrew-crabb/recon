//==========================================================================
// File			:	panelModel391.h
//					Copyright 2002 by CTI
// Description	:	Contains the function prototypes for the derived class
//	
// Author		:	Selene F. Tolbert
//
// Date			:	01 July 2002
//
// Author		Date			Update
// S Tolbert	01 July 02		Created
// S Tolbert	19 July 02		Changed return value for function headRotation
//								from long to bool
// S Tolbert	19 July 02		Changed long to long (32 bit signed longeger)
// S Tolbert	08 August 02	Added INI file access
// S Tolbert	15 August 02	Updated APIs.
// S Tolbert	22 Oct 02		Added units of measure APIs
// S Tolbert	25 Nov 02		Added virtual to the destructor
// S Tolbert	19 Feb 03		Added new panel apis
//==========================================================================

// Set guards to prevent multiple header file inclusion
//
#ifndef MODEL391_CLASS_H
#define MODEL391_CLASS_H

#ifdef WIN32
#ifdef GM_EXPORTS
#define MODEL391_API __declspec(dllexport)
#else
#define MODEL391_API __declspec(dllimport)
#endif
#endif


#include "baseModelClass.h"	// base class and interface class

//
// CPanelModel391 derived class
//

class CPanelModel391 : public CModel {
public:
	CPanelModel391();
	virtual ~CPanelModel391();

	// access functions
	virtual long model() const { return 391; }
	virtual char* mName();
	
	// ini information
	void getINIVals();
	void initVals();

	// Miscellaneous 
	virtual char* logdir();
	virtual char* setupdir();

	virtual bool isHeadScanner() const { return 1; }

	virtual long nBlocks() const { return (_nblocks != BADINIKEY) ? _nblocks : 84; }
	virtual long defLLD() const { return (_LLD != BADINIKEY) ? _LLD : 400; }
	virtual long defULD() const { return (_ULD != BADINIKEY) ? _ULD : 650; }
	virtual long defAngles() const { return (_angles != BADINIKEY) ? _angles : 256; }
	virtual long defElements() const { return (_elements != BADINIKEY) ? _elements : 320; }
	virtual long totSinograms() const { return (_totSino != BADINIKEY) ? _totSino : 3935; }
	virtual long transBlks() const { return (_tranBlk != BADINIKEY) ? _tranBlk : 10; }
	virtual long axialBlks() const { return (_axialBlk != BADINIKEY) ? _axialBlk : 7; } 
	virtual long angCrystals() const { return (_angCry != BADINIKEY) ? _angCry : 12; }
	virtual long axialCryst() const { return (_axialCry != BADINIKEY) ? _axialCry : 12; }
	virtual long nTubes() const { return (_ntbs != BADINIKEY) ? _ntbs : 4; }
	virtual long isprt() const { return (_isPRT != BADINIKEY) ? _isPRT : 1; }
	virtual long axTubes() const { return (_axTubes != BADINIKEY) ? _axTubes : 2; }
	virtual long transTubes() const { return (_transTubes != BADINIKEY) ? _transTubes : 2; }
	virtual long bktOutputChannels() const { return (_outchnl != BADINIKEY) ? _outchnl : 1; } // single channel=1, dual channel=2
	virtual long timeCorrectionBits() const { return (_timecorbit != BADINIKEY) ? _timecorbit : 5; }
	virtual double interacDepth() const { return (_intDepth != BADINIKEY) ? _intDepth : 0; }
	virtual double planeSeparation() const { return (_plnSep != BADINIKEY) ? _plnSep : -1; }
	virtual long dPlanes() const { return (_dPlane != BADINIKEY) ? _dPlane : -1; }
	virtual double binSz() const { return (_binSize != BADINIKEY) ? _binSize : -1; }
	virtual long numberPolySides() const { return (_polySides != BADINIKEY) ? _polySides : 6; }
	virtual long coincWindow() const { return (_coinWnd != BADINIKEY) ? _coinWnd : 6; }
	virtual char* coincProcName();
	virtual long numberPanels() const { return (_nheads != BADINIKEY) ? _nheads : 1; }
	virtual long cpCommunications() const { return (_cpComm != BADINIKEY) ? _cpComm : 1; }
	virtual char* cpCommTypeDesc();	
	virtual long headRotation() const { return (_headRot != BADINIKEY) ? _headRot:1; }
	virtual pPanel panels();
	virtual long numberConfigs() const { return (_config != BADINIKEY) ? _config : 1; }
	virtual pConf configurations();
	virtual long numberAnalogSet() const { return (_analogSet != BADINIKEY) ? _analogSet : 14; }
	virtual long LLDprof() const { return (_LLDprofile != BADINIKEY) ? _LLDprofile : 80; }
	virtual long ULDprof() const { return (_ULDprofile != BADINIKEY) ? _ULDprofile : 255; }
	virtual long LLDshp() const { return (_LLDshape != BADINIKEY) ? _LLDshape : 80; }
	virtual long ULDshp() const { return (_ULDshape != BADINIKEY) ? _ULDshape : 255; }
	virtual long LLDtubeEner() const { return (_LLDtubeEnergy != BADINIKEY) ? _LLDtubeEnergy : 80; }
	virtual long ULDtubeEner() const { return (_ULDtubeEnergy != BADINIKEY) ? _ULDtubeEnergy : 255; }
	virtual long LLDcrystalEner() const { return (_LLDcryEnergy != BADINIKEY) ? _LLDcryEnergy : 70; }
	virtual long ULDcrystalEner() const { return (_ULDcryEnergy != BADINIKEY) ? _ULDcryEnergy : 255; }
	virtual long pmtaSet() const { return (_pmta != BADINIKEY) ? _pmta : 0; }
	virtual long pmtbSet() const { return (_pmtb != BADINIKEY) ? _pmtb : 1; }
	virtual long pmtcSet() const { return (_pmtc != BADINIKEY) ? _pmtc : 2; }
	virtual long pmtdSet() const { return (_pmtd != BADINIKEY) ? _pmtd : 3; }
	virtual long cfdSet() const { return (_cfdsetting != BADINIKEY) ? _cfdsetting : 4; }
	virtual long cfdDelaySet() const { return (_cfdsetdelay != BADINIKEY) ? _cfdsetdelay : -1; }
	virtual long xOffsetSet() const { return (_xOffset != BADINIKEY) ? _xOffset : 5; }
	virtual long yOffsetSet() const { return (_yOffset != BADINIKEY) ? _yOffset : 6; }
	virtual long eOffsetSet() const { return (_eOffset != BADINIKEY) ? _eOffset : 7; }
	virtual long dhiModeSet() const { return (_dhisetting != BADINIKEY) ? _dhisetting : -1; }
	virtual long engSetupSet() const { return (_engsetup != BADINIKEY) ? _engsetup : 8; }
	virtual long thresholdShapeSet() const { return (_thresholdshp != BADINIKEY) ? _thresholdshp : 9; }
	virtual long slowLowSet() const { return (_slowlow != BADINIKEY) ? _slowlow : 10; }
	virtual long slowHighSet() const { return (_slowhigh != BADINIKEY) ? _slowhigh : 11; }
	virtual long fastLowSet() const { return (_fastlow != BADINIKEY) ? _fastlow : 12; }
	virtual long fastHighSet() const { return (_fasthigh != BADINIKEY) ? _fasthigh : 13; }
	virtual long fineGainIter() const { return (_fgainiter != BADINIKEY) ? _fgainiter : 15; }
	virtual long tubeGainIter() const { return (_tgainiter != BADINIKEY) ? _tgainiter : 15; }
	virtual long cfdIter() const { return (_cfditer != BADINIKEY) ? _cfditer : 4; }
	virtual long offsetmin() const { return (_offsetmin != BADINIKEY) ? _offsetmin : 3; }
	virtual long offsetmax() const { return (_offsetmax != BADINIKEY) ? _offsetmax : 253; }
	virtual long mincfddelay() const { return (_minCFDDelay != BADINIKEY) ? _minCFDDelay : 3; }
	virtual long maxcfddelay() const { return (_maxCFDDelay != BADINIKEY) ? _maxCFDDelay : 123; }
	virtual long enerOffset() const { return (_eneroffset != BADINIKEY) ? _eneroffset : 0; }
	virtual double crystRad() const { return (_crystalRad != BADINIKEY) ? _crystalRad : -1; }
	virtual char* layerMat(long);
	virtual long numberCrystaLayers() const { return (_crystalLayer != BADINIKEY) ? _crystalLayer : 1; }
	virtual long LayerBackErg(long);
	virtual double LayerfwhmErgRes(long);
	virtual double LayerCrystalDepth(long);	
	virtual long numberPointSources(long);
	virtual long ptSrcStart(long);

	virtual long timBins() const { return (_timingBins != BADINIKEY) ? _timingBins : 32; }
	virtual long minGain() const { return (_minCoarseGain != BADINIKEY) ? _minCoarseGain : 40; }
	virtual long maxGain() const { return (_maxCoarseGain != BADINIKEY) ? _maxCoarseGain : 230; }
	virtual long stepGain() const { return (_stepCoarseGain != BADINIKEY) ? _stepCoarseGain : 5; }
	virtual long maxExp() const { return (_maxExpandCRM != BADINIKEY) ? _maxExpandCRM : 15; }
	virtual double emissionCFDRatio() const { return (_emCFDRatio != BADINIKEY) ? _emCFDRatio : 0.0025; }
	virtual double transCFDRatio() const { return (_txCFDRatio != BADINIKEY) ? _txCFDRatio : 0.01; }
	virtual long emissionTimeAlignDur() const { return (_emTimeAlignDuration != BADINIKEY) ? _emTimeAlignDuration : 600; }
	virtual long transTimeAlignDur() const { return (_txTimeAlignDuration != BADINIKEY) ? _txTimeAlignDuration : 30; }
	virtual long timeAlignIter() const { return (_timeAlignIter != BADINIKEY) ? _timeAlignIter : 4; }


private:
	bool	bFoundPointSourceInfo;
	bool	bFoundPanelInfo;
	bool	bFoundConfigInfo;
	bool	bFoundPointSourceStartInfo;
	long	numberOfPanels;
	long	numberOfConfigs;
	char*	pKey;
	char	cKey[BSIZE];
	char	Buffer[BUFSIZE];
	long	pointSourceStart;
	double	crystalDepth;
	long	layerBackErg;
	double	layerfwhmErgRes;
	char*	layerMaterial;

	long	_timingBins;
	long	_minCoarseGain;
	long	_maxCoarseGain;
	long	_stepCoarseGain;
	long	_maxExpandCRM;
	double	_emCFDRatio;
	double	_txCFDRatio;
	long	_emTimeAlignDuration;
	long	_txTimeAlignDuration;
	long	_timeAlignIter;
	long	_coinWnd;
	long	_polySides;
	double	_binSize;
	long	_dPlane;
	double	_plnSep;
	long	_ptSrcStart;
	long	_nPointSources;
	double	_layOneCrysDepth;
	double	_layTwoCrysDepth;
	double	_layOnefwhm;
	double	_layTwofwhm;
	long	_layTwoBackErg;
	long	_layOneBackErg;
	long	_crystalLayer;
	char	_layOneMat[BSIZE];
	char	_layTwoMat[BSIZE];
	double	_crystalRad;
	double	_intDepth;
	char	_logDir[BSIZE];
	char	_setupDir[BSIZE];
	char	_cpname[BSIZE];
	char	_cpcommdesc[BSIZE];
	long	_eneroffset;
	long	_outchnl;
	long	_timecorbit;
	long	_minCFDDelay;
	long	_maxCFDDelay;
	long	_fgainiter;
	long	_tgainiter;
	long	_cfditer;
	long	_offsetmin;
	long	_offsetmax;
	long	_axTubes;
	long	_transTubes;
	long	_ntbs;
	long	_isPRT;
	long	_nblocks;
	long	_nheads;
	long	_config;
	long	_cpComm;
	long	_headRot;
	long	_LLD;
	long	_ULD;
	long	_angles;
	long	_elements;
	long	_totSino;
	long	_analogSet;
	long	_tranBlk;
	long	_axialBlk;
	long	_angCry;
	long	_axialCry;
	long	_LLDprofile;
	long	_ULDprofile;
	long	_LLDshape;
	long	_ULDshape;
	long	_LLDtubeEnergy;
	long	_ULDtubeEnergy;
	long	_LLDcryEnergy;
	long	_ULDcryEnergy;
	long	_pmta;
	long	_pmtb;
	long	_pmtc;
	long	_pmtd;
	long	_cfdsetting;
	long	_cfdsetdelay;
	long	_xOffset;
	long	_yOffset;
	long	_eOffset;
	long	_dhisetting;
	long	_engsetup;
	long	_thresholdshp;
	long	_slowlow;
	long	_slowhigh;
	long	_fastlow;
	long	_fasthigh;
	pPanel	installedPanel;
	pConf	installedConfig;
};


#endif
