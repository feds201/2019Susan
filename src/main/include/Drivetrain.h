#pragma once
#include "WPILib.h"
#include "ctre/Phoenix.h"

class Drivetrain {
 public:
  Drivetrain();
  void setVelocity(double, double);

 private:
  WPI_TalonSRX* motorFL;
  WPI_TalonSRX* motorFR;
  WPI_TalonSRX* motorBL;
  WPI_TalonSRX* motorBR;
};
