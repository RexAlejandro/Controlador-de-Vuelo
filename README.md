<?xml version="1.0" encoding="UTF-8"?>
<project>
  <name>Radar Ultrasónico con Arduino</name>

  <description>
    Proyecto basado en Arduino UNO que utiliza un sensor ultrasónico HC-SR04 y un servomotor
    para detectar objetos cercanos y simular un sistema de radar o control aéreo.
    El sistema realiza un barrido de 150° mediante el servomotor y mide distancias en cada ángulo.
    Los resultados se muestran en el monitor serial o mediante una interfaz gráfica con Processing.
  </description>

  <requirements>
    <hardware>
      <component>Arduino UNO (o microcontrolador compatible)</component>
      <component>Sensor ultrasónico HC-SR04</component>
      <component>Servomotor SG90</component>
      <component>Batería de 9V o conexión USB</component>
      <component>Cables jumpers</component>
    </hardware>

    <software>
      <tool>Arduino IDE - https://www.arduino.cc/en/software</tool>
      <tool>Processing (para interfaz de radar) - https://processing.org/download</tool>
      <tool>Git (para clonar o contribuir al proyecto) - https://git-scm.com/</tool>
      <library>Servo.h (incluida en el IDE de Arduino)</library>
    </software>
  </requirements>

  <installation>
    <steps>
      <step>1. Clona el repositorio con: 
        <code>git clone https://github.com/RexAlejandro/Controlador-de-Vuelo</code>
      </step>
      <step>2. Abre el archivo <code>Radar.ino</code> en el Arduino IDE.</step>
      <step>3. Conecta la placa Arduino UNO a la computadora.</step>
      <step>4. Selecciona la placa y el puerto correctos en el IDE.</step>
      <step>5. Carga el código al Arduino (clic en “Subir”).</step>
      <step>6. Si usas Processing, copia el código del radar del IDE de Arduino y ejecútalo para visualizar el barrido.</step>
    </steps>
  </installation>

  <usage>
    <commands>
      <command>git add .</command>
      <command>git commit -m "feat: descripción de la mejora"</command>
      <command>git push origin feature/nueva-funcion</command>
    </commands>

    <examples>
      <example>
        <description>Ejemplo de salida por consola:</description>
        <code>45,120.  
46,118.  
47,117.</code>
      </example>
    </examples>

    <notes>
      <note>El servomotor realiza un barrido entre 15° y 165° midiendo la distancia en cada ángulo.</note>
      <note>Los datos se envían por el puerto serial para su visualización.</note>
    </notes>
  </usage>

  <tests>
    <description>
      El sistema puede probarse mediante el IDE de Arduino o en simuladores como Tinkercad y Proteus.
      Los valores de distancia y ángulo se muestran en consola y pueden verificarse visualmente en la interfaz de radar.
    </description>
    <links>
      <link>Tinkercad: https://www.tinkercad.com/things/2F2I2L3YdKA/editel?returnTo=%2Fdashboard%2Fdesigns%2Fcircuits</link>
    </links>
  </tests>

  <structure>
    <folders>
      <folder>/Radar</folder>
      <folder>/docs</folder>
      <folder>/images</folder>
    </folders>
    <files>
      <file>Radar.ino - Código principal del radar ultrasónico</file>
      <file>README.xml - Documento descriptivo del proyecto</file>
      <file>Proteus_Radar.pdsprj - Archivo base de simulación en Proteus</file>
    </files>
  </structure>

  <contribution>
    <repository>https://github.com/RexAlejandro/Controlador-de-Vuelo</repository>
    <instructions>
      <step>1. Realiza un fork del proyecto.</step>
      <step>2. Aplica tus modificaciones o mejoras.</step>
      <step>3. Haz un commit y push a tu rama.</step>
      <step>4. Envía un Pull Request al repositorio original explicando los cambios.</step>
    </instructions>
  </contribution>

  <license>
    <text>
      Este proyecto se distribuye con fines educativos y de investigación.
      Puede ser modificado y compartido libremente, citando la fuente original.
    </text>
  </license>
</project>
