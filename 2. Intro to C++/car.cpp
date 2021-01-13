#include <iostream>
#include "car.h"

// Method definitions for the Car class.
void Car::PrintCarData() 
{
    cout << "The distance that the " << color << " car " << number << " has traveled is: " << distance << " it's price is: " << price << "\n";
}

void Car::IncrementDistance() 
{
    distance++;
}

void Car::IncrementPrice(int amount){
    price += amount;
}