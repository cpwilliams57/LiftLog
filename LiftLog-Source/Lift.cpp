//******************************************************************
//  Creator:    Cody Williams
//  Date:       2020-01-07
//  File:       Lift.cpp
//  Notes:      Contains definitions for functions of Lift.h
//******************************************************************

#include "Lift.h"

//******************************************************************
//Adds a set to the set_list and updates heaviest set and previous set info
void Lift::add_set(int weight, int reps){
    /* Create a new set with the input weight and reps*/
    Lift_set newset = Lift_set(weight,reps);
    
    /* add this set to the set_list*/
    this->set_list.push_back(newset);
    
    /* If the weight moved is greater than heavies set, update heaviest set*/
    if(newset.weight_moved >= this->heaviest_set.weight_moved){
        set_heaviest_set(newset);
    }
    
    /* Previous set is now the new set added */
    set_previous_set();
}
//******************************************************************

//******************************************************************
void Lift::show_all_sets(){
    /* Prints info from all sets in the set_list*/
    std::cout << std::left << std::setw(10) << "Weight:" << "Reps:" << std::endl;
    for(int i = this->set_list.size() - 1; i >= 0; i--){
        std::cout << std::left << std::setw(10) << this->set_list[i].weight << this->set_list[i].reps << std::endl;
    }
}
//******************************************************************

//******************************************************************
void Lift::show_lift_info(){}
//******************************************************************


