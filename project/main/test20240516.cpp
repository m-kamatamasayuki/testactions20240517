#include <iostream>

int main() {
    int num;
    std::cout << "what is the number: ";
    std::cin >> num;
    int squared = num * num;
    std::cout << "The square of that number is " << squared << " is" << std::endl;
    return 0;
}
