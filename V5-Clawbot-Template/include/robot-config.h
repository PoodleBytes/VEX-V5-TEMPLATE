#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "v5.h"
#include "v5_vcs.h"
//
using namespace vex;
vex::brain Brain;

vex::motor R_Rear_Drive (vex::PORT1, vex::gearSetting::ratio18_1,false);
vex::motor R_Front_Drive (vex::PORT10, vex::gearSetting::ratio18_1,false);
vex::motor L_Rear_Drive (vex::PORT11, vex::gearSetting::ratio18_1,false);
vex::motor L_Front_Drive (vex::PORT20, vex::gearSetting::ratio18_1,false);
vex::motor R_Lift (vex::PORT2, vex::gearSetting::ratio18_1,false);
vex::motor L_Lift (vex::PORT5, vex::gearSetting::ratio18_1,true);
vex::motor Claw (vex::PORT6, vex::gearSetting::ratio18_1,false);


vex::pot Selector( Brain.ThreeWirePort.H);

vex::controller Controller1;