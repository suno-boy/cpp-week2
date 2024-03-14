#include <iostream>
#include <random>
#include <iomanip>

int judgment_strike(int answer,int input);
int judgment_ball(int answer,int input);

int main() {

  // 아래는 랜덤 시드 설정하는거임
  std::random_device rd; // 하드웨어 기반으로한 랜덤 시드 객체 사용
  std::mt19937 gen(rd()); // 랜덤 시드를 넣을 엔진 제공하는 문장이다
  // 엔진에다가 랜덤시드를 넣어서 랜덤 시드설정하는 과정을 빼버리면
  // 엔진 초기화할때마다 같은 난수만 나옴

  // 아래는 000부터 999까지 랜덤 정수 생성하는거임
  std::uniform_int_distribution<int> dis(0,999);
  // std::uniform_int_distribution<int>타입의 dis라는 객체를 만든거임
  // 이 객체에 숫자 범위를 넣으면 난수 나옴

  // 출력할 때 3자리 정수로 출력하기
  int answer = dis(gen);
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