const byte NUMBERS[10][8] =
{
  { 1, 1, 1, 1, 1, 1, 0, 0 }, // 0
  { 0, 1, 1, 0, 0, 0, 0, 0 }, // 1
  { 1, 1, 0, 1, 1, 0, 1, 0 }, // 2
  { 1, 1, 1, 1, 0, 0, 1, 0 }, // 3
  { 0, 1, 1, 0, 0, 1, 1, 0 }, // 4
  { 1, 0, 1, 1, 0, 1, 1, 0 }, // 5
  { 1, 0, 1, 1, 1, 1, 1, 0 }, // 6
  { 1, 1, 1, 0, 0, 0, 0, 0 }, // 7
  { 1, 1, 1, 1, 1, 1, 1, 0 }, // 8
  { 1, 1, 1, 0, 0, 1, 1, 0 } // 9
};

int writeNumber(int value) {
  for (int i = 0; i < 8; i++)
    digitalWrite(i, NUMBERS[value][i]);
}

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i< 9; i++)
    pinMode(i, OUTPUT);
}

void loop() {
  for (int i = 0; i < 10; i++) {
    writeNumber(i);
    delay(1000);
  }
}
