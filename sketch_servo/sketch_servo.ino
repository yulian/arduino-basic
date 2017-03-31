/*
 * 서보 모터(Servo Motor)를 이용해 모터를 제어하는 예제 코드
 * 
 * 서보 모터의 동작 원리를 이해하고, 아두이노 출력핀을 이용해 서보 모터를 제어한다
 * 0도에서 180도 까지 움직이는 서보 모터를 제어해보자
 * 더 많은 정보는 토이 메이커스 http://cafe.naver.com/toymakers
 * 
 * 2017년 3월 31일 수정됨 by 율리안(Yulian)
 * 
 */

#include <Servo.h>  // 서보 라이브러리를 참고하기 위해 헤더파일 선언

Servo servo;        // 서보 라이브러리를 이용해 서보 모터 제어 변수 선언

int servo_pin = 9;  // 서보 모터의 신호선과 연결된 핀 번호

void setup() {
  // 서모 모터의 신호 선과 아두이노 보드의 핀 연결 설정
  servo.attach(servo_pin);
}

void loop() {
  // 0도 부터 180도 까지 서보 모터 움직임 제어
  for (int angle=0; angle<180; angle++) {
    servo.write(angle);
    delay(20);  // 신호전달 후 서보 모터가 정상적으로 움직이기 위한 지연시간
  }
}
