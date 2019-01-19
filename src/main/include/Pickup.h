/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include"frc/WPILib.h"

class Pickup {
 public:
  Pickup();
  void Grab();

  private:

  frc::DoubleSolenoid pickup{2, 1, 2};
  frc::DoubleSolenoid pickup2{2, 4, 4};
  

};
