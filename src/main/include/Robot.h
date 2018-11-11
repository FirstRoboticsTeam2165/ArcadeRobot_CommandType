/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <WPILib.h>
#include <Commands/Command.h>
//#include <SmartDashboard/SendableChooser.h>
#include <TimedRobot.h>

#include "RobotMap.h"
#include "OI.h"

// add includes for Subsystems here:
#include "Subsystems/DriveTrain.h"

class Robot : public frc::TimedRobot {
 public:

// declare unique ptrs here:
  static std::unique_ptr<OI> oi;

// declare a Subsystem type shared_ptr for each Subsystem here:
  static std::shared_ptr<DriveTrain> driveTrain;


  void RobotInit() override;
  void RobotPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestPeriodic() override;

 private:
 
};
