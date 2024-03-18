#include <iostream>
#include <iomanip>

int judgment_strike(int answer,int input);
int judgment_ball(int answer,int input);
int randromAnswer();

int main() {
  
  int answer = randromAnswer();

  std::cout << "Answer is " << std::setw(3) << std::setfill('0') << answer << std::endl;
  //setw는 출력폭 설정, setfill은 빈 자리에 채울 문자설정


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