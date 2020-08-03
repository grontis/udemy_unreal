#include <iostream>
#include <ctime>



void PrintIntroduction(int LevelDifficulty)
{
    std::cout << "*** Enter the correct code to access server room on level " << LevelDifficulty << " ***\n\n";
}

bool PlayGame(int LevelDifficulty)
{
    PrintIntroduction(LevelDifficulty);

    int CodeA = rand() % LevelDifficulty + LevelDifficulty;
    int CodeB = rand() % LevelDifficulty + LevelDifficulty;
    int CodeC = rand() % LevelDifficulty + LevelDifficulty;

    int Sum = CodeA + CodeB + CodeC;
    int Product = CodeA * CodeB * CodeC;

    std::cout << "The codes add up to: " << Sum << std::endl;
    std::cout << "The codes multiply to give: " << Product << std::endl;
    std::cout << std::endl;

    int PlayerGuessA, PlayerGuessB, PlayerGuessC;

    std::cout << "Enter your guess: " << std::endl;
    std::cin >> PlayerGuessA >> PlayerGuessB >> PlayerGuessC;

    int GuessSum = PlayerGuessA + PlayerGuessB + PlayerGuessC;
    int GuessProduct = PlayerGuessA * PlayerGuessB * PlayerGuessC;

    if(GuessSum == Sum && GuessProduct == Product)
    {
        std::cout << "ACCESS GRANTED" << std::endl;
        return true;
    }
    else
    {
        std::cout << "ACCESS DENIED" << std::endl;
        return false;
    }
}

int main()
{
    srand(time(NULL));

    int LevelDifficulty = 1;
    int MaxLevels = 5;

    while(LevelDifficulty <= MaxLevels)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if(bLevelComplete)
        {
            LevelDifficulty++;
        }
    }

    std::cout << "YOU WIN THE GAME\n";
    
    return 0;
}