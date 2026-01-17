#include <LiquidCrystal_I2C.h>
#include <Wire.h> 

LiquidCrystal_I2C lcd(0x27, 20, 4);

unsigned long tempoAnterior = 0;
const long umSegundo = 1000; 

byte horas = 0;
byte minutos = 0;
byte segundos = 0;

bool emPausa = false;

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();
  
  lcd.setCursor(2, 0); 
  lcd.print("Bem vindo ao"); 
  lcd.setCursor(2, 1); 
  lcd.print("Pomodoro Timer!");

  delay(2000); 
  lcd.clear();
}

void loop() {
  unsigned long tempoAtual = millis();

  if(tempoAtual - tempoAnterior >= umSegundo){
    tempoAnterior = tempoAtual;
    segundos++; 

  
    if(segundos >= 60){
      segundos = 0;
      minutos++; 
    }

    if(minutos >= 60){
      minutos = 0;
      horas++;
    }
    
    // Transição Foco <-> Pausa
    
      if(emPausa == false && segundos == 30){ 
      emPausa = true; 
      minutos = 0;
      segundos = 0;
      
    }
    
  
    else if (emPausa == true && segundos == 30) {
       emPausa = false; 
       minutos = 0;
       segundos = 0;
       
    }
    

    imprimirHorario(); 
  } 
}

void imprimirHorario() {
 
  lcd.setCursor(0, 0); 
  
  if (emPausa == false) {
  
    lcd.print("   FOCUS TIME!    "); 
  } else {
    lcd.print("   REST TIME!     ");
  }

 
  lcd.setCursor(6, 2); 

  if(horas < 10) lcd.print("0");
  lcd.print(horas);
  lcd.print(":");

  if(minutos < 10) lcd.print("0");
  lcd.print(minutos);
  lcd.print(":");

  if(segundos < 10) lcd.print("0"); 
  lcd.print(segundos);
}