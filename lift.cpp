//Definition of lift class and functions
#include "lift.h"

//add a set to the se list and update the info
void Lift::add_set(int w, int r){
    //add a new set to the set list
    Lift_set newset = Lift_set(w,r);
    this->set_list.push_back(newset);
    //if the new et is bigger then heavier, update the info
    if(newset.weight_moved > this->heaviest_set.weight_moved){this->heaviest_set = newset;}
    //Previous set is now the new set added
    this->previous_set = newset;
}

//Display info of the lift
void Lift::display_info(){
    //display the heaviest set
    std::cout << "Heaviest Set - W: " << this->heaviest_set.weight;
    std::cout << " R: " << this->heaviest_set.reps;
    std::cout << " total : " << this->heaviest_set.weight_moved << std::endl;
       
    //display the previous set info
    std::cout << "Previous Set - W: " << this->previous_set.weight;
    std::cout << " R: " << this->previous_set.reps;
    std::cout << " total : " << this->previous_set.weight_moved << std::endl;
    
    //Display past  5 sets
    std::cout << "Last 5 sets " << std::endl;
    std::cout << std::left << std::setw(10) << "Weight:" << "Reps:" << std::endl;
    for(int i = this->set_list.size(); i > this->set_list.size() - 5; i--){
        if(i < 0){break;}
        std::cout << std::left << std::setw(10) << this->set_list[i-1].weight << this->set_list[i-1].reps << std::endl;
    }
}
