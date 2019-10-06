#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "v5.h"
#include "v5_vcs.h"
//
using namespace vex;
vex::brain Brain;

vex::motor R_Rear_Drive (vex::PORT11, vex::gearSetting::ratio18_1,true);
vex::motor R_Front_Drive (vex::PORT12, vex::gearSetting::ratio18_1,false);
vex::motor L_Rear_Drive (vex::PORT1, vex::gearSetting::ratio18_1,true);
vex::motor L_Front_Drive (vex::PORT2, vex::gearSetting::ratio18_1,false);
vex::motor R_Lift (vex::PORT13, vex::gearSetting::ratio18_1,false);
vex::motor L_Lift (vex::PORT3, vex::gearSetting::ratio18_1,true);
vex::motor Claw (vex::PORT4, vex::gearSetting::ratio18_1,true);


vex::pot Selector( Brain.ThreeWirePort.H);

vex::controller Controller1;