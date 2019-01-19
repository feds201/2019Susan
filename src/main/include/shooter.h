/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include"frc/WPILib.h"
#include "ctre/Phoenix.h"

class Shooter {
 public:
  Shooter();
  void shoot();
  void powerWheels(bool on);
  void toggleWheels();

 private:
  frc::DoubleSolenoid* piston;

  bool wheelsOn = false;
  WPI_TalonSRX* motorL;
  WPI_TalonSRX* motorR;
};
