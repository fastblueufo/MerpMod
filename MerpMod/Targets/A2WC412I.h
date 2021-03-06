#define MOD_ECUID 1191DE7CA9
#define MOD_DATE 14.10.17.17.17
#include "Flash.h"
#define MOD_CONFIG Flash
#define MOD_BUILD Debug
#define MOD_RELEASE 0
#define ECU_CALIBRATION_ID A2WC412I
#define ECU_IDENTIFIER 3B12584306
/////////////////////
// NonSpecific Rom Info and Routines
/////////////////////

#define dCalId (0x00002000)
#define dEcuId (0x000CC6F0)
#define dRomHoleStart (0x000E1400)
#define pRamHoleStart (0xFFFF72A0)
#define sPull2DFloat (0x0000209C)
#define sPull3DFloat (0x00002150)

/////////////////////
// Switch Hacks
/////////////////////

#define tTipInEnrich (0x00082E10)
#define tCrankingFuelA (0x00082AC0)
#define tCrankingFuelB (0x00082AD4)
#define tCrankingFuelC (0x00082AE8)
#define tCrankingFuelD (0x00082AFC)
#define tStartupEnrich2_1A (0x00082B60)
#define tStartupEnrich2_1B (0x00082B88)
#define tStartupEnrich2_2A (0x00082B74)
#define tStartupEnrich2_2B (0x00082B9C)
#define tStartupEnrich3_1A (0x00082B10)
#define tStartupEnrich3_1B (0x00082B24)
#define tStartupEnrich3_2A (0x00082B38)
#define tStartupEnrich3_2B (0x00082B4C)

/////////////////////
// Rev Limit Hack
/////////////////////

#define hRevLimDelete (0x00012710)
#define sRevLimStart (0x0002F714)
#define sRevLimEnd (0x0002F74A)
#define pFlagsRevLim ((unsigned char*)0xFFFF592C)
#define RevLimBitMask (0x80)

/////////////////////
// Speed Density Hack
/////////////////////

#define hMafCalc (0x00007A04)
#define sMafCalc (0x000079A8)

/////////////////////
// Injector Hack
/////////////////////

#define dInjectorScaling ((float*)0x000C6124)
#define hInjectorScaling (0x00028818)

/////////////////////
// Cel Hacks
/////////////////////

#define sCelTrigger (0x00079D5C)
#define hCelSignal (0x00079E74)
#define pCelSignalOem ((unsigned char*)0xFFFF6F06)

/////////////////////
// Boost Hacks
/////////////////////

#define tTargetBoost (0x00081B30)

/////////////////////
// WGDC Hacks
/////////////////////

#define hPullWgdc (0x0001500C)
#define hWgdc (0x000121E8)
#define sWgdc (0x000147C8)
#define tWgdcInitial (0x00081A88)
#define tWgdcMax (0x00081AC0)

/////////////////////
// Primary Open Loop Fueling Hacks
/////////////////////

#define tPolf (0x00082FB0)

/////////////////////
// Timing Hacks
/////////////////////

#define tBaseTiming (0x00083610)

/////////////////////
// Spark Cut
/////////////////////


/////////////////////
// Flags-Signals
/////////////////////

#define pResumeFlags ((unsigned char*)0xFFFF4CD8)
#define ResumeBitMask ((unsigned char)0x04)
#define pCoastFlags ((unsigned char*)0xFFFF4CD8)
#define CoastBitMask ((unsigned char)0x02)
#define pBrakeFlags ((unsigned char*)0xFFFF4CD8)
#define BrakeBitMask ((unsigned char)0x08)
#define pClutchFlags ((unsigned char*)0xFFFF5139)
#define ClutchBitMask ((unsigned char)0x80)

/////////////////////
// NonSpecific Engine params
/////////////////////

#define pFbkc1 ((unsigned char*)0xFFFF52B4)
#define pFbkc4 ((float*)0xFFFF5C18)
#define pIam1 ((unsigned char*)0xFFFF52B9)
#define pIam4 ((float*)0xFFFF267C)
#define pEngineSpeed ((float*)0xFFFF5168)
#define pVehicleSpeed ((float*)0xFFFF5158)
#define pCoolantTemp ((float*)0xFFFF4FB0)
#define pAtmoPress ((float*)0xFFFF2E34)
#define pManifoldAbsolutePressure ((float*)0xFFFF4EB0)
#define pIntakeAirTemp ((float*)0xFFFF2DB8)
#define pMassAirFlow ((float*)0xFFFF2DF4)
#define pMafSensorVoltage ((short*)0xFFFF2D22)
#define pEngineLoad ((float*)0xFFFF5030)
#define pReqTorque ((float*)0xFFFF5E08)
#define pThrottlePlate ((float*)0xFFFF4F40)
#define pWgdc4 ((float*)0xFFFF4BD8)
#define pCurrentGear ((unsigned char*)0xFFFF5269)
#define pAf1Res ((float*)0xFFFF4A54)

/////////////////////
// OBD Experimental stuff
/////////////////////

#define pObdVinDirect ((unsigned char*)0xFFFF203C)

/////////////////////
// New Definitions
/////////////////////

#define dLoadSmoothingA (0x000C1FB0)
#define dLoadSmoothingB (0x000C1FB4)
#define dLoadSmoothingAlt (0x000C1F98)
#define dLoadSmoothingFinal (0x000C1FB8)

/////////////////////
// Memory Reset
/////////////////////

#define sMemoryReset (0x0000F928)
#define hMemoryReset (0x0000D324)
#define pMemoryResetLimit (0xFFFFBFFB)
#define hMemoryResetLimit (0x0000FFF8)

