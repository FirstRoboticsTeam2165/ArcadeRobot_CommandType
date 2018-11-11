/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

/******************************************************************************* 
/* Project Title: ArcadeDr_4Motor_CommandFrame
/* Path: C:/Users/Don Lauffer/VSCode_Arcade_4_wheel_drive
/* 
/* This project is a TimedRobot, CommandBased Project similar to the type used 2018.
/* Code for the project is to serve as example for building more complicated projects
/*
/* Additional Command & Subsystem files may be created by right clicking on Commands or
/* Subsystems folders and selecting Create a new class/Command.  Type the name of the 
/* file in box without the .cpp or .h extent. If using git look for the file after
/* clicking the git fork on the right. Open the file using the icon to the right of the 
/* project and drag & drop the file into the appropiate Command/Subsystem folder. 
/* If adding the RobotMap.cpp without adding a header file, right click cpp, select
/* New File, and drag & drop to position under Robot.cpp. Configure the RobotMap.cpp file
/* to create pointers to the subsystem objects.
/*  
/*
/* Robot configuration:
/* -  Arcade Drive
/* -  4 TalonXRS motor controllers
/* -  1 Logitech Extreme 3D Pro joystick 
/* 
/********************************************************************************/

#include <Robot.h>
#include <Commands/Scheduler.h>
#include <SmartDashboard/SmartDashboard.h>

std::unique_ptr<OI> Robot::oi;
std::shared_ptr<DriveTrain> Robot::driveTrain;


void Robot::RobotInit() {


  RobotMap::init();

// static ptrs to objects of classes defined here:
  driveTrain.reset(new DriveTrain());
  oi.reset(new OI());
}

/**
 * This function is called every robot packet, no matter the mode. Use
 * this for items like diagnostics that you want ran during disabled,
 * autonomous, teleoperated and test.
 *
 * <p> This runs after the mode specific periodic functions, but before
 * LiveWindow and SmartDashboard integrated updating.
 */
void Robot::RobotPeriodic() {}

/**
 * This function is called once each time the robot enters Disabled mode. You
 * can use it to reset any subsystem information you want to clear when the
 * robot is disabled.
 */
void Robot::DisabledInit() {}

void Robot::DisabledPeriodic() { frc::Scheduler::GetInstance()->Run(); }


void Robot::AutonomousInit() {
 
}

void Robot::AutonomousPeriodic() { frc::Scheduler::GetInstance()->Run(); }

void Robot::TeleopInit() {

  }


void Robot::TeleopPeriodic() { frc::Scheduler::GetInstance()->Run(); }

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
START_ROBOT_CLASS(Robot)
#endif
