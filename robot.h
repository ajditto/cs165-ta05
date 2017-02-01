#ifndef ROBOT_H
#define ROBOT_H

#include "point.h"

class Robot
{
private:
   Point position;
   int energy;

public:
   void display() const;
   Point getPosition(); 
   int getEnergy();
   void setPosition(Point position);
   void setEnergy(int energy);
   Robot();
};

#endif
