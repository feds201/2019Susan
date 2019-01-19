#include "Shooter.h"

Shooter::Shooter(int portL, int portR) {
    motorL = new WPI_TalonSRX(portL);
    motorR = new WPI_TalonSRX(portR);
}

Shooter::~Shooter() {
    delete motorL;
    delete motorR;
}

void Shooter::shoot() {
    if(Shooter.Get() == frc::DoubleSolenoid::Value::kForward){
        Shooter.Set(frc::DoubleSolenoid::Value::kReverse);
    }else{
        Shooter.Set(frc::DoubleSolenoid::Value::kForward);
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