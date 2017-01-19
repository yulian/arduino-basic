/*
 * 삼색 LED를 이용해 다양한 색상의 빛을 내는 예제 코드
 * 
 * 삼색 LED와 3개의 푸시 버튼을 이용하여 빨강, 초록 파랑 색상을 조합한 빛을 낸다.
 * 빛의 세기 제어는 디지털 신호를 아날로그 신호처럼 사용할 수 있게 하는 PWM(Pulse Width Modulation)을 이용한다.
 * 더 많은 정보는 토이 메이커스 http://cafe.naver.com/toymakers
 * 
 * 2017년 1월 19일 수정됨 by 소리향기
 * 
 */

int red = 0;    // 붉은색 색상 값 초기화
int green = 0;  // 녹색 색상 값 초기화
int blue = 0;   // 청색 색상 값 초기화

int PIN_BUTTON_RED = 7;     // 붉은색 색상 값 조절 버튼의 변수 선언
int PIN_BUTTON_GREEN = 6;   // 녹색 색상 값 조절 버튼의 변수 선언
int PIN_BUTTON_BLUE = 5;    // 청색 색상 값 조절 버튼의 변수 선언

int PIN_3COLOR_RED = 9;     // 삼색 LED의 붉은색 조절 핀 정의
int PIN_3COLOR_GREEN = 10;  // 삼색 LED의 녹색 조절 핀 정의
int PIN_3COLOR_BLUE = 11;   // 삼색 LED의 청색 조절 핀 정의

void setup() {
  pinMode(PIN_BUTTON_RED, INPUT);     // 붉은색 제어핀을 입력 모드로 초기화
  pinMode(PIN_BUTTON_GREEN, INPUT);   // 녹색 제어핀을 입력 모드로 초기화
  pinMode(PIN_BUTTON_BLUE, INPUT);    // 청색 제어핀을 입력 모드로 초기화

  pinMode(PIN_3COLOR_RED, OUTPUT);    // 삼색 LED의 붉은색 제어핀을 출력 모드로 초기화
  pinMode(PIN_3COLOR_GREEN, OUTPUT);  // 삼색 LED의 녹색 제어핀을 출력 모드로 초기화
  pinMode(PIN_3COLOR_BLUE, OUTPUT);   // 삼색 LED의 청색 제어핀을 출력 모드로 초기화
}

void loop() {

  // 붉은색 제어 버튼이 눌린 경우 색상 값을 1씩 증가
  if (digitalRead(PIN_BUTTON_RED) == HIGH) {
    red++;
    if (red > 255) {
      red = 0;
    }
  }

  // 녹색 제어 버튼이 눌린 경우 색상 값을 1씩 증가
  if (digitalRead(PIN_BUTTON_GREEN) == HIGH) {
    green++;
    if (green > 255) {
      green = 0;
    }
  }

  // 청색 제어 버튼이 눌린 경우 색상 값을 1씩 증가
  if (digitalRead(PIN_BUTTON_BLUE) == HIGH) {
    blue++;
    if (blue > 255) {
      blue = 0;
    }
  }

  // 현재 R, G, B 색상 값을 PWM을 통해 출력
  analogWrite(PIN_3COLOR_RED, red);
  analogWrite(PIN_3COLOR_GREEN, green);
  analogWrite(PIN_3COLOR_BLUE, blue);

  // 색상이 변경되는지 확인하기 위해 20 ms(mili seconds) 동안 지연
  delay(20);
  
}


