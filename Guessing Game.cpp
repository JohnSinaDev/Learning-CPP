#include <iostream>

int main()
{

    int secretCode = 69;

    int guessCount = 0;
    int guessLimit = 3;
    bool noGuesses = false;

    while(secretCode != guess && !noGuesses){
        if(guessCount <  guessLimit)
        {
        std::cout << "Enter your guess: ";
            std::cin >> guess;
                guessCount++;
        }
        else
        {
            noGuesses = true;
        }

    }

    if(noGuesses)
    {
        std::cout << "You lose!";
    }
    else
    {
        std::cout << "You win!";
    }

}
