#ifndef CAR_H
#define CAR_H

#include <string>
using std::string;
using std::cout;
// declarations are in the header file .h or hpp

class Car {
  public:
  // declarations are in the header file .h or hpp!!
    void PrintCarData();
    void IncrementDistance();
    void IncrementPrice(int amount);
    
    // Using a constructor list in the constructor:
    Car(string c, int n, int p) : color(c), number(n), price(p) {}
  
  // The variables do not need to be accessed outside of
  // functions from this class, so we can set them to private.
  private:
    string color;
    int distance = 0;
    int number;
    int price;
};

#endif