#include <random>
#include <chrono>

int randromAnswer() {

    auto seed = std::chrono::system_clock::now().time_since_epoch().count();
  //v2버전에서 난수가 매번같게 나와서 시드를 시간으로 바꿔버림 v2-2버전임
  std::mt19937 gen(seed); // 시드로 엔진 초기화하기

  // 아래는 000부터 999까지 랜덤 정수 생성하는거임
  std::uniform_int_distribution<int> dis(0,999);
  // std::uniform_int_distribution<int>타입의 dis라는 객체를 만든거임
  // 이 객체에 숫자 범위를 넣으면 난수 나옴

  // 출력할 때 3자리 정수로 출력하기
  int answer = dis(gen);

  return answer;

}