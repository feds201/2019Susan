#include "Robot.h"

#include <iostream>

#include <frc/smartdashboard/SmartDashboard.h>

Robot::Robot() {
    train = new Drivetrain(0, 1, 2, 3);
    shooter = new Shooter(4, 5, 6, 7, 8);
    joy = new frc::Joystick(0);

    joy->SetThrottleChannel(1);
    joy->SetTwistChannel(4);
}

Robot::~Robot() {
    delete train;
    delete shooter;
    delete joy;
}

void Robot::RobotInit() {
  
}

void Robot::RobotPeriodic() {}

void Robot::AutonomousInit() {
  
}

void Robot::AutonomousPeriodic() {
    train->setVelocity(joy->GetThrottle(), joy->GetTwist());
    shooter->powerWheels(joy->GetRawButton(5));
    bool shoot = joy->GetRawButton(6);
    if (disable && !shoot)
        disable = false;
    if (!disable && shoot) {
        shooter->shoot();
        disable = true;
    }
}

void Robot::TeleopInit() {}

void Robot::TeleopPeriodic() {

}

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Robot>(); }
#endif
