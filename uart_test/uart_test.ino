void setup() {
  Serial.begin(115200);
  Serial2.begin(9600, SERIAL_8N1, 16, 17);
  Serial.println("UART Loopback Test Started");
}

void loop() {
  Serial2.println("UART_TEST");
  delay(500);
}
