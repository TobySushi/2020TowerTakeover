#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor Motor1 = motor(PORT1, ratio18_1, false);
motor Motor2 = motor(PORT2, ratio18_1, false);
controller Controller1 = controller(primary);
motor Motor3 = motor(PORT3, ratio36_1, false);
motor Motor5 = motor(PORT5, ratio18_1, false);
motor Motor20 = motor(PORT20, ratio18_1, false);
motor Motor11 = motor(PORT11, ratio18_1, false);
motor Motor7 = motor(PORT7, ratio18_1, false);
motor Motor4 = motor(PORT4, ratio36_1, false);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}