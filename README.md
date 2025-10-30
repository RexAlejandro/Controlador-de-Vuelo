<!-- README.xml - Proyecto Radar Ultrasónico con Arduino -->

<project>
  <title>📡 Radar Ultrasónico con Arduino</title>

  <description>
    Este proyecto implementa un sistema de radar mediante un sensor ultrasónico (HC-SR04) y un servomotor controlados por un microcontrolador Arduino UNO. 
    Permite detectar objetos cercanos mediante pulsos ultrasónicos, simulando un sistema de control aéreo o de proximidad que puede adaptarse tanto a drones como a vehículos terrestres.
  </description>

  <section name="📋 Requisitos e Instalación">
    <software>
      <item>🧠 Arduino IDE → <link>https://www.arduino.cc/en/software</link></item>
      <item>💻 Processing (visualización) → <link>https://processing.org/download</link></item>
      <item>🔧 Git (para clonar o contribuir) → <link>https://git-scm.com/</link></item>
      <item>📚 Librería Servo → Incluida en el IDE de Arduino</item>
    </software>

    <hardware>
      <item>🔌 Arduino UNO (o compatible)</item>
      <item>📡 Sensor ultrasónico HC-SR04</item>
      <item>⚙️ Servomotor SG90</item>
      <item>🔋 Fuente de alimentación de 5V o batería de 9V</item>
      <item>🧵 Cables de conexión y protoboard</item>
    </hardware>
  </section>

  <section name="🚀 Cómo Usarlo">
    <step>1️⃣ Clona el repositorio:
      <code>git clone https://github.com/RexAlejandro/Controlador-de-Vuelo</code>
    </step>

    <step>2️⃣ Abre el archivo del radar en Arduino IDE.</step>
    <step>3️⃣ Conecta los componentes según el mapeo de pines:</step>

    <connections>
      <item>HC-SR04 (Trig) → Pin 10</item>
      <item>HC-SR04 (Echo) → Pin 11</item>
      <item>Servo (Señal) → Pin 12</item>
      <item>VCC → 5V / GND → GND</item>
    </connections>

    <step>4️⃣ Sube el código al Arduino (verifica el puerto COM correcto).</step>
    <step>5️⃣ Ejecuta el programa en Processing (opcional) para ver la interfaz de radar.</step>

    <exampleOutput>
      <code>
        15,120.
        16,118.
        17,115.
      </code>
      <note>Cada línea muestra el ángulo y la distancia detectada.</note>
    </exampleOutput>
  </section>

  <section name="🧩 Estructura del Proyecto">
    <directory>
      <folder name="Controlador-de-Vuelo/">
        <file>Radar.ino - Código principal del radar</file>
        <file>README.xml - Archivo de documentación</file>
        <folder name="docs/">
          <file>Diagrama_Pictorico.png</file>
          <file>Diagrama_Bloques.png</file>
          <file>Diagrama_Esquematico.png</file>
        </folder>
        <folder name="simulaciones/">
          <file>Radar_Proteus.pdsprj - Simulación en Proteus</file>
          <file>Radar_Tinkercad_Link.txt</file>
        </folder>
      </folder>
    </directory>
  </section>

  <section name="🧠 Funcionamiento Interno">
    <architecture>
      <block name="Sensor HC-SR04">
        <description>Emite ondas ultrasónicas mediante el pin TRIG (10) y recibe su eco en el pin ECHO (11).</description>
      </block>

      <block name="Arduino UNO">
        <description>Coordina el envío y recepción de señales, calcula distancias y controla el servomotor.</description>
      </block>

      <block name="Servomotor SG90">
        <description>Recibe señales PWM desde el pin 12 para girar de 15° a 165° y escanear el entorno.</description>
      </block>

      <block name="Monitor Serial / Processing">
        <description>Muestra el ángulo actual y la distancia detectada en formato texto o visual.</description>
      </block>
    </architecture>
  </section>

  <section name="🧪 Tests y Simulación">
    <testOption>✔️ Simulación en <link>https://www.tinkercad.com/things/2F2I2L3YdKA/editel?sharecode=eQQQH-Y1JWLQfHgqyFGXcCsHEWa90hwFSyQ8MCwwfc0</link></testOption>
    <testOption>✔️ Archivo base en Proteus incluido para validar conexiones.</testOption>
    <testOption>✔️ Salida en consola serial para comprobar valores de distancia en tiempo real.</testOption>
  </section>

  <section name="🤝 Cómo Contribuir">
    <steps>
      <item>Realiza un fork del proyecto desde <link>https://github.com/RexAlejandro/Controlador-de-Vuelo</link>.</item>
      <item>Crea una nueva rama para tu mejora: 
        <code>git checkout -b feature/nueva-mejora</code>
      </item>
      <item>Guarda tus cambios:
        <code>git add .</code>
        <code>git commit -m "feat: descripción de la mejora"</code>
        <code>git push origin feature/nueva-mejora</code>
      </item>
      <item>Abre un Pull Request detallando tus aportes.</item>
    </steps>
  </section>

  <section name="📜 Créditos">
    <author>👨‍💻 Rene Alejandro Villanueva Moreno</author>
    <author>👨‍💻 Aldair Alejandro Beltran Melendez</author>
    <author>👨‍💻 Rodolfo Cavazos Almaguer</author>
    <repo>🌐 Repositorio oficial: <link>https://github.com/RexAlejandro/Controlador-de-Vuelo</link></repo>
  </section>
</project>
