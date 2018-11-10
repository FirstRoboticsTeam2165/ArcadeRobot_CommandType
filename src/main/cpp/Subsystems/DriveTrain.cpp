/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <Subsystems/DriveTrain.h>
#include <Commands/DriveWithJoy.h>
#include <Robot.h>


DriveTrain::DriveTrain() : Subsystem("DriveTrain") {


  frontLeftCntrl = RobotMap::driveTrainFrontLeft;
  rearLeftCntrl = RobotMap::driveTrainRearLeft;
  frontRightCntrl = RobotMap::driveTrainFrontRight;
  rearRightCntrl = RobotMap::driveTrainRearRight;

  robotDrive = RobotMap::diffDrive;

  frontLeftCntrl->Set(ControlMode::PercentOutput, 0);
  rearLeftCntrl->Set(ControlMode::PercentOutput, 0);
  frontRightCntrl->Set(ControlMode::PercentOutput, 0);
  rearRightCntrl->Set(ControlMode::PercentOutput, 0);

  frontLeftCntrl->Set(0.0);   // set speed initially to zero
  rearLeftCntrl->Set(0.0); 
  frontRightCntrl->Set(0.0); 
  rearRightCntrl->Set(0.0); 

  frontLeftCntrl->SetInverted(false);
  rearLeftCntrl->SetInverted(false);
  frontRightCntrl->SetInverted(false); 
  rearRightCntrl->SetInverted(false);  

}

void DriveTrain::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
  SetDefaultCommand(new DriveWithJoy());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void DriveTrain::DriveCntrl(double m_speed, double m_rot) {
  robotDrive->ArcadeDrive(m_speed, m_rot, true);
}
