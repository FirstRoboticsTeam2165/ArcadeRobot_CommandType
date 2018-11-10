/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include "WPILib.h"

class OI {

 private:
// shared ptrs to joysticks
  std::shared_ptr<Joystick> joystick0;

 // joystick USB 
  static constexpr int USB_0 = 0; 
 public:
  OI();

// declare methods to provide public access to joysticks
  std::shared_ptr<Joystick> getJoystick(); 
};
