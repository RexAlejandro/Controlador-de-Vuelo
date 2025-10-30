# Controlador-de-Vuelo
# Radar Simulado con Arduino

Este proyecto consiste en la creación de un *radar simulado* utilizando un sensor ultrasónico HC-SR04 y un servo motor, controlados por una placa *Arduino UNO*. El sistema permite detectar objetos y medir distancias mientras el sensor realiza un barrido angular de 0° a 180°, simulando el funcionamiento de un radar real.

## Propósito del Proyecto
El objetivo principal es comprender el funcionamiento básico de un radar y su aplicación en sistemas como los *simuladores de vuelo*, donde la detección de obstáculos y el monitoreo del entorno son fundamentales para la navegación aérea.

## Componentes Utilizados
- Arduino UNO
- Sensor ultrasónico HC-SR04
- Servo motor
- Protoboard
- Cables de conexión
- Software externo para visualización de datos

## Instalación y Montaje
1. Conecta el sensor HC-SR04 al Arduino:
   - VCC → 5V
   - GND → GND
   - Trig → Pin digital 9
   - Echo → Pin digital 10
2. Conecta el servo motor:
   - Señal → Pin digital 11
   - VCC → 5V
   - GND → GND
3. Usa una protoboard para compartir la alimentación entre los componentes.
4. Sube el código al Arduino usando el IDE de Arduino.
5. Ejecuta el software externo para visualizar los datos del radar.

## Funcionamiento Interno
- El Arduino envía un pulso al sensor ultrasónico.
- El sensor devuelve un eco que permite calcular la distancia al objeto.
- El servo gira el sensor de 0° a 180° para escanear el área.
- Los datos de distancia y ángulo se envían al software externo para su visualización.

Este sistema simula el comportamiento de un radar aeronáutico, siendo útil como herramienta educativa en el desarrollo de *simuladores de vuelo*.

## 💻 Ejemplo de Código
cpp
#include <Servo.h>
const int trigPin = 10;
const int echoPin = 11;
long duration;
int distance;
Servo myServo;
void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600);
myServo.attach(12);
}
void loop() {
for(int i=15;i<=165;i++){
myServo.write(i);
delay(30);
distance = calculateDistance();
Serial.print(i);
Serial.print(",");
Serial.print(distance);
Serial.print(".");
}
for(int i=165;i>15;i--){
myServo.write(i);
delay(30);
distance = calculateDistance();
Serial.print(i);
Serial.print(",");
Serial.print(distance);
Serial.print(".");
}
}
int calculateDistance(){
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
return distance;
}


# Diagrama Pictórico
[Montaje del Radar Simulado](Imagen-arduino.png)

# Autor
Rodolfo

## Licencia
Este proyecto es de uso educativo y puede ser modificado y compartido libremente.
