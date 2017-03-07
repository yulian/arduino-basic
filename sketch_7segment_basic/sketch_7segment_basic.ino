/*
 * 7세그먼트(Segment)를 이용해 0~9까지 숫자를 출력하는 예제 코드
 * 
 * 7세그먼트의 원리를 이해하고, 아두이노 출력핀을 이용해 7세그먼트의 LED를 제어한다
 * LED를 제어하여 0부터 9까지 숫자를 출력하는 연습을 해보자.
 * 더 많은 정보는 토이 메이커스 http://cafe.naver.com/toymakers
 * 
 * 2017년 3월 7일 수정됨 by 율리안(Yulian)
 * 
 */

// 출력핀 초기화 (회로 구성에 따라 변경될 수 있음)
int a = 6;  // 디지털 6번 핀과 7세그먼트의 a핀이 연결되로록 회로 구성
int b = 7;  // 디지털 7번 핀과 7세그먼트의 b핀이 연결되로록 회로 구성
int c = 8;  // 디지털 8번 핀과 7세그먼트의 c핀이 연결되로록 회로 구성
int d = 5;  // 디지털 5번 핀과 7세그먼트의 d핀이 연결되로록 회로 구성
int e = 4;  // 디지털 4번 핀과 7세그먼트의 e핀이 연결되로록 회로 구성
int f = 3;  // 디지털 3번 핀과 7세그먼트의 f핀이 연결되로록 회로 구성
int g = 2;  // 디지털 2번 핀과 7세그먼트의 g핀이 연결되로록 회로 구성

// 숫자를 입력하여 7세그먼트에 해당 숫자를 출력하는 함수
void displayNumber(int number) {
  if(number == 0) {       // a, b, c, d, e, f 출력핀에 LED가 켜지도록 설정
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
  }
  else if(number == 1) {  // b, c 출력핀에 LED가 켜지도록 설정
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  }
  else if(number == 2) {  // a, b, d, e, g 출력핀에 LED가 켜지도록 설정
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
  }
  else if(number == 3) {  // a, b, c, d, g 출력핀에 LED가 켜지도록 설정
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
  }
  else if(number == 4) {  // b, c, f, g 출력핀에 LED가 켜지도록 설정
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  }
  else if(number == 5) {  // a, c, d, f, g 출력핀에 LED가 켜지도록 설정
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  }
  else if(number == 6) {  // a, c, d, e, f, g 출력핀에 LED가 켜지도록 설정
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  }
  else if(number == 7) {  // a, b, c 출력핀에 LED가 켜지도록 설정
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  }
  else if(number == 8) {  // a, b, c, d, e, f, g 출력핀에 LED가 켜지도록 설정
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  }
  else if(number == 9) {  // a, b, c, d, f, g 출력핀에 LED가 켜지도록 설정
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  }
  else {
    // 예외 처리
  }
}


void setup() {
  // 아두이노 2번 ~ 9번 핀까지 출력으로 설정
  for (int i=2; i<9; i++)
    pinMode(i, OUTPUT);
}

void loop() {
  // 숫자 0부터 9번까지 출력되도록 displayNumber함수 호출
  for (int i=0; i<10; i++) {
    displayNumber(i);
    delay(1000);  // 1초 지연시간으로 0~9까지 출력을 확인할 수 있음
  }
}
