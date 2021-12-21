#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Type your name: ";
    std::cin >> name;
    std::cout << "Hello World, Hello " << name << std::endl;
}