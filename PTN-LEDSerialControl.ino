 //  ___ _____ _  _  _____   ___   _  __
 // | _ \_   _| \| |/ _ \ \ / /_\ | |/ /
 // |  _/ | | | .` | (_) \ V / _ \| ' < 
 // |_|   |_| |_|\_|\___/ \_/_/ \_\_|\_\.
 // https://www.youtube.com/@ptnovak
 // https://twitter.com/PTNovakk
 // https://github.com/ptnovakk


//  tässä määritetään asetukset, yhteydet ja vakiot
void setup()  {

  pinMode(13, OUTPUT);      //  pinni #13 asetetaan lähdöksi
  Serial.begin(9600);       //  väyläyhteys käynnistetään, 9600 baudia
  while (!Serial);          //  kun väyläyhteys on avattu, suoritetaan seuraava komento:
  Serial.println("Kirjoita numero 1 sytyttääksesi LEDin, tai numero 0 sammuttaaksesi sen.");      //  seuraava viesti kirjoitetaan väylämonitorille

}

//  ohjelma toistaa seuraavaa kiertoa, kunnes se keskeytetään
void loop() {

  if (Serial.available()) {     //  jos väylällä on dataa, niin...

    int state = Serial.parseInt();    //  muuttuja 'state' on yhtä kuin väylän viimeisin kokonaisluku

      if (state == 1) {     //  jos muuttuja on yhtä kuin '1', niin...

      digitalWrite(13, HIGH);     //  pinnin #13 tila muutetaan korkeaksi
      Serial.println("Komento vastaanotettu, LED kytketty PÄÄLLE.");      //  seuraava viesti kirjoitetaan väylämonitorille

    }

      if (state == 0) {     //  jos muuttuja on yhtä kuin '0', niin...
    
      digitalWrite(13, LOW);      //  pinnin #13 tila muutetaan matalaksi
      Serial.println("Komento vastaanotettu, LED kytketty POIS PÄÄLTÄ.");     //  seuraava viesti kirjoitetaan väylämonitorille

    }

  }

}