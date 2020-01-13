//******************************************************************
//  Creator:    Cody Williams
//  Date:       2020-01-07
//  File:       main.cpp
//  Notes:      main.cpp file for LiftLog program
//******************************************************************

#include <iostream>
#include "func.h"

//******************************************************************
int main(int argc, const char * argv[]) {
    //When program starts, user will be shown a list of their lift groups
    //user can select a lift group, add a lift group, or delete a lift group
    
    std::cout << "Welcome to LiftLog 1.0!" << std::endl;
    
    Lift lift1 = Lift("lift1");
//    std::cout << lift1.get_lift_name() << std::endl;
//    lift1.set_lift_name("newname");
//    std::cout << lift1.get_lift_name() << std::endl;
//    
//    lift1.add_set(120,1);
//    std::cout << lift1.get_heaviest_set().weight << std::endl;
//    std::cout << lift1.get_previous_set().weight << std::endl;
//
//    lift1.add_set(100,1);
//    std::cout << lift1.get_heaviest_set().weight << std::endl;
//    std::cout << lift1.get_previous_set().weight << std::endl;
    
    lift1.add_set(33, 5);
    lift1.add_set(44, 5);
    lift1.add_set(33, 5);
    lift1.add_set(67, 6);
    lift1.add_set(33, 56);
    lift1.add_set(37, 5);
    
    Lift lift2 = Lift("lift2");
    lift2.add_set(33, 5);
    lift2.add_set(44, 5);
    lift2.add_set(12, 5);
    lift2.add_set(67, 6);
    
//    lift2.show_all_sets();
//
//    lift2.remove_set(2);
//
//    lift2.show_all_sets();
    


    Lift_group group1 = Lift_group("group1");
    group1.add_lift("bench");
    group1.add_lift("squat");
    group1.add_lift("dead");
    group1.add_lift("clean");
    group1.add_lift("press");
    

    
//    group1.show_all_lifts();
//
//    group1.select_lift(2);
    
    //group1.remove_lift(2);
    //group1.show_all_lifts();
    
    

//
//    Lift_group group2 = Lift_group("group2");
//    group1.add_lift("clean");
//    group1.add_lift("press");
//
    add_group("group1");
    add_group("group2");
    add_group("group3");
    add_group("group4");
    
    show_all_groups();
    
    select_group(2);
    
//    remove_group(2);
//    show_all_groups();
    
       
       
    

    
    //show_all_groups();
    
    
   // lift1.show_lift_info();

    return 0;
}
//******************************************************************

