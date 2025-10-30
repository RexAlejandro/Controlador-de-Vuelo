INICIO

    Definir pin TRIG = 10
    Definir pin ECHO = 11
    Definir servomotor conectado al pin 12

    Configurar TRIG como SALIDA
    Configurar ECHO como ENTRADA
    Iniciar comunicación serial a 9600 baudios
    Conectar servomotor al pin 12

    MIENTRAS el programa esté en ejecución HACER

        // --- Barrido de izquierda a derecha ---
        PARA ángulo DESDE 15 HASTA 165 CON incremento de 1 HACER
            Mover servomotor al ángulo actual
            Esperar 30 milisegundos
            distancia ← CalcularDistancia()
            Enviar por puerto serial (ángulo, distancia)
        FIN PARA

        // --- Barrido de derecha a izquierda ---
        PARA ángulo DESDE 165 HASTA 15 CON decremento de 1 HACER
            Mover servomotor al ángulo actual
            Esperar 30 milisegundos
            distancia ← CalcularDistancia()
            Enviar por puerto serial (ángulo, distancia)
        FIN PARA

    FIN MIENTRAS


FUNCIÓN CalcularDistancia():
    Poner TRIG en BAJO
    Esperar 2 microsegundos
    Poner TRIG en ALTO
    Esperar 10 microsegundos
    Poner TRIG en BAJO

    duration ← medir el tiempo que ECHO permanece en ALTO (en microsegundos)
    distancia ← (duration * 0.034) / 2     // 0.034 cm/μs = velocidad del sonido

    RETORNAR distancia
FIN FUNCIÓN

FIN
