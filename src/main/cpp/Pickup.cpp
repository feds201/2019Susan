/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Pickup.h"

Pickup::Pickup() {

    pickup = new frc::DoubleSolenoid(10, 4, 5);
    pickup2= new frc::DoubleSolenoid(10, 6, 7);

    pickup->Set(frc::DoubleSolenoid::Value::kReverse);
    pickup2->Set(frc::DoubleSolenoid::Value::kReverse);


}

void Pickup::Grab(){

    if(pickup->Get() == frc::DoubleSolenoid::Value::kForward){
        pickup->Set(frc::DoubleSolenoid::Value::kReverse);
        pickup2->Set(frc::DoubleSolenoid::Value::kReverse);
    }else{
        pickup->Set(frc::DoubleSolenoid::Value::kForward);
        pickup2->Set(frc::DoubleSolenoid::Value::kForward);
    }

}