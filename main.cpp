#include <iostream>

int judgment_strike(int answer,int input);
int judgment_ball(int answer,int input);

int main() {
  int answer;
  std::cout << "Enter a answer: ";
  std::cin >> answer;

  while(true) {
    int input;
    int Strikes = 0;
    int Balls = 0;

    std::cout << "Enter a guess: ";
    std::cin >> input;

    Strikes = judgment_strike(answer,input);
    Balls =  judgment_ball(answer,input);

    if(Strikes==3) {
      std::cout << "You win!";
      break;
    }

    std::cout << "Strikes: " << Strikes << ", Balls: " << Balls << std::endl;
    
  }

  return 0;
}