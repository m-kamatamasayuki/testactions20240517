#include <iostream>

int main() {
    int num;
    std::cout << "number:";
    std::cin >> num;
    int squared = num * num;
    std::cout << "that number is " << squared << " is" << std::endl;
    return 0;
}