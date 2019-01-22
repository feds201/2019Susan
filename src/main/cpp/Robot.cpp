#include "Robot.h"

#include <iostream>

#include <frc/smartdashboard/SmartDashboard.h>

#include"cameraserver/CameraServer.h"

Robot::Robot() {
    
}

void Robot::RobotInit() {
  
cam = frc::CameraServer::GetInstance()->StartAutomaticCapture("Camera", 0);
cam.SetResolution(1000, 800);
cam.SetFPS(15);


}

void Robot::RobotPeriodic() {}

void Robot::AutonomousInit() {
  
}

void Robot::AutonomousPeriodic() {
   
}

void Robot::TeleopInit() {

    joy.SetThrottleChannel(1);
    joy.SetTwistChannel(4);

}

void Robot::TeleopPeriodic() {

Drive.setVelocity(joy.GetThrottle(), joy.GetTwist());

Shoot.shoot(joy.GetRawButton(1));

if (joy.GetRawButtonPressed(2)){
Pick.Grab();
}

if(joy.GetRawButtonPressed(3))
{    

Shoot.toggleWheels();

}

}

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Robot>(); }
#endif
