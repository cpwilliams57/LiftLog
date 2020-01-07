//******************************************************************
//  Creator:    Cody Williams
//  Date:       2020-01-07
//  File:       Lift.h
//  Notes:      
//******************************************************************

#ifndef Lift_h
#define Lift_h

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <iomanip>

//******************************************************************
//A Lift set is used to store the weight and reps of a given set.
struct Lift_set{
    int reps = 0;
    int weight = 0;
    double weight_moved = 0;
    
    //set constructor
    Lift_set(){};
    Lift_set(int w, int r){
        reps = r;
        weight = w;
        weight_moved = r * w;
    }
};
//******************************************************************

//******************************************************************
/*A lift is the basic unit of organization for LiftLog*/
class Lift{
    
    /* private members of the lift class */
    std::vector<Lift_set> set_list; //holds all sets for a lift
    std::string lift_name = ""; //name of the lift
    Lift_set heaviest_set = Lift_set(0,0);  //heaviest set all time for a lift
    Lift_set previous_set = Lift_set(0,0);  //the previous set
    
public:
    
    /* public members of lift class */
    Lift();
    Lift(std::string in_name){lift_name = in_name;}
   
    /* getter & setter for lift_name */
    std::string get_lift_name(){return this->lift_name;}
    void set_lift_name(std::string in_name){this->lift_name = in_name;}
    
    /* getter & setter for heaviest_set */
    Lift_set get_heaviest_set(){return this->heaviest_set;}
    void set_heaviest_set(Lift_set in_set){this->heaviest_set = in_set;}
    
    /* getter & setter for previous_set */
    Lift_set get_previous_set(){return this->previous_set;}
    void set_previous_set(){this->previous_set = set_list.back();}
    
    /* Functions for class Lift defined in Lift.cpp */
    void add_set(int weight, int reps);
    void show_lift_info();
    void show_all_sets();
};
//******************************************************************


#endif 
