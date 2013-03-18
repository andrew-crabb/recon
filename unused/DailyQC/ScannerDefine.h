#pragma once

// define the scanner

#define DETECTOR_HEAD_NUMBER		8
#define BLOCK_AXIAL_NUMBER			13
#define BLOCK_TRANSAXIAL_NUMBER		9
#define BLOCK_NUMBER BLOCK_AXIAL_NUMBER*BLOCK_TRANSAXIAL_NUMBER
#define DOI_NUMBER					2
#define CRYSTAL_AXIAL_NUMBER		8
#define CRYSTAL_TRANSAXIAL_NUMBER	8
#define BLOCK_AXIAL_SIZE		PIXEL_SIZE*CRYSTAL_AXIAL_NUMBER
#define BLOCK_TRANSAXIAL_SIZE	PIXEL_SIZE*CRYSTAL_TRANSAXIAL_NUMBER

// Module pair define for HRRT
// module pair for head A
// set invalid module pair to DETECTOR_HEAD_NUMBER+2
const int MP_A[] =
{
	// XE = 0
    DETECTOR_HEAD_NUMBER+2,					
    0,0,0,0,0,			// XE = 1-5
	1,1,1,1,1,			// XE = 6-10
	2,2,2,2,			// XE = 11-14
	3,3,3,				// XE = 15-17
	4,4,				// XE = 18-19
	5,					// XE = 20
	// XE = 21-31
	DETECTOR_HEAD_NUMBER+2,
	DETECTOR_HEAD_NUMBER+2,
	DETECTOR_HEAD_NUMBER+2,
	DETECTOR_HEAD_NUMBER+2,
	DETECTOR_HEAD_NUMBER+2,		
	DETECTOR_HEAD_NUMBER+2,
	DETECTOR_HEAD_NUMBER+2,
	DETECTOR_HEAD_NUMBER+2,
	DETECTOR_HEAD_NUMBER+2,
	DETECTOR_HEAD_NUMBER+2,
	DETECTOR_HEAD_NUMBER+2	
};

// module pair for head A
const int MP_B[] =
{
	// XE = 0
	DETECTOR_HEAD_NUMBER+2,					
	2,3,4,5,6,			// XE = 1-5
	3,4,5,6,7,			// XE = 6-10
	4,5,6,7,			// XE = 11-14
	5,6,7,				// XE = 15-17
	6,7,				// XE = 18-19
	7,					// XE = 20
	// XE = 21-31
	DETECTOR_HEAD_NUMBER+2,
	DETECTOR_HEAD_NUMBER+2,
	DETECTOR_HEAD_NUMBER+2,
	DETECTOR_HEAD_NUMBER+2,
	DETECTOR_HEAD_NUMBER+2,		
	DETECTOR_HEAD_NUMBER+2,
	DETECTOR_HEAD_NUMBER+2,
	DETECTOR_HEAD_NUMBER+2,
	DETECTOR_HEAD_NUMBER+2,
	DETECTOR_HEAD_NUMBER+2,
	DETECTOR_HEAD_NUMBER+2	
};