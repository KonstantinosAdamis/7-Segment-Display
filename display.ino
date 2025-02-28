// Arduino pins connected to the 7-segment display segments a to g, dp
const int segmentPins[8] = {2, 3, 4, 5, 6, 7, 8, 9};

// Segment patterns for digits 0-9 (0babcdefg)
const byte digitPatterns[10] = {
    0b11111100,  // 0
    0b01100000,  // 1
    0b11011010,  // 2
    0b11110010,  // 3
    0b01100110,  // 4
    0b10110110,  // 5
    0b10111110,  // 6
    0b11100000,  // 7
    0b11111110,  // 8
    0b11110110   // 9
};

void setup() {
    // Set all segment pins as OUTPUT
    for (int i = 0; i < 8; i++) {
        pinMode(segmentPins[i], OUTPUT);
    }
}

void loop() {
    // Loop through numbers 0-9
    for (int number = 0; number < 10; number++) {
        displayDigit(number);
        delay(1000);  // Display the number for 1 second
    }
}

// Function to display a single digit
void displayDigit(int number) {
    byte pattern = digitPatterns[number];

    for (int i = 0; i < 8; i++) {
        // Write HIGH or LOW to each segment based on the pattern
        digitalWrite(segmentPins[i], bitRead(pattern, 7 - i) ? HIGH : LOW);
    }
}
