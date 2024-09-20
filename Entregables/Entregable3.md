**Problemática**

- **Contexto:**  
  El proceso de amputación de miembros inferiores es un procedimiento quirúrgico irreversible que se lleva a cabo por causas traumáticas (accidentes o lesiones) o no traumáticas (enfermedades como la diabetes o problemas vasculares) \[1\]. A nivel global, las amputaciones de miembros inferiores representan el 65% del total de personas amputadas, de las cuales el 44.6% son de nivel A.K. (por encima de la rodilla) \[2\]. Asimismo se sabe que en países desarrollados, la principal causa de estas amputaciones son las complicaciones asociadas a enfermedades preexistentes, mientras que en países en vía de desarrollo, los accidentes y traumas son los principales factores \[3\]. En el ámbito de la ingeniería biomédica, esta situación adquiere gran relevancia debido a la necesidad de desarrollar soluciones que ayuden a los pacientes a enfrentar desafíos físicos, psicológicos y sociales y a recuperar su movilidad y calidad de vida. Las prótesis avanzadas, el tratamiento postoperatorio, y la rehabilitación integral son áreas clave en las que la ingeniería biomédica desempeña un papel fundamental para mitigar los efectos de la amputación y facilitar la reintegración de los pacientes a su vida cotidiana.  
- **Definición del problema:**  
  El problema específico que se aborda es la ***falta de una adecuada adaptabilidad de las prótesis al muñón en pacientes con amputación a nivel AK F3,*** lo que dificulta la marcha y reduce la eficacia del proceso de rehabilitación. Este problema surge debido a varios factores, como la forma irregular del muñón, la presión inadecuada en áreas sensibles, y el uso de materiales o tecnologías que no permiten un ajuste preciso. La consecuencia directa es una marcha inestable y dolorosa, que limita la movilidad y la independencia del paciente, afectando su bienestar físico y emocional.   
- **Impacto:**   
  El impacto de la falta de adaptabilidad adecuada de las prótesis no solo afecta la movilidad y calidad de vida de los pacientes, sino que también genera mayores costos médicos para el sistema de salud. Una prótesis mal adaptada puede ocasionar diversas complicaciones físicas, tales como **heridas en el muñón,**  **neuromas** y **necrosis** \[2,4\], las cuales suelen requerir tratamientos adicionales, hospitalizaciones prolongadas y, en algunos casos, revisiones quirúrgicas o cambios de prótesis. Estos problemas incrementan la necesidad de atención médica continua, lo que genera una presión significativa sobre los recursos y los costos del sistema de salud. Además, los pacientes con prótesis mal ajustadas pueden sufrir dolor crónico, mayor riesgo de infecciones, y dificultades para realizar actividades cotidianas, lo que afecta gravemente su calidad de vida y su capacidad para lograr una rehabilitación exitosa. A nivel económico, los costos adicionales derivados de los procedimientos médicos repetidos y la necesidad de prótesis nuevas o reajustadas representan un desafío para los sistemas de salud, que deben invertir más recursos en la atención de estos pacientes. Estos costos se ven reflejados en un uso ineficiente de los servicios de rehabilitación y un aumento en las tasas de reingreso hospitalario. Por lo tanto, el desarrollo de prótesis mejor adaptadas y personalizadas no solo mejoraría la calidad de vida de los pacientes, sino que también reduciría los costos asociados a complicaciones postoperatorias y el uso prolongado de los servicios médicos, beneficiando tanto a los pacientes como a los sistemas de salud en general.

**Propuesta de solución:** 

- **Descripción de la solución:**   
- Se plantea el desarrollo de un revestimiento de silicona semi-flexible, en el cual se integrarán galgas extensiométricas con la capacidad de medir de manera precisa los puntos de mayor presión, compresión y tensión ejercidos sobre el muñón. Este revestimiento se colocará antes del encaje protésico, permitiendo obtener un mapa detallado de las fuerzas que actúan sobre las distintas áreas del muñón durante su interacción con el socket.  
- El objetivo principal de esta tecnología es facilitar la identificación de las zonas que requieren ajustes en el diseño del socket, permitiendo reducir significativamente el tiempo de personalización del mismo. Al obtener información precisa y en tiempo real sobre las zonas de alta presión o tensión, será posible adaptar el socket de manera más rápida y efectiva, mejorando la comodidad y reduciendo las posibilidades de lesiones o irritación para el paciente. De esta forma, se optimiza el proceso de diseño del encaje protésico, garantizando que se satisfagan las necesidades individuales del usuario.

- **Características:**  
- Mide la presión ejercida sobre el muñón mientras el usuario realiza sus actividades diarias, lo que permitirá identificar las posiciones y movimientos que generan más variación de presión.  
- A través de los datos recopilados, se podrán identificar las zonas que están sometidas a una presión excesiva, ayudando así a que la personalización del encaje sea precisa.  
    
- **Beneficios:**   
- Al ser solo un revestimiento no está limitado a un tipo de socket en específico, sino que puede ser usado debajo de cualquiera de estos.  
- Además de mejorar la elección del socket adecuado para el usuario en la etapa inicial, en etapas posteriores se puede utilizar para identificar variaciones en el volumen del muñón y así realizar los ajustes necesarios en el socket del usuario.  
    
- **Viabilidad Técnica:**   
    
  **Materiales:**  
- **Silicona:** El material del revestimiento debe ser cómodo, biocompatible y duradero. La silicona es ideal por su elasticidad, capacidad de adaptación al muñón y resistencia al desgaste. Además, debe ser lo suficientemente fina para no interferir con la precisión de los sensores.  
- **Galgas extensiométricas**: Son sensores de alta precisión que detectan cambios en la tensión mecánica del material. Las galgas deben ser miniaturizadas y lo suficientemente sensibles para captar los pequeños cambios que ocurran en las distintas zonas del muñón.  
  **Componentes electrónicos:**  
- **Microcontroladores**: Dispositivos como Arduino o Raspberry Pi para procesar las señales provenientes de las galgas extensiométricas y convertirlas en datos de utilidad.    
- **Baterías o fuentes de energía autónomas**: baterías pequeñas, recargables y de larga duración para no interferir con la comodidad del usuario.  
  **Software de análisis:**  
- **Programa de procesamiento de datos**: El desarrollo de un software especializado es crucial para analizar los datos obtenidos por las galgas. Este software debe generar mapas de presión y tensión

  **Conocimientos necesarios:**

- ### Diseño e integración de galgas extensiométricas en materiales como la silicona, así como la creación de circuitos y sistemas electrónicos capaces de manejar múltiples entradas de sensores. Se controlará el flujo de cargas mediante resistores agrupados según lo que necesite cada parte de circuito.

- Conocimiento de la biomecánica del muñón, para saber dónde colocar los sensores y cómo interpretar las deformaciones detectadas. Es importante comprender cómo el muñón interactúa con el socket y cómo varían las fuerzas en diferentes actividades.  
- Programación y diseño de interfaces para desarrollar el software que procesará los datos. Este punto se desarrollará teniendo en cuenta los conocimientos previos adquiridos en la carrera, como en el curso de Fundamentos de Programación y Diseño Industrial.

  **Coherencia**

- **Contexto del Proyecto:**  
  La propuesta solución elegida en este caso es el revestimiento de silicona con galgas extensiométricas que midan los puntos de presión, compresión y tensión en el muñón. Consideramos que esta propuesta es necesaria en este caso debido a que el principal problema que identificamos entre amputados que logramos entrevistar; Fue que comúnmente cuando se les daba la primera prótesis era muy común que esta no les quedará del todo bien por aumento de peso, diferente ajuste, entre otras. Lo cual conllevaba a un rediseño del socket.  
  Lo que busca nuestra solución es hacer el proceso de la prueba del socket menos tedioso y  más cómodo para el paciente; Ya que este revestimiento formado por galgas extensiométricas que iría antes de poner el socket mediría como se deforma el muñón en el tiempo, en la primera etapa de creación del socket, dando estos resultados al médico para que pueda reducir el tiempo de prueba del socket con los resultados obtenidos.  
  La manera en la que se integra al entorno general de ingeniería biomédica es porque se usarán biomateriales como la silicona el cual es un polímero que se usa en distintos instrumentos biomédicos gracias a su característica elasticidad. Por otro lado, para medir las presiones y tensiones se utilizaran biosensores y las galgas también medirán el volumen de todo el muñón. El campo de ingeniería biomédica genera este tipo de soluciones que mejoran el proceso ya existente en este caso de prueba de socket con una herramienta biomédica hecha a partir de biomateriales que simplifique y agilice este proceso.  
    
- **Objetivos del Proyecto:**   
  El *objetivo general* de la propuesta de solución es simplificar el proceso de prueba del socket para que se realicen las menores pruebas posibles y el paciente pueda usar su socket y que este se ajuste bien.  
  Mientras que los *objetivos específicos* son que mientras este revestimiento conformado por galgas mida el tamaño del muñón también pueda dar datos de donde se produce los puntos de presiones y tensiones del muñón. Para que así se identifique donde deberían producirse y donde no. De esta forma estos datos también serán de conocimiento del médico que lo tendrá en consideración durante el desarrollo del socket y para la prevención de posibles heridas por exceso de presión en puntos sensibles.  
     
- **Justificación del Prototipo:**   
  Consideramos que nuestra propuesta de solución es innovadora frente a otras del mercado debido a que este es un revestimiento hecho de silicona que es un material que, además de cómodo, su principal función es que evita el contacto directo del muñón con el socket. A pesar de que ya existen revestimientos para que el muñón no tenga contacto directo con el socket, la gran diferencia radica en que nuestra solución contiene galgas que miden los puntos de presión claves dentro del muñón a lo largo del tiempo para conocer cómo se presenta su sensibilidad. Además, estos sensores de presión distribuidos en el revestimiento ayuda para notificar al médico si se está haciendo presión en algún lugar específico sensible que podría generarle heridas al pacientes, lo que prevendría lo que, en casos normales, implicaría la suspensión del uso de la prótesis temporalmente.  
    
- **Alineación con el Problema:**   
  La problemática específica es la falta de adaptabilidad de la prótesis al muñón y cómo esto puede generar complicaciones. Parte de estas complicaciones son heridas que se pueden ocasionar en el muñón, las cuales generarán costos adicionales al paciente para tratar este problema, y no solo al paciente, sino también al sistema de salud. El prototipo aborda eficazmente la problemática, ya que se caracteriza por medir con precisión la presión que genera el el muñón sobre el socket y en qué zonas se dan presiones excesivas que pueden causar complicaciones. Con los datos proporcionados de las mediciones, se podrán realizar ajustes personalizados rápidamente lo  que facilitará la adaptabilidad de la prótesis al muñón.  
    
    
    
- **Resumen:**  
  El problema identificado radica en la falta de adaptabilidad de las prótesis al muñón en pacientes con amputación por encima de la rodilla (nivel AK F3), lo que afecta negativamente su movilidad y proceso de rehabilitación. La forma irregular del muñón y la distribución desigual de presión y tensión en las áreas sensibles del muñón contribuyen a una marcha inestable y dolorosa, limitando la independencia del paciente.   
  La solución propuesta es desarrollar un revestimiento de un biomaterial semi-flexible que contenga galgas extensiométricas. Estas galgas medirán la presión, tensión y cambio volumétrico del muñón de forma instantánea, lo cual nos proporcionará información precisa y detallada de las diversas presiones que actúan en distintas partes específicas del muñón durante el uso de la prótesis. Esto permitirá ajustar de manera minuciosa y rápida el socket protésico, mejorando la comodidad y reduciendo las posibilidades de lesiones o irritación en el paciente.  
- **Resultados esperados:**   
  Al desarrollar esta solución, se espera obtener:  
- Un proceso más eficiente y preciso de personalización del socket protésico el cual  optimizará el tiempo de rehabilitación de los pacientes.  
- Una reducción en el número de pruebas de ajuste de socket, lo que resultaría en menos incomodidad para el paciente.  
- Mejora en la calidad de vida del paciente, al evitar complicaciones como heridas o necrosis debido a una mala adaptación.  
  Para testear conceptualmente el prototipo, se podría realizar una simulación en la que se evalúe cómo el revestimiento con galgas responde a diferentes niveles de presión y tensión. Estos resultados se utilizarían para ajustar el diseño del socket con la finalidad de que se reduzca significativamente el tiempo de personalización antes de su fabricación final.  
- **Siguientes pasos**  
- Desarrollar un prototipo inicial del revestimiento con los materiales y componentes electrónicos propuestos.  
- Realizar pruebas en condiciones controladas para validar la precisión de las galgas extensiométricas en la medición de la presión y tensión.  
- Reformular el diseño y realizar ajustes basados en los resultados de las pruebas.  
- Desarrollar el software necesario para procesar los datos obtenidos y generar estadísticas de datos útiles para los médicos.


**Referencias Bibliográficas:**  
\[1\]  UC San Diego Health, "Cardiovascular Tests and Procedures," MyHealth, \[En línea\]. Disponible en: [https://myhealth.ucsd.edu/Spanish/TestsProcedures/Cardiovascular/92,P09333](https://myhealth.ucsd.edu/Spanish/TestsProcedures/Cardiovascular/92,P09333).  \[Accedido: 27-Ago-2024\].   
\[2\] Amputee Coalition, "Above Knee Amputation," Amputee Coalition, Aug. 2024\. \[En línea\]. Disponible en: [https://www.amputee-coalition.org/wp-content/uploads/2024/08/Above-Knee-Amputation-English.pdf](https://www.amputee-coalition.org/wp-content/uploads/2024/08/Above-Knee-Amputation-English.pdf).  \[Accedido: 27-Ago-2024\].   
\[3\] T. Kaylor, "INCIDENCE AND COMMON CAUSES OF MAJOR LOWER LIMB AMPUTATION AT A HOSPITAL IN A SUB-DISTRICT OF THE CITY OF CAPE TOWN MUNICIPALITY." Master's thesis, University of the Western Cape, 2024\. \[En línea\]. Disponible en: [https://etd.uwc.ac.za/xmlui/bitstream/handle/11394/10643/kaylor\_chs\_m\_2024.pdf?sequence=1\&isAllowed=y](https://etd.uwc.ac.za/xmlui/bitstream/handle/11394/10643/kaylor_chs_m_2024.pdf?sequence=1&isAllowed=y).  \[Accedido: 27-Ago-2024\].   
\[4\] M. Rodríguez, "Características clínicas y epidemiológicas de los pacientes amputados en el Hospital General de Ciego de Ávila," Revista Médica de Ciencias de la Salud, vol. 8, no. 2, pp. 123-130, 2023\. \[En línea\]. Disponible en: [https://revmediciego.sld.cu/index.php/mediciego/article/view/632/1171](https://revmediciego.sld.cu/index.php/mediciego/article/view/632/1171).  \[Accedido: 27-Aug-2024\].  
