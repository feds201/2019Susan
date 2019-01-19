#include "Drivetrain.h"

Drivetrain::Drivetrain() {
    motorFL = new WPI_TalonSRX(1);
    motorFR = new WPI_TalonSRX(3);
    motorBL = new WPI_TalonSRX(2);
    motorBR = new WPI_TalonSRX(4);
}

void Drivetrain::setVelocity(double forwardLinearSpeed, double angularVelocity) {
    motorFL->Set(forwardLinearSpeed - angularVelocity);
    motorBL->Set(forwardLinearSpeed - angularVelocity);
    motorFR->Set(-forwardLinearSpeed - angularVelocity);
    motorBR->Set(-forwardLinearSpeed - angularVelocity);
}
