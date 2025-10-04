/*
Titel     : Arduino Template
--------------------------------------------------------------------------------------
Funktion  : kurze Funktionsbeschreibung
Projekt   :
Hardwareversion: V1.0
--------------------------------------------------------------------------------------
Prozessor : ARDUINO Nano Board
Takt      : 16MHz extern 
Datum     : 11.05.2025
Version   : 1.0
Autor     : c 2025 by Peter Lampe
*/
//------------------------------------- Libraries -------------------------------------
#include <Arduino.h>
#include <OneWire.h>

//--------------------------------------- Defines -------------------------------------
#if defined(ARDUINO) && ARDUINO >= 100
#define printByte(args)  write(args);
#else
#define printByte(args)  print(args,BYTE);
#endif

//#define ONSWITCH 10                                     //Input/Pullup: Taster EIN, links


//---------------------------------- globale Variablen --------------------------------
//bool Frost=false;                                       //Flag zur Frost-Erfassung (0=kein Frost, 1=Frost)
//uint8_t OnLevel=LV4;                                    //Einschaltlevel (für Sommer initialisiert)
//------------------------------------- Prototypes ------------------------------------
//void get_Temp (void);                       //Temperatur auslesen, darstellen und Flag setzen

//--------------------------------------- Setup ---------------------------------------
void setup(void)
{
  Serial.begin(115200);                     //serial port initialisieren (nur für Debugzwecke)
}

//------------------------------------- Main loop -------------------------------------

void loop(void)
{                                               //immer wird

}
//while(1);//Debugstop                        //Debugstop mit Terminalausgabe

//------------------------------------- Functions -------------------------------------

