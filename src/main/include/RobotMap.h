/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
// constexpr int kLeftMotor = 1;
// constexpr int kRightMotor = 2;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
// constexpr int kRangeFinderPort = 1;
// constexpr int kRangeFinderModule = 1;
 
#include <ctre/Phoenix.h>
 #include "WPILib.h"
class RobotMap {

public:
// Declare smart ptrs to create address to objects of the subsystem library classes 

static std::shared_ptr<WPI_TalonSRX> driveTrainFrontLeft;
static std::shared_ptr<WPI_TalonSRX> driveTrainRearLeft;

static std::shared_ptr<SpeedControllerGroup> m_left;

static std::shared_ptr<WPI_TalonSRX> driveTrainFrontRight;
static std::shared_ptr<WPI_TalonSRX> driveTrainRearRight;

static std::shared_ptr<SpeedControllerGroup> m_right;

static std::shared_ptr<DifferentialDrive> diffDrive;

static void init();

private:

// Mapping of IO channels relatiing the channal numbers to constructor arguments of 
// motor controllers actuators and sensors

static constexpr int FRONTLEFT = 3;
static constexpr int REARLEFT =  1; 
static constexpr int FRONTRIGHT = 4;
static constexpr int REARRIGHT = 2;


};
