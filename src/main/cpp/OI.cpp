/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"
#include "SmartDashboard/SmartDashboard.h"

// add #include files for commands created if needed for joysticks or buttons
#include "Commands/DriveWithJoy.h"

//#include <WPILib.h>

OI::OI() {
// assign joystick poiint to an instance of the Joystick() class
  joystick0.reset(new Joystick(USB_0)); // Logitech Extreme 3D PRO 

// SmartDashboard Buttons
  SmartDashboard::PutData("DriveWithJoy", new DriveWithJoy());

}

  std::shared_ptr<Joystick> OI::getJoystick() { return joystick0; }

  