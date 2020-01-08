//******************************************************************
//  Creator:    Cody Williams
//  Date:       2020-01-07
//  File:       Lift.cpp
//  Notes:      Contains definitions for functions of Lift.h
//******************************************************************

#include "Lift.h"

//******************************************************************
/* Adds a set to the set_list and updates heaviest set and previous set info */
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
/* Remove a set from the set list*/
void Lift::remove_set(int index){
    this->set_list.erase(set_list.begin() + index);
}
//******************************************************************

//******************************************************************
/* Prints info from all sets in the set_list*/
void Lift::show_all_sets(){
    std::cout << std::left << std::setw(10) << "Weight:" << "Reps:" << std::endl;
    for(int i = this->set_list.size() - 1; i >= 0; i--){
        std::cout << i << ": " << std::left << std::setw(10) <<
        this->set_list[i].weight << this->set_list[i].reps << std::endl;
    }
}
//******************************************************************

//******************************************************************
void Lift::show_lift_info(){
    /* display the heaviest set */
    std::cout << "Heaviest Set - W: " << this->heaviest_set.weight;
    std::cout << " R: " << this->heaviest_set.reps;
    std::cout << " total : " << this->heaviest_set.weight_moved << std::endl;
    
    /* Display past  5 sets */
    std::cout << "Last 5 sets " << std::endl;
    std::cout << std::left << std::setw(10) << "Weight:" << "Reps:" << std::endl;
    
    /* If there are 5 sets in the setlist, print the last 5, if not, print all sets*/
    int j = set_list.size() - 5;
    if(j < 0){j = 0;}
    for(int i = this->set_list.size() - 1; i >= j; i--){
         std::cout << i << ": " << std::left << std::setw(10) << this->set_list[i].weight
        << this->set_list[i].reps << std::endl;
    }
}
//******************************************************************


