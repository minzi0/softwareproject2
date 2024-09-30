const int LED_PIN = 7;

void setup() {
  // LED_PIN을 출력 모드로 설정
  pinMode(LED_PIN, OUTPUT);
  
  // 1초 동안 LED 켜기
  digitalWrite(LED_PIN, HIGH);  // LED 켜기
  delay(1000);  // 1초 대기
  
  // 다음 1초 동안 5회 깜빡이기
  for (int i = 0; i < 5; i++) {
    digitalWrite(LED_PIN, LOW);   
    delay(100);                   
    digitalWrite(LED_PIN, HIGH);  
    delay(100);                   
  }
  
  // LED 끄기
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  
  while (true) {

  }
}
