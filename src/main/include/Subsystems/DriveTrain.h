/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/Subsystem.h>
#include <WPILib.h>
#include <RobotMap.h>
#include <ctre/Phoenix.h>

class DriveTrain : public frc::Subsystem {
 private:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities
  
  
  std::shared_ptr<WPI_TalonSRX> frontLeftCntrl;
  std::shared_ptr<WPI_TalonSRX> rearLeftCntrl;
  std::shared_ptr<WPI_TalonSRX> frontRightCntrl;
  std::shared_ptr<WPI_TalonSRX> rearRightCntrl;
  std::shared_ptr<DifferentialDrive> robotDrive;

 public:
  DriveTrain();
  void InitDefaultCommand() override;

  void DriveCntrl(double, double);
};
