#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    int random = rand() % 2;
    int input = 0;


    std::cout << "(1)Rock (2)Paper or (3)Scissors: ";
    std::cin >> input;

    if (input > 3)
    {
        std::cout << "There is only three options. Try again";
        return 1;
    }

    input--;

    if (random == 0)
    {
        std::cout << "Rock" << std::endl;
    }
    else if (random == 1)
    {
        std::cout << "Paper" << std::endl;
    }
    else if (random == 2)
    {
        std::cout << "Scissors" << std::endl;
    }
    else 
    {
        std::cout << "Error: " << random << std::endl;
    }

    if (random == input)
    {
        std::cout << "Tie" << std::endl;
    }
    else if (random == 0 && input == 1)
    {
        std::cout << "You Won!!!" << std::endl;
    }
    else if (random == 1 && input == 2)
    {
        std::cout << "You Won!!!" << std::endl;
    }
    else if (random == 2 && input == 1)
    {
        std::cout << "You Won!!!" << std::endl;
    }
    else
    {
        std::cout << "You Lost :(" << std::endl;
    }

    return 0;
}