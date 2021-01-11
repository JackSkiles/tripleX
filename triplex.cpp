#include <iostream>

bool win = false;

void IntroMessage(){
   std::cout << "Welcome! Please enter 3 numbers to guess the sum and product.\n";
}
bool PlayGame(){

   IntroMessage();
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

   if(GuessSum == CodeSum && GuessProduct == CodeProduct){
       std::cout << "You guessed correctly! ";
       return false;
   } else {
       std::cout << "You guessed poorly ";
       return true;
   }

   std::cout << GuessSum << " " << GuessProduct << std::endl;
}

int main()
{
   while(true){
      bool levelComplete = PlayGame();
      std::cin.clear();
      std::cin.ignore();
   }
   return 0;
}