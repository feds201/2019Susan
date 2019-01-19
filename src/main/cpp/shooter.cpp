#include "Shooter.h"

Shooter::Shooter() {
    piston = new frc::DoubleSolenoid(10, 2, 3);
    motorL = new WPI_TalonSRX(5);
    motorR = new WPI_TalonSRX(6);
}

void Shooter::shoot() {
    if(piston->Get() == frc::DoubleSolenoid::Value::kForward){
        piston->Set(frc::DoubleSolenoid::Value::kReverse);
    }else{
        piston->Set(frc::DoubleSolenoid::Value::kForward);
    }
}

void Shooter::powerWheels(bool enable) {
    wheelsOn = enable;
    if (wheelsOn) {
        motorL->Set(1);
        motorR->Set(-1);
    } else {
        motorL->Set(0);
        motorR->Set(0);
    }
}

void Shooter::toggleWheels() {
    powerWheels(!wheelsOn);
}