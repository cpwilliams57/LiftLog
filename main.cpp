#include <iostream>
#include <vector>
#include "lift.h"

//initialize vector used to keep track of lifts
std::vector<Lift> lift_list;

//create and add a lif to the lift_list
void add_lift(std::string name){lift_list.push_back(Lift(name));}

//remove a lift from the lift_list
void remove_lift(char choice){
    int index = (int)choice;
    if(lift_list.size() < 1){
        std::cout << "lift_list is empty" << std::endl;
    }
    else{
        lift_list.erase(lift_list.begin() + index);
    }
}

//Print current lifts in lift list
void display_lifts(){
    std::cout << "LIFT LIST" << std::endl;
    for(int i = 0; i < lift_list.size(); i++){
        std::cout << i <<": " << lift_list[i].get_name() << std::endl;
    }
}

//print the menu options
void display_menu(){
    std::cout << "WELCOME TO LIFT LOG 1.0!" << std::endl;
    std::cout << "Options" << std::endl;
    std::cout << "(num) Select lift" << std::endl;
    std::cout << "(a) Add lift" << std::endl;
    std::cout << "(r) Remove lift" << std::endl;
    std::cout << "(q) quit" << std::endl << std::endl;
}

//main program loop
int main(int argc, const char * argv[]){
    
    //choices at main menue are....
    //1. add lift
    //2. remove lift
    //3. select lift
    //4. exit
    display_menu();
    display_lifts();
    
    char input;
    while (input!= 'q'){
        std::cin >> input;
        switch(input){
            case 'q':{
                input = 'q';
                break;
            }
            default:{
                std::cout<< "invalid option" << std::endl;
                break;
            }
        }
        
    }
//    add_lift("bench");
//    add_lift("squat");
//    add_lift("deadlift");
//    display_menu();
//    display_lifts();
    //add_lift("bench");
    
    // lift_list[0].display_info();
//    lift_list[0].add_set(125,5);
//    lift_list[0].add_set(13,5);
//    lift_list[0].add_set(1000,5);
//    lift_list[0].add_set(15,5);
//    lift_list[0].add_set(13,6);
//    lift_list[0].add_set(151,5);
//    lift_list[0].add_set(131,6);
//    lift_list[0].display_info();
}

