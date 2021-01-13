#include <iostream>
#include <string>
using std::string;
using std::cout;

class Car {
  public:
    void PrintCarData() 
    {
        cout << "The distance that the " << color << " car " << number << " has traveled is: " << distance << " priced at: " << price << "\n";
    }

    void IncrementDistance() 
    {
        distance++;
    }
    
    void IncrementPrice(int amount){
        price += amount;
    }
    
    // Adding a constructor here:
    Car(string c, int n, int p) 
    {
        // Setting the class attributes with
        // The values passed into the constructor.
        color = c;
        number = n;
        price = p;
    }
    
    string color;
    int distance = 0;
    int number;
    int price;
};

int main() 
{
    // Create class instances for each car.
    Car car_1 = Car("green", 1, 500);
    Car car_2 = Car("red", 2, 900);
    Car car_3 = Car("blue", 3, 1100);
    
    car_1.PrintCarData();
    car_2.PrintCarData();
    car_3.PrintCarData();

    // Increment car_1's position by 1.
    car_1.IncrementDistance();
    
    // Increment car 2's price by 200
    car_2.IncrementPrice(200);

    // Print out the position and color of each car.
    car_1.PrintCarData();
    car_2.PrintCarData();
    car_3.PrintCarData();
}