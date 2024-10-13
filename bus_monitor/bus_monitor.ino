const char ADDR[] = {22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52};
const char DATA[] = {39, 41, 43, 45, 47, 49, 51, 53};
#define CLK 2
#define RW 3
#define IRQB 4

#define BAUD_RATE 57600

void init_bus(char* bus, int size, int mode) {
    for (int n = 0; n < size; n += 1) {
        pinMode(bus[n], mode);
    }
}

void setup() {
    init_bus(ADDR, 16, INPUT);
    init_bus(DATA, 8, INPUT);

    pinMode(CLK, INPUT);
    pinMode(RW, INPUT);
    pinMode(IRQB, INPUT);

    attachInterrupt(digitalPinToInterrupt(CLK), onClock, RISING);

    Serial.begin(BAUD_RATE);
}

unsigned int read_and_print_binary(char* pins, int size) {
    unsigned int value = 0;
    for (int n = 0; n < size; n += 1) {
       int bit = digitalRead(pins[n]) ? 1 : 0;
       Serial.print(bit);
       value = (value << 1) + bit;
    }
    return value;
}

void onClock() {
    unsigned int address = read_and_print_binary(ADDR, 16);
    Serial.print("   ");
    unsigned int data = read_and_print_binary(DATA, 8);

    char output[15];
    sprintf(
      output,
      "   %04x  %c %c %02x",
      address,
      digitalRead(RW) ? 'r' : 'W',
      digitalRead(IRQB) ? ' ' : 'I',
      data
    );
    Serial.println(output);
}

void loop() {
}
