/*
 * 토양 수분감지센서를 이용해 시리얼 모니터로 수분의 정도를 출력하는 예제 코드
 * 
 * 토양 수분감지센서의 동작 원리를 이해하고, 시리얼 모니터로 현재 수분 정도를 출력해보자.
 * 수분의 정도는 아날로그 값인 0 ~ 1023까지의 범위를 가진다.
 * 더 많은 정보는 토이 메이커스 http://cafe.naver.com/toymakers
 * 
 * 2017년 8월 19일 수정됨 by 토이메이커스(메이커멘토)
 * 
 */

void setup() {
  Serial.begin(9600);   // 시리얼모니터에 출력을 위한 보어레이트 설정
}

void loop() {

  // 토양 수분감지센서로부터 아날로그 입력 값을 가져옴 (0 ~1023)
  int soilMoisture = analogRead(A0);

  // 시리얼 모니터에 토양의 수분정도 출력
  Serial.print("Soil Moisture: ");
  Serial.println(soilMoisture);

  // 안정적인 측정과 출력을 위한 지연시간
  delay(1000);
}

