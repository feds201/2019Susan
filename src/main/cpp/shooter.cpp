/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "shooter.h"

shooter::shooter() {}

void shooter::shoot(){

    if(Shooter.Get() == frc::DoubleSolenoid::Value::kForward){
        Shooter.Set(frc::DoubleSolenoid::Value::kReverse);
    }else{
        Shooter.Set(frc::DoubleSolenoid::Value::kForward);
    }


}