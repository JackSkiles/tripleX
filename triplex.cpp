#include <iostream>

int main()
{

   int GuessA, GuessB, GuessC;
   std::cin >> GuessA;
   std::cin >> GuessB;
   std::cin >> GuessC;
   int GuessSum = GuessA + GuessB + GuessC;
   int GuessProduct = GuessA * GuessB * GuessC;
   std::cout << GuessSum << " " << GuessProduct;
    return 0;
}