/*
 * 초음파(Ultrasonic) 센서를 이용해 거리를 측정하는 예제 코드 (초음파 센서의 리드선이 3개인 경우)
 * 
 * 초음파 센서를 이용해 사물과 초음파 센서간의 거리를 측정한다.
 * 측정된 거리에 따라 LED를 켜고, 끄거나 부저를 울릴 수 있다.
 * 더 많은 정보는 토이 메이커스 http://cafe.naver.com/toymakers
 * 
 * 2017년 1월 31일 수정됨 by 율리안(Yulian)
 * 
 */

int PIN_ULTRASONIC_SIG = 3;   // 초음파 센서 SIG 핀 초기화

int PIN_LED = 8;  // LED 핀 초기화

void setup() {
  Serial.begin(9600);   // 시리얼 통신 초기화 (거리를 출력하기 위한 목적)
}

void loop() {

  pinMode(PIN_ULTRASONIC_SIG, OUTPUT);    // 신호선을 출력 모드로 선언
  digitalWrite(PIN_ULTRASONIC_SIG, LOW);  // 신호선에 전압을 0V로 하여 동작하지 않게 함
  delayMicroseconds(2);                   // 송출 신호와 수신 신호 사이에 일정시간 지연
  digitalWrite(PIN_ULTRASONIC_SIG, HIGH); // 신호선에 전압을 가하여 초음파를 송출함
  delayMicroseconds(5);                   // 5 마이크로초(0.005 밀리초) 동안 초음파를 송출함
  digitalWrite(PIN_ULTRASONIC_SIG, LOW);  // 초음파 송출 정지


  pinMode(PIN_ULTRASONIC_SIG, INPUT);     // 신호선을 입력 모드로 전환

  // 신호선의 값이 HIGH가 되는 순간의 시간 측정
  // 0 또는 마이크로초(백만분의 1초)가 pulseIn() 함수의 반환 값으로 전달됨
  long duration = pulseIn(PIN_ULTRASONIC_SIG, HIGH);
  
  // HC-SR04 초음파 센서 모듈의 데이터시트를 확인 (초음파 센서에 따라 스펙이 다를 수 있으므로 반드시 데이터시트 확인 필요)
  // 공식: 마이크로초(uS) / 58 = 센티미터(centimeters) 라는 것을 알 수 있음
  long cm = duration / 58;

  // if 조건문을 이용해 15cm 내에 사물이 있는 경우 LED를 켜고, 밖에 있는 경우 LED를 끈다.
  if (cm < 15) {
    digitalWrite(PIN_LED, HIGH);
  }
  else {
    digitalWrite(PIN_LED, LOW);
  }

  // 시리얼로 거리를 출력한다. 예) 15cm
  Serial.print(cm);
  Serial.println("cm");

  // 일정시간 지연
  delay(100);
}

