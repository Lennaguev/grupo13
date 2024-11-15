#include <HX711.h>
#include "BluetoothSerial.h"

// Definir los pines de cada HX711
const int LOADCELL_DOUT_1 = 15; // Pin DOUT para el HX711 1
const int LOADCELL_SCK_1 = 5;   // Pin SCK para el HX711 1
const int LOADCELL_DOUT_2 = 2;  // Pin DOUT para el HX711 2
const int LOADCELL_SCK_2 = 18;  // Pin SCK para el HX711 2
const int LOADCELL_DOUT_3 = 4;  // Pin DOUT para el HX711 3
const int LOADCELL_SCK_3 = 19;  // Pin SCK para el HX711 3
const int LOADCELL_DOUT_4 = 16; // Pin DOUT para el HX711 4
const int LOADCELL_SCK_4 = 21;  // Pin SCK para el HX711 4

// Crear instancias para cada HX711
HX711 scale1;
HX711 scale2;
HX711 scale3;
HX711 scale4;

// Configuración de Bluetooth
String device_name = "Medidor-Presion-PrototipoESP32-BT";
BluetoothSerial SerialBT;

void setup() {
  Serial.begin(115200);

  // Iniciar las balanzas (HX711)
  scale1.begin(LOADCELL_DOUT_1, LOADCELL_SCK_1);
  scale2.begin(LOADCELL_DOUT_2, LOADCELL_SCK_2);
  scale3.begin(LOADCELL_DOUT_3, LOADCELL_SCK_3);
  scale4.begin(LOADCELL_DOUT_4, LOADCELL_SCK_4);
  Serial.println("Iniciando lectura de los HX711...");

  // Iniciar Bluetooth
  SerialBT.begin(device_name);
  Serial.printf("El dispositivo de nombre \"%s\" esta disponible.\nAhora puedes emparejarlo con Bluetooth!\n", device_name.c_str());
  SerialBT.deleteAllBondedDevices(); // Borra todos los dispositivos emparejados
}


void loop() {
  // Lecturas de los HX711
  if (scale1.is_ready()) {
    long reading1 = scale1.read();
    Serial.print("Lectura HX711 1: ");
    Serial.println(reading1);
    SerialBT.print("Lectura HX711 1: ");
    SerialBT.println(reading1);
  } else {
    Serial.println("Esperando HX711 1...");
  }

  if (scale2.is_ready()) {
    long reading2 = scale2.read();
    Serial.print("Lectura HX711 2: ");
    Serial.println(reading2);
    SerialBT.print("Lectura HX711 2: ");
    SerialBT.println(reading2);
  } else {
    Serial.println("Esperando HX711 2...");
  }

  if (scale3.is_ready()) {
    long reading3 = scale3.read();
    Serial.print("Lectura HX711 3: ");
    Serial.println(reading3);
    SerialBT.print("Lectura HX711 3: ");
    SerialBT.println(reading3);
  } else {
    Serial.println("Esperando HX711 3...");
  }

  if (scale4.is_ready()) {
    long reading4 = scale4.read();
    Serial.print("Lectura HX711 4: ");
    Serial.println(reading4);
    SerialBT.print("Lectura HX711 4: ");
    SerialBT.println(reading4);
  } else {
    Serial.println("Esperando HX711 4...");
  }

  // Comunicación bidireccional con Bluetooth
  if (Serial.available()) {
    SerialBT.write(Serial.read());
  }
  if (SerialBT.available()) {
    Serial.write(SerialBT.read());
  }

  delay(1000); // Espera de 1 segundo entre lecturas
}
