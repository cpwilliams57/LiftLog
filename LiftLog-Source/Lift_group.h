//******************************************************************
//  Creator:    Cody Williams
//  Date:       2020-01-07
//  File:       Lift_group.h
//  Notes:      Code for Lift_group.h. A Lift_group is a structure for
//              categorizing and storing a group of lifts
//******************************************************************

#ifndef Lift_group_h
#define Lift_group_h

#include "Lift.h"

class Lift_group{
    
    /* Private members of Lift_group */
    std::string group_name;
    std::vector <Lift> lift_list;
    
public:
    /* public members of Lift_group */
    Lift_group();
    Lift_group(std::string in_name){this->group_name = in_name;}
    
    /* getter & setter for group_name */
    std::string get_group_name(){return this->group_name;}
    void set_group_name(std::string in_name){this->group_name = in_name;}
    
    /* Add a new lift to the lift list for the group */
    void add_lift(std::string lift_name){
        Lift newlift = Lift(lift_name);
        lift_list.push_back(newlift);
    }
    
    /* lists all the lifts contained in the group */
    void show_all_lifts(){
        for(int i = 0; i < this->lift_list.size(); i++)
            std::cout << i << ": " << std::left << std::setw(10) <<
            this->lift_list[i].get_lift_name() << std::endl;
    }
    
    //remove lift function
    //select lift function
};

#endif 
