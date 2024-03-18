#include <iostream>
#include <iomanip>

int judgment_strike(int answer,int input);
int judgment_ball(int answer,int input);
int randromAnswer();

int main() {

  
  int answer = randromAnswer();
  
  int i = 5;
  while(true) {
    int input;
    int Strikes = 0;
    int Balls = 0;

    if(i<=0) {
      std::cout << "You lose!";
      break;
    }

    std::cout << i << " chances left." << std::endl;
    std::cout << "Enter a guess: ";
    std::cin >> input;

    Strikes = judgment_strike(answer,input);
    Balls =  judgment_ball(answer,input);

    if(Strikes==3) {
      std::cout << "You win!";
      break;
    }

    std::cout << "Strikes: " << Strikes << ", Balls: " << Balls << std::endl;
    i = i - 1; 
  }

  return 0;
}