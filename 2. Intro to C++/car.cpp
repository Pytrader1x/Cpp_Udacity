#include <iostream>
#include "car.h"

// Method definitions for the Car class.
void Car::PrintCarData() 
{
    cout << "The distance that the " << this->color << " car " << this->number << " has traveled is: " << this->distance << " it's price is: " << this->price << "\n";
}

void Car::IncrementDistance() 
{
    distance++;
}

void Car::IncrementPrice(int amount){
    price += amount;
}