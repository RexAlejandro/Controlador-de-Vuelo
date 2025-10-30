# 📡 Radar Ultrasónico con Arduino

Este proyecto implementa un sistema de radar mediante un sensor ultrasónico (**HC-SR04**) y un **servomotor** controlados por un **Arduino UNO**.  
Permite detectar objetos cercanos mediante pulsos ultrasónicos, simulando un sistema de control aéreo o de proximidad que puede adaptarse tanto a **drones** como a **vehículos terrestres**.

---

## 📋 Requisitos e Instalación

### 🧠 Software
- [Arduino IDE](https://www.arduino.cc/en/software)
- [Processing (visualización)](https://processing.org/download)
- [Git (para clonar o contribuir)](https://git-scm.com/)
- 📚 Librería **Servo** (incluida en el IDE de Arduino)

### ⚙️ Hardware
- 🔌 Arduino UNO (o compatible)
- 📡 Sensor ultrasónico **HC-SR04**
- ⚙️ Servomotor **SG90**
- 🔋 Fuente de alimentación de **5V** o batería de **9V**
- 🧵 Cables de conexión y **protoboard**

## 🚀 Cómo Usarlo
### 1️⃣ Clona el repositorio
```bash
git clone https://github.com/RexAlejandro/Controlador-de-Vuelo
```
### 2️⃣ Abre el archivo del radar en Arduino IDE.

# 📡 Radar Ultrasónico con Arduino

## 3️⃣ Conexión de Componentes

Conecta los componentes según el siguiente mapeo de pines:

- **HC-SR04 (Trig)** → Pin 10  
- **HC-SR04 (Echo)** → Pin 11  
- **Servo (Señal)** → Pin 12  
- **VCC** → 5V / **GND** → GND  

## 4️⃣ Subida del Código

Sube el código al Arduino (verifica que el puerto COM sea el correcto).

## 5️⃣ Ejecución de la Interfaz

Ejecuta el programa en **Processing** (opcional) para ver la interfaz de radar.

### Ejemplo de salida
<code> 15,120. 16,118. 17,115. </code> 

> Cada línea muestra el **ángulo** y la **distancia detectada**.


---

## 🧠 Funcionamiento Interno

### Sensor HC-SR04
- Emite ondas ultrasónicas mediante el pin **TRIG (10)** y recibe el eco en **ECHO (11)**.

### Arduino UNO
- Coordina el envío y recepción de señales, calcula distancias y controla el servomotor.

### Servomotor SG90
- Recibe señales **PWM** desde el pin 12 para girar de 15° a 165° y escanear el entorno.

### Monitor Serial / Processing
- Muestra el ángulo actual y la distancia detectada en formato texto o visual.

---

## 🧪 Tests y Simulación

- ✔️ Simulación en [Tinkercad](https://www.tinkercad.com/things/2F2I2L3YdKA/editel?sharecode=eQQQH-Y1JWLQfHgqyFGXcCsHEWa90hwFSyQ8MCwwfc0)  
- ✔️ Archivo base en Proteus incluido para validar conexiones  
- ✔️ Salida en consola serial para comprobar valores de distancia en tiempo real  

---

## 🤝 Cómo Contribuir

1. Realiza un fork del proyecto desde [GitHub](https://github.com/RexAlejandro/Controlador-de-Vuelo)  
2. Crea una nueva rama para tu mejora:  
   <code>git checkout -b feature/nueva-mejora</code>  
3. Guarda tus cambios:  
   <code>git add .</code>  
   <code>git commit -m "feat: descripción de la mejora"</code>  
   <code>git push origin feature/nueva-mejora</code>  
4. Abre un Pull Request detallando tus aportes.

---

## 📜 Créditos

- 👨‍💻 Rene Alejandro Villanueva Moreno  
- 👨‍💻 Aldair Alejandro Beltran Melendez  
- 👨‍💻 Rodolfo Cavazos Almaguer  

🌐 Repositorio oficial: [https://github.com/RexAlejandro/Controlador-de-Vuelo](https://github.com/RexAlejandro/Controlador-de-Vuelo)


