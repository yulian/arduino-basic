/*
 * 온습도 센서인 DHT-22를 이용해 시리얼 모니터로 현재 온습도를 출력하는 예제 코드
 * 
 * 온습도 센서(DHT-22)의 동작 원리를 이해하고, 시리얼 모니터로 현재 온습도를 출력해보자.
 * 온도는 섭씨 -40 ~ 100도의 범위까지 출력이 가능하며,
 * 습도는 0 ~ 100%의 범위까지 출력이 가능하다.
 * 더 많은 정보는 토이 메이커스 http://cafe.naver.com/toymakers
 * 
 * 2017년 8월 18일 수정됨 by 메이커멘토
 * 
 */

#include <DHT.h>        // 온습도 센서 라이브러리 참고를 위한 헤더파일 선언

#define DHTPIN    8       // 아두이노의 8번 핀에 연결된 온습도 센서와 연결
#define DHTTYPE   DHT22   // DHT-22 센서의 유형으로 선택

DHT dht(DHTPIN, DHTTYPE); // DHT라이브러리를 통해 핀과 타입을 설정

void setup() {
  Serial.begin(9600);   // 시리얼모니터에 출력을 위한 보어레이트 설정
  dht.begin();          // 온습도센서 초기화
}

void loop() {

  float temperature = dht.readTemperature();  // 온도 측정
  float humidity = dht.readHumidity();        // 습도 측정

  // 시리얼 모니터에 온도 출력
  Serial.print("Temperature: ");
  Serial.print(temperature);

  // 시리얼 모니터에 습도 출력
  Serial.print(", Humidity: ");
  Serial.println(humidity);

  // 안정적인 온습도 측정과 출력을 위한 지연시간
  delay(1000);
}
