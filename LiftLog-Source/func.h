//******************************************************************
//  Creator:    Cody Williams
//  Date:       2020-01-07
//  File:       Lift.h
//  Notes:      Code for class Lift
//******************************************************************

#ifndef func_hpp
#define func_hpp

#include <stdio.h>
#include "Lift_group.h"

//******************************************************************
/* adds a new group to the group_list */
void add_group(std::string in_name);

/* Removes a group from the group list */
void remove_group(int index);

/* shows all the lifts belonging to a selected group*/
void select_group(int index);

/* Shows all groups in the group list*/
void show_all_groups();
//******************************************************************


#endif 
