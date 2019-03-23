#include <iostream>
#include <chrono>
#include <vector>

#include "robot.h"

using namespace std::chrono;
using namespace elma;
using namespace robot;

Robot& StopState:: robot() { return (Robot&) state_machine(); }

void StopState::entry(const Event& e) {
    
        // User runs the robot
        //std::cout<<std::endl;
        //std::cout <<"ENTERED CLEAN STATE YOOOO"<<std::endl;
    
}

void StopState::during() {
    
        // User runs the robot
        //std::cout<<std::endl;
        //std::cout <<"DURING CLEAN STATE LETS GOOO"<<std::endl;

        //do stuff here
        //update and refresh screen
    
}

void StopState::exit(const Event& e) {
    if ( e.name() == "clean" ) {
        // User runs the robot
        robot().cleaner();
    } else if(e.name() == "off"){
        //turns off the robot
        robot().turnOff();
    }
}
