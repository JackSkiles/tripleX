#include <iostream>

void IntroMessage(){
   std::cout << "Welcome! Please enter 3 numbers to guess the sum and product.\n";
}
void PlayGame(){
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
   } else {
       std::cout << "You guessed poorly ";
   }

   std::cout << GuessSum << " " << GuessProduct;
}

int main()
{
   IntroMessage();
   PlayGame();
   return 0;
}