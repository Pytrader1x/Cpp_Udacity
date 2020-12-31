#include <iostream>
using std::cout;

int main() 
{
    // Create the enum Color with fixed values.
    enum class Color {white, black, blue, red, yellow};

    // Create a Color variable and set it to Color::blue.
    Color my_color = Color::yellow;

    // Test to see if my car is red.
    if (my_color == Color::red) {
        cout << "The color of my car is red!" << "\n";
    } else {
        cout << "The color of my car is not red." << "\n";
    }

   enum class Direction {kUp, kDown, kLeft, kRight, kDiagonal};

    Direction a = Direction::kDiagonal;

    switch (a) {
      case Direction::kUp : cout << "Going up!" << "\n";
        break;
      case Direction::kDown : cout << "Going down!" << "\n";
        break;
      case Direction::kLeft : cout << "Going left!" << "\n";
        break;
      case Direction::kRight : cout << "Going right!" << "\n";
        break;
      case Direction::kDiagonal : cout << "Going Diagonal" << "\n";
        break;
    }

    enum class hobby {cars, tennis, footy, rugby};

    hobby my_hobby = hobby::footy;

    switch (my_hobby){

        case hobby::cars : cout << "You enjoy " << "cars" << " \n";
            break;
        case hobby::tennis : cout << "You enjoy " << "tennis" << " \n";
            break;
        case hobby::footy : cout << "You enjoy " << "footy" << "\n";
            break;
        case hobby::rugby : cout << "You enjoy " << "Rugby" << "\n";
    }

    enum class day {morning, lunch, night};

    day my_time = day::morning;

    switch (my_time){
        case day::morning : cout << "It's morning\n";
            break;
        case day::lunch : cout << "It's lunch time \n";
            break;
        case day::night : cout << "It's night time \n";
            break;

    }


}