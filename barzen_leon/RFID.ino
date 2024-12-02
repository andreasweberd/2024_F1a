// RFID-Bibiothek hinzufügen
#include "MFRC522.h"

// Anschlüsse definieren
#define SDA 53
#define RST 5

// RFID-Empfänger benennen, Pins zuordnen
MFRC522 mfrc522(SDA, RST);

void setup()
{
  Serial.begin(9600);
  SPI.begin();

  // Initialisierung des RFID-Empfängers
  mfrc522.PCD_Init();
}

void loop()
{
  String WertDEZ;

  // Wenn keine Karte in Reichweite ist ..
  if (!mfrc522.PICC_IsNewCardPresent())
  {
    // .. wird die Abfrage wiederholt.
    return;
  }

  // Wenn kein RFID-Sender ausgewählt wurde ..
  if (!mfrc522.PICC_ReadCardSerial())
  {
    // .. wird die Abfrage wiederholt.
    return;
  }

  Serial.println("Karte entdeckt!");

  // Dezimal-Wert in Strings schreiben
  for (byte i = 0; i < mfrc522.uid.size; i++)
  {
    // String zusammenbauen
    WertDEZ = WertDEZ + String(mfrc522.uid.uidByte[i], DEC) + " ";
  }

  // Kennung dezimal anzeigen
  Serial.println("Dezimalwert: " + WertDEZ);

  // kurze Pause, damit nur ein Wert gelesen wird
  delay(1000);
}