#pragma config(Hubs,  S1, HTMotor,  HTMotor,  none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     motorFR,       tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C1_2,     motorBR,       tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C2_1,     motorFL,       tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     motorBL,       tmotorTetrix, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"


void moveRobot() {
	motor[motorFR] = joystick.joy1_y1 - joystick.joy1_x1;
	motor[motorBL] = joystick.joy1_y1 - joystick.joy1_x1;
	motor[motorFL] = joystick.joy1_y1 + joystick.joy1_x1;
	motor[motorBR] = joystick.joy1_y1 + joystick.joy1_x1;
}


task main()
{
	while(true) {
		getJoystickSettings(joystick);
		moveRobot();
	}


}
