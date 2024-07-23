#include <iostream>

int main()
{
    // Print Hello World
    std::cout << "Hello World!" << std::endl;

    // Ask for the user's name
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    // Greet the user
    std::cout << "Hello, " << name << "!" << std::endl;

    // Ask for two numbers
    int num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculate the sum
    int sum = num1 + num2;

    // Display the sum
    std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << "." << std::endl;

    return 0;
}

