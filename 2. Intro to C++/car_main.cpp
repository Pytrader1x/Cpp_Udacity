#include <iostream>
#include <string>
#include "car.h"
using std::string;
using std::cout;

int main() 
{
    // Create class instances for each car.
    Car car_1 = Car("green", 1, 500);
    Car car_2 = Car("red", 2, 700);
    Car car_3 = Car("blue", 3, 900);
    
     // Print out the position and color of each car.
    car_1.PrintCarData();
    car_2.PrintCarData();
    car_3.PrintCarData();

    // Increment car_1's position by 1.
    car_1.IncrementDistance();
    car_2.IncrementPrice(340);

    cout << "\n";
    

    // Print out the position and color of each car.
    car_1.PrintCarData();
    car_2.PrintCarData();
    car_3.PrintCarData();

}