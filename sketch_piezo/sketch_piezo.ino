/*
 * 피에조(Piezo) 스피커를 이용해 소리를 내는 예제 코드
 * 
 * 피에조 스피커를 통해 '도레미파솔라시도' 8음계의 소리를 낸다.
 * tone() 함수를 이용해 피에조 스피커의 떨림을 제어하여 음계에 맞는 소리를 낸다.
 * 더 많은 정보는 토이 메이커스 http://cafe.naver.com/toymakers
 * 
 * 2017년 1월 19일 수정됨 by 율리안(Yulian)
 * 
 */

int PIN_PIEZO = 7;  // 피에조 스피커의 변수 선언

int melody[] = {  262,  // 도, 주파수: 262Hz
                  294,  // 레, 294Hz
                  330,  // 미, 330Hz
                  349,  // 파, 349Hz
                  392,  // 솔, 392Hz
                  440,  // 라, 440Hz
                  494,  // 시, 494Hz
                  523   // 도, 523Hz
};

void setup() {
  for (int i=0; i<8; i++) {   // for 반복문을 통해 melody 배열에 있는 주파수를 한번씩 호출
    tone(7, melody[i], 500);  // 7번 핀에 0.5초 동안 특정 주파수의 소리가 발생하도록 전압을 인가함
    delay(1000);              // 1초간 지연
  }
}

void loop() {
  
}

