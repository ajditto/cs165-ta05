#include "robot.h"
#include <iostream>
using namespace std;

/************************************
 * Function: Display
 * Purpose: Displays the robot.
 ************************************/
void Robot :: display() const
{
   position.display();
   cout << " - Energy: " << getEnergy();
}

Point Robot :: getPosition() const {
   return position;
}

int Robot :: getEnergy() const {
   return energy;
}

void Robot :: setPosition (Point position) {
   position.setX(x);
   position.setY(y);
}

void Robot :: setEnergy (int energy) {
   this -> energy = energy;
}

Robot :: Robot () {
   energy = 100;
}
