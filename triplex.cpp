#include <iostream>

void IntroMessage(int Difficulty){
   std::cout << "\nWelcome!\n  Please enter 3 numbers to guess the sum and product. Level " << Difficulty << std::endl;
}
bool PlayGame(int Difficulty, int LastLevel){

   IntroMessage(Difficulty);
   int CodeA = 10;
   int CodeB = 15;
   int CodeC = 63;

   int GuessA, GuessB, GuessC;

   std::cin >> GuessA;
   std::cin >> GuessB;
   std::cin >> GuessC;

   int GuessSum = GuessA + GuessB + GuessC;
   int CodeSum = CodeA + CodeB + CodeC;
   int CodeProduct = CodeA * CodeB * CodeC;
   int GuessProduct = GuessA * GuessB * GuessC;

   if(Difficulty == LastLevel){
       std::cout << "\nYou won the game! ";
   }
   if(GuessSum == CodeSum && GuessProduct == CodeProduct){
       std::cout << "\nYou guessed correctly! Moving to next level ";
       return true;
   } else {
       std::cout << "\nYou guessed poorly ";
       return false;
   }

   std::cout << GuessSum << " " << GuessProduct << std::endl;
}

int main()
{
   int LevelDifficulty = 1;
   int const LastLevel = 10;
   while(LevelDifficulty <= LastLevel){ // Loop until all levels completed  
      bool bLevelComplete = PlayGame(LevelDifficulty, LastLevel);
      std::cin.clear();
      std::cin.ignore();

      if (bLevelComplete)
      {
        //   Increase difficulty
        ++LevelDifficulty;
      }
      
   }
   return 0;
}