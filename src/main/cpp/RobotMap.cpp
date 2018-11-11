/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <RobotMap.h>
#include <WPILib.h>

std::shared_ptr<WPI_TalonSRX> RobotMap::driveTrainFrontLeft;
std::shared_ptr<WPI_TalonSRX> RobotMap::driveTrainRearLeft;
std::shared_ptr<SpeedControllerGroup> RobotMap::m_left;
std::shared_ptr<WPI_TalonSRX> RobotMap::driveTrainFrontRight;
std::shared_ptr<WPI_TalonSRX> RobotMap::driveTrainRearRight;
std::shared_ptr<SpeedControllerGroup> RobotMap::m_right;

std::shared_ptr<DifferentialDrive> RobotMap::diffDrive;

void RobotMap::init() {
// create ptrs to subsystem objects

    driveTrainFrontLeft.reset(new WPI_TalonSRX(FRONTLEFT));
    driveTrainRearLeft.reset(new WPI_TalonSRX(REARLEFT));

    m_left.reset(new SpeedControllerGroup(*driveTrainFrontLeft, *driveTrainRearLeft));

    driveTrainFrontRight.reset(new WPI_TalonSRX(FRONTRIGHT));
    driveTrainRearRight.reset(new WPI_TalonSRX(REARRIGHT));    

    m_right.reset(new SpeedControllerGroup(*driveTrainFrontRight, *driveTrainRearRight));

    diffDrive.reset(new DifferentialDrive(*m_left,*m_right));
}