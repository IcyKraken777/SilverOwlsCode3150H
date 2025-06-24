#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor LF = motor(PORT11, ratio3_4, true);
motor LM = motor(PORT12, ratio3_4, true);
motor RF = motor(PORT18, ratio3_4, false);
motor RM = motor(PORT19, ratio3_4, false);
motor LB = motor(PORT13, ratio3_4, true);
motor RB = motor(PORT20, ratio3_4, false);
motor Roller = motor(PORT21, ratio6_1, false);
motor Intake = motor(PORT1, ratio6_1, false);
motor SecondStage = motor(PORT1, ratio6_1, false);
// Pneumatics 
digital_out Piston = digital_out(Brain.ThreeWirePort.D);
digital_out Lift = digital_out(Brain.ThreeWirePort.B);
digital_out Extra = digital_out(Brain.ThreeWirePort.A);
inertial Gyro = inertial(PORT2);
//Naming convention: 
// Important variables
const double wheelDiam = 2.75;
const double wheelToMotorRatio = 48.0/36;

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}
