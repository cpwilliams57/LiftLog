//******************************************************************
//  Creator:    Cody Williams
//  Date:       2020-01-07
//  File:       main.cpp
//  Notes:      main.cpp file for LiftLog program
//******************************************************************

#include <iostream>
#include "Lift_group.h"

/* global variables */
std::vector<Lift_group> group_list;

//add group function
void add_group(std::string in_name){
    Lift_group newgroup = Lift_group(in_name);
    group_list.push_back(newgroup);
}
//remove group function
//select group function

//show group function
void show_all_groups(){
    std::cout << "Your lift groupings" << std::endl;
    for(int i = 0; i < group_list.size(); i++){
        std::cout << i << ": " << group_list[i].get_group_name() << std::endl;
    }
}


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
    lift2.add_set(33, 5);
    lift2.add_set(67, 6);
    
    Lift_group group1 = Lift_group("group1");
    group1.add_lift("bench");
    group1.add_lift("squat");
    //group1.show_all_lifts();
    
    Lift_group group2 = Lift_group("group2");
    group1.add_lift("clean");
    group1.add_lift("press");
    
    add_group("group1");
    add_group("group2");

    
    show_all_groups();
    
    
   // lift1.show_lift_info();

    return 0;
}
//******************************************************************

