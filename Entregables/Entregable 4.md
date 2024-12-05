###     **1.- Caja Negra**
![image](https://github.com/user-attachments/assets/af3b0512-f9fa-4934-8465-14d2c3ffa046)

#### **Entradas:**

1. **Fuente de energía:** Mantiene activos los sensores, el sistema de procesamiento de señales, y la comunicación con dispositivos externos para el almacenamiento o transmisión de datos.  
2. **Presión en el muñón:** Datos obtenidos de los sensores  
3. **Forma y tamaño del muñón:** Influye directamente en la distribución de la presión y la forma en que el socket se ajusta al cuerpo del paciente.

#### **Salidas:**

1. **Datos sobre zonas de máxima presión:** Información precisa sobre las áreas específicas del muñón donde se ejerce la mayor presión, representada en forma de gráficos o valores numéricos.  
2. **Información sobre la distribución de fuerzas en situaciones dinámicas:** Datos que muestran cómo cambian las fuerzas en el muñón durante actividades como caminar, correr o subir escaleras.


### **2.- Esquema de Funciones**
![image](https://github.com/user-attachments/assets/f7ee2966-4d72-490f-93eb-d925b83052a6)
* **Operar:** Operar los sensores alimentando enérgicamente los componentes del proyecto  
* **Captura:** Capturar los datos de la muestra (presión, tensión y cambio volumétrico) mediante los sensores  
* **Almacenar:** Almacenar los datos capturados para que pueda ser utilizado posteriormente por el médico  
* **Procesar:** Procesar los datos e información obtenida.  
* **Avisar:** Avisar cuando se excedan los rangos de presión y tensión preestablecidos.  
* **Transmitir:** Hacer pasar el cambio de datos almacenados a través del tiempo por el circuito hasta el punto de visualización.

### **3.- Matriz Morfológica**  
![image](https://github.com/user-attachments/assets/b472b646-7361-49b4-860c-e319770df2b7)

### **4.- Tabla de valoración**

|  |  | Conceptos de solución |  |  |
| :---- | :---- | :---- | :---- | :---- |
| **Número** | **criterios técnicos y económicos** | **Opción 1** | **Opción 2** | **Opcion 3** |
| **1** | **Facilidad de uso** | **4** | **1** | **2** |
| **2** | **Seguridad** | **4** | **3** | **3** |
| **3** | **Costo de tecnología** | **4** | **2** | **2** |
| **4** | **Precisión del dispositivo** | **3** | **3** | **4** |
| **5** | **Tamaño** | **4** | **4** | **4** |
| **6** | **Ligereza** | **4** | **3** | **2** |
| **7** | **Nivel de innovación** | **4** | **2** | **3** |
| **Suma total** |  | **27** | **18** | **20** |

### **5.- Conclusión:**

La opción 1 se destaca entre las tres propuestas debido a que obtuvo la mayor puntuación en la tabla de valoración, lo que refleja su superioridad en varios aspectos clave. Su diseño e implementación son intuitivos y amigables para los usuarios, lo que facilita su uso. Además, sobresale en términos de seguridad, haciéndola más confiable y reduciendo los riesgos potenciales para los usuarios. Otro aspecto importante es su alta calificación en cuanto a tamaño y ligereza, lo que la convierte en una opción altamente portátil y cómoda para el uso prolongado, lo cual es fundamental en aplicaciones donde la movilidad es crucial. Aunque la opción 1 no es la más precisa de todas las alternativas presentadas, los datos que proporciona son lo suficientemente confiables para cumplir con los requisitos del proyecto. 

### **6.- Bocetos:**

#### Boceto 1:
###### TÍTULO DE PROPUESTA: CALCETÍN SEMI-FLEXIBLE DE SILICONA PARA MONITOREO DE PUNTOS DE PRESIÓN NOTIFICADO DE MANERA INALÁMBRICA
![Bocetos Propuesta 1 FUNBIO](https://github.com/user-attachments/assets/bb474d21-3b3a-488e-a53e-6f8e6c9ef980)

#### Boceto 2:
![image](https://github.com/user-attachments/assets/a3fc6d46-87c9-4c19-848f-1e1658c223d5)

LISTA DE DESPIECE:
| Pieza | Nombre | Material |
| :---- | :---- | :---- |
| 1 | 16/8 galgas extensiométricas |
| 2 | Batería |
| 3 | Interruptor |
| 4 | 1 Arduino Nano / ESP32 |
| 5 | Resistencias |
| 6 | Protoboard |
| 7 | Recubrimiento general | Silicona |
| 8 | Cajita para Microcontrolador Energizado | PLA |
| 9* | Módulo Bluetooth HC05 |
|10* | Pantalla LCD 4x20 |
|11* | Módulo I2C |
|12* | 4 Módulos HX711 |

(*) -> Por definir si será requerido al final (más parte B)


##### DESCRIPCIÓN DE FUNCIONAMIENTO:

Esta superficie se encarga de medir presión en determinados puntos principales en el muñón, colocando esta al interior del socket. La información que captan sus sensores es enviada vía Bluetooth a una pantalla, la cual puede ser un celular, con lo que se puede ver los puntos que presentan presiones superiores o inferiores a lo normal. El más peligroso será alertado con un mensaje de "Cuidado" o "!!!".
