/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include"frc/WPILib.h"

class shooter {
 public:
  shooter();
  void shoot();

  private:

  frc::DoubleSolenoid Shooter{0, 1, 2};


};
