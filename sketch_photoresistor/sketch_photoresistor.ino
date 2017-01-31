/*
 * 조도센서(Photoresistor)를 이용해 LED의 밝기를 제어하는 예제 코드
 * 
 * 조도센서를 통해 주위의 밝기를 측정하여, 밝기가 낮을 수록 LED의 빛을 강하게 출력한다.
 * map() 함수를 이용해 아날로그 입력과 출력의 범위를 조절할 수 있다.
 * 더 많은 정보는 토이 메이커스 http://cafe.naver.com/toymakers
 * 
 * 2017년 1월 31일 수정됨 by 율리안(Yulian)
 * 
 */

int PIN_LED = 9;            // LED 핀 초기화
int PIN_PHOTORESISTOR = A0; // 조도센서 핀 초기화

void setup() {
}

void loop() {
  int light = analogRead(PIN_PHOTORESISTOR);    // 아날로그 핀 A0의 신호를 읽어 변수 light에 저장
  int ledOutput = map(light, 0, 1023, 255, 0);  // 10bit 아날로그 신호를 8bit 신호 범위로 역변환
  analogWrite(PIN_LED, ledOutput);              // PWM을 이용해 LED의 세기를 조절
}

