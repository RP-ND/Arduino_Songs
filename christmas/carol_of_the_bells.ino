int melody[] = { 
698, 659, 698, 587, 440, 698, 659, 698, 587, 440, 698, 659, 698, 587, 440, 698, 659, 698, 587, 440, 698, 659, 698, 587, 440, 698, 659, 698, 587, 440, 698, 659, 698, 587, 440, 698, 659, 698, 587, 440, 698, 659, 698, 587, 440, 698, 659, 698, 587, 440, 698, 659, 698, 587, 440, 698, 659, 698, 587, 440, 698, 880, 784, 698, 880, 587, 698, 0, 147, 175, 220, 175, 147, 175, 698, 880, 784, 698, 880, 587, 698, 0, 147, 175, 233, 175, 147, 175, 698, 880, 784, 698, 880, 587, 698, 0, 147, 175, 247, 175, 147, 175, 698, 880, 784, 698, 880, 587, 698, 0, 147, 175, 233, 116, 147, 175, 87, 116, 147, 110, 87, 698, 880, 1175, 0, 1175, 1175, 1047, 933, 73, 147, 0, 587, 698, 880, 0, 880, 880, 784, 698, 147, 220, 294, 0, 466, 587, 784, 0, 784, 784, 880, 784, 116, 147, 175, 233, 0, 440, 587, 698, 0, 392, 659, 698, 294, 587, 0, 110, 220, 110, 220, 110, 220, 440, 494, 554, 440, 587, 659, 698, 110, 220, 110, 220, 110, 220, 440, 784, 880, 784, 440, 698, 110, 82, 69, 880, 988, 1109, 880, 1175, 1319, 1397, 880, 1568, 1760, 1568, 880, 1397, 698, 659, 698, 587, 0, 392, 466, 587, 392, 466, 587, 392, 466, 587, 698, 659, 698, 587, 0, 349, 466, 587, 349, 466, 587, 349, 466, 587, 698, 659, 698, 587, 0, 330, 466, 587, 330, 466, 587, 330, 466, 587, 698, 659, 698, 587, 0, 311, 466, 587, 311, 466, 587, 311, 466, 587, 698, 659, 698, 587, 0, 294, 349, 440, 294, 349, 440, 294, 349, 440, 698, 659, 698, 587, 0, 294, 349, 466, 294, 349, 466, 294, 349, 466, 698, 659, 698, 587, 0, 294, 349, 494, 294, 349, 494, 294, 349, 494, 698, 659, 698, 587, 0, 294, 349, 466, 233, 294, 349, 175, 233, 294, 587, 698, 880, 1175, 0, 1175, 1175, 1047, 933, 73, 110, 147, 175, 147, 110, 440, 587, 698, 880, 0, 880, 880, 784, 698, 73, 110, 147, 175, 147, 110, 392, 466, 587, 784, 0, 784, 784, 880, 784, 73, 116, 147, 175, 147, 116, 698, 784, 659, 698, 587, 0, 73, 110, 147, 175, 147, 110, 440, 494, 554, 587, 659, 698, 784, 880, 784, 0, 698, 440, 494, 554, 587, 659, 698, 1397, 1319, 1397, 1175, 0, 587, 880, 587, 880, 587, 880, 1397, 1319, 1397, 1175, 0, 523, 880, 523, 880, 523, 880, 1397, 1319, 1397, 1175, 0, 494, 880, 494, 880, 494, 880, 1397, 1319, 1397, 1175, 0, 523, 880, 523, 880, 554, 880, 1397, 1760, 1319, 1397, 1175, 1760, 587, 698, 880, 587, 698, 880, 587, 698, 880, 1397, 1760, 1319, 1397, 1175, 1760, 523, 698, 880, 523, 698, 880, 523, 698, 880, 1397, 1760, 1319, 1397, 1175, 1760, 494, 698, 880, 494, 698, 880, 494, 698, 880, 1397, 1760, 1319, 1397, 1175, 1760, 523, 698, 880, 523, 698, 880, 554, 659, 880, 1175, 880, 587, 880, 1175, 880, 440, 294, 440, 294, 587, 440, 294, 1175, 880, 587, 880, 1175, 880, 440, 294, 440, 294, 587, 440, 294, 1175, 880, 659, 880, 1175, 880, 440, 330, 440, 330, 587, 440, 330, 1175, 880, 698, 880, 1175, 880, 440, 349, 440, 349, 587, 440, 349, 587, 698, 880, 1175, 1175, 1175, 1047, 933, 294, 587, 349, 440, 440, 587, 698, 880, 880, 880, 784, 698, 294, 349, 440, 440, 587, 784, 784, 784, 880, 784, 220, 278, 330, 294, 587, 0, 294, 587, 294, 587, 294, 587, 0, 73, 147, 0, 73, 147, 73, 147, 73, 147, 0, 440, 494, 554, 440, 587, 659, 698, 440, 784, 880, 784, 440, 698, 440, 494, 554, 440, 587, 659, 698, 440, 784, 880, 784, 440, 698, 784, 659, 880, 554, 933, 0, 440, 880, 175, 165, 175, 147, 110, 175, 165, 175, 147, 110, 175, 165, 175, 147, 110, 349, 698, 330, 659, 349, 698, 294, 587, 0, 87, 175, 82, 165, 87, 175, 73, 147, 0, 0 
};
int noteDurations[] = { 
500, 250, 250, 250, 250, 500, 250, 250, 250, 250, 500, 250, 250, 250, 250, 500, 250, 250, 250, 250, 500, 250, 250, 250, 250, 500, 250, 250, 250, 250, 500, 250, 250, 250, 250, 500, 250, 250, 250, 250, 500, 250, 250, 250, 250, 500, 250, 250, 250, 250, 500, 250, 250, 250, 250, 500, 250, 250, 250, 250, 500, 500, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 500, 500, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 500, 500, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 500, 500, 250, 250, 250, 250, 250, 250, 500, 500, 500, 500, 500, 500, 250, 250, 250, 125, 125, 250, 250, 250, 250, 250, 250, 250, 250, 500, 500, 1000, 250, 250, 250, 250, 250, 250, 250, 250, 500, 500, 500, 1000, 250, 250, 250, 250, 250, 250, 250, 250, 500, 500, 500, 500, 1000, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 500, 500, 500, 500, 500, 500, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 500, 500, 500, 500, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 500, 500, 250, 250, 250, 250, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 250, 250, 250, 250, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 250, 250, 250, 250, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 250, 250, 250, 250, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 250, 250, 250, 250, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 250, 250, 250, 250, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 250, 250, 250, 250, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 250, 250, 250, 250, 500, 500, 500, 500, 500, 500, 500, 500, 500, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 500, 250, 250, 250, 250, 250, 250, 500, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 500, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 500, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 500, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 500, 500, 500, 500, 250, 250, 250, 250, 500, 500, 500, 500, 500, 500, 500, 500, 250, 250, 250, 250, 500, 500, 500, 500, 500, 500, 250, 250, 250, 250, 500, 500, 500, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 500, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 500, 250, 250, 250, 250, 250, 250, 500, 500, 500, 250, 250, 250, 250, 500, 250, 250, 250, 250, 500, 250, 250, 250, 250, 500, 500, 250, 250, 250, 250, 250, 250, 250, 500, 500, 250, 250, 250, 250, 250, 250, 250, 0 
};

void setup() {
  
  for (int thisNote = 0; thisNote < sizeof(melody) / sizeof(int); thisNote++)
  {    
    tone(11, melody[thisNote], noteDurations[thisNote] * .7);    
    delay(noteDurations[thisNote]);    
    noTone(11);
  }
}

void loop() {
  // no need to repeat the melody.
}
