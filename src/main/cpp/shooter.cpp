#include "Shooter.h"

Shooter::Shooter(int portL, int portR, int pistonPCM, int portForward, int portReverse) {
    piston = new DoubleSolenoid(pistonPCM, portForward, portReverse);
    motorL = new WPI_TalonSRX(portL);
    motorR = new WPI_TalonSRX(portR);
}

Shooter::~Shooter() {
    delete motorL;
    delete motorR;
}

void Shooter::shoot() {
    if(piston.Get() == frc::DoubleSolenoid::Value::kForward){
        piston.Set(frc::DoubleSolenoid::Value::kReverse);
    }else{
        piston.Set(frc::DoubleSolenoid::Value::kForward);
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