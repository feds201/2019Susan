/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include"frc/WPILib.h"

class Shooter {
 public:
  Shooter(int, int);
  ~Shooter();
  void shoot();
  void powerWheels(bool);
  void toggleWheels();

 private:
  frc::DoubleSolenoid Shooter{0, 1, 2};

  bool wheelsOn = false;
  WPI_TalonSRX* motorL;
  WPI_TalonSRX* motorR;
};
