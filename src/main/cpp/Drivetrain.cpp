#include "Drivetrain.h"

Drivetrain::Drivetrain(int portFL, int portFR, int portBL, int portBR) {
    motorFL = new WPI_TalonSRX(portFL);
    motorFR = new WPI_TalonSRX(portFR);
    motorBL = new WPI_TalonSRX(portBL);
    motorBR = new WPI_TalonSRX(portBR);
}

Drivetrain::~Drivetrain() {
    delete motorFL;
    delete motorFR;
    delete motorBL;
    delete motorBR;
}

void Drivetrain::setVelocity(double forwardLinearSpeed, double angularVelocity = 0) {
    motorFL->Set(forwardLinearSpeed - (angularVelocity / 2));
    motorBL->Set(forwardLinearSpeed - (angularVelocity / 2));
    motorFR->Set(-forwardLinearSpeed - (angularVelocity / 2));
    motorBR->Set(-forwardLinearSpeed - (angularVelocity / 2));
}
