/* +---------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)               |
   |                          http://www.mrpt.org/                             |
   |                                                                           |
   | Copyright (c) 2005-2016, Individual contributors, see AUTHORS file        |
   | See: http://www.mrpt.org/Authors - All rights reserved.                   |
   | Released under BSD License. See details in http://www.mrpt.org/License    |
   +---------------------------------------------------------------------------+ */

#include "hwdrivers-precomp.h"   // Precompiled headers

#define MRPT_NO_WARN_BIG_HDR
#include <mrpt/hwdrivers.h>

#include <mrpt/utils/CStartUpClassesRegister.h>

using namespace mrpt::utils;
using namespace mrpt::hwdrivers;


void registerAllClasses_mrpt_hwdrivers();

CStartUpClassesRegister  mrpt_hwdrivers_class_reg(&registerAllClasses_mrpt_hwdrivers);


/** Register existing sensors.
  * \sa mrpt::hwdrivers::CGenericSensor::createSensor
  */
void registerAllClasses_mrpt_hwdrivers()
{
	CSickLaserUSB::doRegister();
	CIbeoLuxETH::doRegister();
	CHokuyoURG::doRegister();
	CRoboPeakLidar::doRegister();
	CGPSInterface::doRegister();
	CBoardSonars::doRegister();
	CBoardIR::doRegister();
	CBoardDLMS::doRegister();
	CIMUXSens::doRegister();
	CIMUXSens_MT4::doRegister();
	CCameraSensor::doRegister();
	CActivMediaRobotBase::doRegister();
	CPtuHokuyo::doRegister();
	CWirelessPower::doRegister();
	CRaePID::doRegister();
	CImpinjRFID::doRegister();
	CSickLaserSerial::doRegister();
	CBoardENoses::doRegister();
	CEnoseModular::doRegister();
	CGillAnemometer::doRegister();
	CNTRIPEmitter::doRegister();
	CSwissRanger3DCamera::doRegister();
	CLMS100Eth::doRegister();
	CPhidgetInterfaceKitProximitySensors::doRegister();
	CGyroKVHDSP3000::doRegister();
	CKinect::doRegister();
	COpenNI2Sensor::doRegister();
	COpenNI2_RGBD360::doRegister();
	CCANBusReader::doRegister();
	CNationalInstrumentsDAQ::doRegister();
	CGPS_NTRIP::doRegister();
	CIMUIntersense::doRegister();
	CSkeletonTracker::doRegister();
    CVelodyneScanner::doRegister();
}

