//******************************************************************
//  Creator:    Cody Williams
//  Date:       2020-01-07
//  File:       Lift.h
//  Notes:      Code for class Lift
//******************************************************************
#include "func.h"

//******************************************************************
/* global variables */
std::vector<Lift_group> group_list;
//******************************************************************

//******************************************************************
/* adds a new group to the group_list */
void add_group(std::string in_name){
    Lift_group newgroup = Lift_group(in_name);
    group_list.push_back(newgroup);
}
//******************************************************************

//******************************************************************
/* Removes a group from the group list */
void remove_group(int index){
    group_list.erase(group_list.begin() + index);
}
//******************************************************************

//******************************************************************
/* shows all the lifts belonging to a selected group*/
void select_group(int index){
    group_list[index].show_all_lifts();
}
//******************************************************************

//******************************************************************
/* Shows all groups in the group list*/
void show_all_groups(){
    std::cout << "Your lift groupings" << std::endl;
    for(int i = 0; i < group_list.size(); i++){
        std::cout << i << ": " << group_list[i].get_group_name() << std::endl;
    }
}
//******************************************************************

