/*
 * 블루투스 통신을 위한 환경설정 예제 코드
 * 
 * 블루투스 모듈(HC-06, HM-10 등)의 AT명령어로 환경설정값을 변경시킨다.
 * 더 많은 정보는 토이 메이커스 http://cafe.naver.com/toymakers
 * 
 * 2017년 5월 24일 생성됨 by 율리안(Yulian)
 * 
 */

#include <SoftwareSerial.h> // 소프트웨어로 시리얼통신 제어를 위한 라이브러리 참조

SoftwareSerial BTSerial(12, 13);  // 블루투스 모듈의 TX:12번핀 RX:13번핀

void setup() {
  // 시리얼통신 초기화
  // HC-06과 HM-10은 보어레이트가 9600으로 초기화되어 있음
  Serial.begin(9600);
  BTSerial.begin(9600);
}

void loop() {
  // 블루투스 모듈의 입력값이 있을 때 시리얼 모니터에 출력
  if (BTSerial.available())
    Serial.write(BTSerial.read());

  // 시리얼 모니터에 입력값이 있을 때 블루투스 모듈에 입력값 전달
  if (Serial.available())
    BTSerial.write(Serial.read());
}
