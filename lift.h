//header file for lift
#ifndef Lift_h
#define Lift_h
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

//structure for a set of lifts
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

//class constructor for lift
class Lift{
    
    //member vairables
    std::string name;
    Lift_set heaviest_set;
    Lift_set previous_set;
    double total_weight = 0;
    std::vector<Lift_set> set_list;
    
    
public:
    //default constructor 
    Lift();
    Lift(std::string in_name){name = in_name;}
    
    //Getters
    std::string get_name(){return this->name;}
    Lift_set get_heaviest_set(){return this->heaviest_set;}
    double get_total_weight(){return this->total_weight;}
    
    //setters
    void set_heaviest_set(Lift_set aset){heaviest_set = aset;}
    void set_previous_set(Lift_set aset){previous_set = aset;}
    
    //add a set to set_list
    void add_set(int w, int r);
    
    //display lift info
    void display_info();
    
};

#endif

//Single exercise item ...add as many as you want.....
//Blank box with lift name input
//Click on the lift
//Enter weight x reps
//Calculate / graph total weight lifted over time
//Each graph point is a day that lift was lifted, total weight moved, heaviest set
