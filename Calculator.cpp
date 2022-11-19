#include <iostream>

int main()
{

    int result;
    int numOne, numTwo;
    char opCode;

    std::cout << "Enter first interval: ";
        std::cin >> numOne;
    std::cout << "Now enter your second interval: ";
        std::cin >> numTwo;
    std::cout << "Enter your desired form of operation: ";
        std::cin >> opCode;

    if(opCode == '+')
    {
        result = numOne + numTwo;
    }
    else if(opCode == '-')
    {
        result = numOne - numTwo;
    }
    else if (opCode == '*')
    {
        result = numOne * numTwo;
    }
    else if (opCode == '/')
    {
        result = numOne / numTwo;
    }
    else
    {
        std::cout << "Invalid sequence!";
    }

    std::cout << "Your total comes to: " << result;
}
