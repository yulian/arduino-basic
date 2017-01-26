/*
 * 푸시 버튼을 눌러 LED를 제어하는 예제 코드
 * 
 * 푸시 버튼을 누르면 LED가 켜지고, 떼면 LED가 꺼진다.
 * 더 많은 정보는 토이 메이커스 http://cafe.naver.com/toymakers
 * 
 * 2017년 1월 18일 수정됨 by 율리안(Yulian)
 * 
 */

int PIN_LED = 8;    // 8번 핀을 LED 제어용으로 선언
int PIN_BUTTON = 2; // 2번 핀을 버튼 입력용으로 선언

void setup() {
  pinMode(PIN_LED, OUTPUT);   // LED 핀을 출력 모드로 초기화 
  pinMode(PIN_BUTTON, INPUT); // BUTTON 핀을 입력 모드로 초기화
}

void loop() {

  int inputValue = digitalRead(PIN_BUTTON); // 디지털 입력으로 BUTTON 핀의 값을 읽어옴

  if (inputValue == HIGH) {
    digitalWrite(PIN_LED, HIGH);  // LED 켜기
  }
  else {
    digitalWrite(PIN_LED, LOW);   // LED 끄기
  }
}


