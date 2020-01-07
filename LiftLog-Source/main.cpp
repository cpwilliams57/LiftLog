//******************************************************************
//  Creator:    Cody Williams
//  Date:       2020-01-07
//  File:       main.cpp
//  Notes:      main.cpp file for LiftLog program
//******************************************************************

#include <iostream>
#include "Lift.h"

int main(int argc, const char * argv[]) {
    //When program starts, user will be shown a list of their lift groups
    //user can select a lift group, add a lift group, or delete a lift group
    
    std::cout << "Welcome to LiftLog 1.0!" << std::endl;
    
    Lift lift1 = Lift("lift1");
    std::cout << lift1.get_lift_name() << std::endl;
    lift1.set_lift_name("newname");
    std::cout << lift1.get_lift_name() << std::endl;
    
//    lift1.add_set(120,1);
//    std::cout << lift1.get_heaviest_set().weight << std::endl;
//    std::cout << lift1.get_previous_set().weight << std::endl;
//
//    lift1.add_set(100,1);
//    std::cout << lift1.get_heaviest_set().weight << std::endl;
//    std::cout << lift1.get_previous_set().weight << std::endl;

    //Lift_set aset = Lift_set(12,2);
    
    return 0;
}
