/*
 * LED가 1초 마다 깜빡이는 예제 코드
 * 
 * 아두이노 UNO, MEGA, ZERO 보드의 디지털 13번 핀 또는 MKR1000 보드의 6번 핀 제어
 * 보드 유형에 상관없이 LED_BUILTIN 변수명으로 내장 LED 제어가 가능함
 * 더 많은 정보는 토이 메이커스 http://cafe.naver.com/toymakers
 * 
 * 2017년 1월 6일 수정됨 by 율리안(Yulian)
 * 
 */


void setup() {
  // LED_BUILTIN 변수명으로 디지털 출력을 초기화
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // LED 켜기
  delay(1000);                      // 1초 동안 대기
  digitalWrite(LED_BUILTIN, LOW);   // LED 끄기
  delay(1000);                      // 1초 동안 대기
}


