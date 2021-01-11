#include <iostream>
#include <random>
#include <ctime>

void IntroMessage(int Difficulty){
   std::cout << "\nWelcome!\n  Please enter 3 numbers to guess the sum and product. Level " << Difficulty << std::endl;
}
bool PlayGame(int Difficulty, int LastLevel){

   IntroMessage(Difficulty);
   const int CodeA = (rand() % Difficulty) + Difficulty;
   const int CodeB = (rand() % Difficulty) + Difficulty;
   const int CodeC = (rand() & Difficulty) + Difficulty;

   int GuessA, GuessB, GuessC;
   int CodeSum = CodeA + CodeB + CodeC;
   int CodeProduct = CodeA * CodeB * CodeC;
   std::cout << "\nThe code adds up to: " << CodeSum << "\nThe code multiplies to: " << CodeProduct << std::endl;

   std::cin >> GuessA;
   std::cin >> GuessB;
   std::cin >> GuessC;

   int GuessSum = GuessA + GuessB + GuessC;
   int GuessProduct = GuessA * GuessB * GuessC;

   if(Difficulty == LastLevel){
       std::cout << "\nYou creaked the code! ";
   }
   if(GuessSum == CodeSum && GuessProduct == CodeProduct){
       std::cout << "\nYou guessed correctly! Moving to next level ";
       
       return true;
   } else {
       std::cout << "\nYou missed that one! Try another ";
       std::cout << CodeSum << " " << CodeProduct << std::endl;
       return false;
   }

}

int main()
{
   srand(time(NULL)); // Generates random sequence based on time of day

   int LevelDifficulty = 1;
   int const LastLevel = 5;
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