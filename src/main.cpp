// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// Motor2               motor         2               
// Controller1          controller                    
// Motor3               motor         3               
// Motor5               motor         5               
// Motor20              motor         20              
// Motor11              motor         11              
// Motor7               motor         7               
// Motor4               motor         4               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// Motor2               motor         2               
// Controller1          controller                    
// Motor3               motor         3               
// Motor5               motor         5               
// Motor20              motor         20              
// Motor11              motor         11              
// Motor7               motor         7               
// Motor4               motor         4               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// Motor2               motor         2               
// Controller1          controller                    
// Motor3               motor         3               
// Motor5               motor         5               
// Motor20              motor         20              
// Motor11              motor         11              
// Motor7               motor         7               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// Motor2               motor         2               
// Controller1          controller                    
// Motor3               motor         3               
// Motor4               motor         4               
// Motor20              motor         20              
// Motor11              motor         11              
// Motor7               motor         7               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// Motor2               motor         2               
// Controller1          controller                    
// Motor3               motor         3               
// Motor4               motor         4               
// Motor20              motor         20              
// Motor11              motor         11              
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// Motor2               motor         2               
// Controller1          controller                    
// Motor3               motor         3               
// Motor4               motor         4               
// Motor20              motor         20              
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// Motor2               motor         2               
// Controller1          controller                    
// Motor3               motor         3               
// Motor4               motor         4               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// Motor2               motor         2               
// Controller1          controller                    
// Motor3               motor         3               
// ---- END VEXCODE CONFIGURED DEVICES ----
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Thu Sep 26 2019                                           */
/*    Description:  Competition Template                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// Motor2               motor         2               
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

// A global instance of competition
competition Competition;

// define your global instances of motors and other devices here

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the V5 has been powered on and        */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton(void) {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void autonomous(void) {
  Motor1.spin(forward);
  Motor2.spin(reverse);
  task::sleep(5000);
  Motor1.stop(brakeType::brake);
  Motor2.stop(brakeType::brake);
  task::sleep(500);  
  Motor1.spin(reverse);
  Motor2.spin(forward);
  task::sleep(5000);
  Motor1.stop(brakeType::brake);
  Motor2.stop(brakeType::brake);
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void usercontrol(void) {
  // User control code here, inside the loop
  while (1) {
    //craig loves the fortnite code

    //drive control
    
    Motor2.spin(directionType::rev, Controller1.Axis3.value() - Controller1.Axis4.value(), velocityUnits::pct);
    Motor1.spin(directionType::fwd, Controller1.Axis3.value() + Controller1.Axis4.value(), velocityUnits::pct);


    //arms
    if(floor(Controller1.Axis2.value()) != 0){

      Motor3.spin(directionType::fwd, Controller1.Axis2.value(), velocityUnits::pct);
      Motor4.spin(directionType::rev, Controller1.Axis2.value(), velocityUnits::pct);

    } else {

      Motor3.stop();
      Motor4.stop();
      Motor3.setStopping(hold);
      Motor4.setStopping(hold);

    }

    Motor3.spin(directionType::fwd, Controller1.Axis2.value(), velocityUnits::pct);
    Motor4.spin(directionType::rev, Controller1.Axis2.value(), velocityUnits::pct);

    if(Controller1.ButtonR2.pressing()){

      Motor11.spin(directionType::fwd, 100, velocityUnits::pct);
      Motor20.spin(directionType::rev, 100, velocityUnits::pct);

    } else if (Controller1.ButtonR1.pressing()){

      Motor11.spin(directionType::rev, 100, velocityUnits::pct);
      Motor20.spin(directionType::fwd, 100, velocityUnits::pct);

    } else {

      Motor11.stop();
      Motor11.setStopping(brake);
      Motor20.stop();
      Motor20.setStopping(brake);
    }

    //intake control

    //platform control

    if(Controller1.ButtonUp.pressing() or Controller1.ButtonDown.pressing()){
      
      if(Controller1.ButtonUp.pressing()){
        
        Motor7.spin(directionType::fwd);

      }

      if(Controller1.ButtonDown.pressing()){
        
        Motor7.spin(directionType::rev);

      }

    } else {

      Motor7.stop();

    }

    wait(20, msec); // Sleep the task for a short amount of time to
                    // prevent wasted resources.
  }
}

//
// Main will set up the competition functions and callbacks.
//
int main() {
  // Set up callbacks for autonomous and driver control periods.
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  // Run the pre-autonomous function.
  pre_auton();

  // Prevent main from exiting with an infinite loop.
  while (true) {
    wait(100, msec);
  }
}
