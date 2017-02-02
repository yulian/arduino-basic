
/*
 * LCD 모듈을 이용해 문자를 출력하는 예제 코드
 * 
 * 1602(16문자, 2줄) LCD 모듈을 이용해 "Hello World!!!"를 출력한다.
 * LED 모듈와 아두이노가 연결되는 회로구성을 이해하고 문자를 출력해보자.
 * 더 많은 정보는 토이 메이커스 http://cafe.naver.com/toymakers
 * 
 * 2017년 2월 2일 수정됨 by 율리안(Yulian)
 * 
 */

// LCD 제어를 쉽게할 수 있는 라이브러리 추가
#include <LiquidCrystal.h>

// 아두이노의 핀과 LCD핀 연결 (RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(9, 11, 4, 5, 6, 7);

void setup() {
  lcd.begin(16, 2);       // LCD 모듈 설정 (한 줄의 문자 수, 줄 수)
}

void loop() {
  lcd.clear();            // LCD 모듈 초기화 (커서는 첫 줄 맨 앞으로 이동)
  lcd.print("Hello");     // 첫 줄에 "Hello" 문자 출력
  
  lcd.setCursor(0, 1);    // 커서를 두 번째 줄로 이동
  lcd.print("World!!!");  // 두 번째 줄에 "World!!!" 문자 출력
  
  delay(1000);            // 깜빡임을 최소화하기 위한 반복 시간 지연
}
