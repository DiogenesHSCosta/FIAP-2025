#define SemaforoVermelho 13
#define SemaforoAmarelo 12
#define SemaforoVerde 11

#define BotaoParada 10
#define PedestreVermelho 8
#define PedestreVerde 9

void setup() {
  for (int pin = 8; pin<=13; pin++){
    pinMode(pin, OUTPUT);
  }
  pinMode(BotaoParada, INPUT);

  int ValorBotao = 0;
}

void loop() {
  while(BotaoParada == 0){
    for(int i=0; i<=2; i++){
      
      if(digitalRead(BotaoParada) == 1){
        ValorBotao = 1;
      }
      
      if(ValorBotao == 1){
        break;
      }

      if(i==0){
        digitalWrite(SemaforoVermelho, HIGH);
        delay(5000);
        digitalWrite(SemaforoVermelho, LOW);
      }
      else if(i==1){
        digitalWrite(SemaforoAmarelo, HIGH);
        delay(2000);
        digitalWrite(SemaforoAmarelo, LOW);
      }
      else{
        digitalWrite(SemaforoVerde, HIGH);
        delay(5000);
        digitalWrite(SemaforoVerde, LOW);
      }
    }
  }
  
}
