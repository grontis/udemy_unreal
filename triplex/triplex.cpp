#include <iostream>

int main()
{
    int CodeA = 4;
    int CodeB = 3;
    int CodeC =  2;

    int Sum = CodeA + CodeB + CodeC;
    int Product = CodeA * CodeB * CodeC;

    std::cout << "The codes add up to: " << Sum << std::endl;
    std::cout << "The codes multiply to give: " << Product << std::endl;

    int PlayerGuessA, PlayerGuessB, PlayerGuessC;

    std::cout << "Enter your guess: " << std::endl;
    std::cin >> PlayerGuessA >> PlayerGuessB >> PlayerGuessC;

    int GuessSum = PlayerGuessA + PlayerGuessB + PlayerGuessC;
    int GuessProduct = PlayerGuessA * PlayerGuessB * PlayerGuessC;

    if(GuessSum == Sum && GuessProduct == Product)
    {
        std::cout << "You win" << std::endl;
    }
    else
    {
        std::cout << "You lose" << std::endl;
    }
    

    return 0;
}