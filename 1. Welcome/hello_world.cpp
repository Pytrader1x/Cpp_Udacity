#include <iostream>
#include <string>
#include <vector>

int main(){

    std::cout << "Hello World" << "\n";
    std::vector<std::string> cats{"Fifi", "Kitty", "Mimi"};
    for(std::string const& cat : cats){
        std::cout << "Hello " << cat << "\n";

    }
}