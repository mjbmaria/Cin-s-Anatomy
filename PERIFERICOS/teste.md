#  $\textcolor{#C77DFF}{\text{RESUMO:}}$
Esse sensor é uma câmera infravermelha com um array de 8x8 bits, ou seja, a câmera detecta um espaço de 64 pixels separados da pele 
de uma pessoa para descobrir sua temperatura. Seu tipo de $\textcolor{#C77DFF}{\text{comunicação é a I2C}}$ (comunicação serial que precisa apenas de 2 entradas — 
SDA(dado serial) e SCL(clock) — para conectar vários dispositivos a um único controlador).

<img width="300" height="300" alt="center" src="https://github.com/user-attachments/assets/d8966d13-463c-401f-89e6-44a8f94f638d" />

##  $\textcolor{#C77DFF}{\text{APLICAÇÕES:}}$
O sensor seria usado com a finalidade de obter a temperatura da criança em tempo real. O sensor ele seria aclopado em um espaço do
robô onde não impedisse a leitura da camerâ. 

##  $\textcolor{#C77DFF}{\text{BIBLIOTECAS:}}$
O sensor conta com uma biblioteca nativa e criada pelo fornecedor em ambientes de programação pelo arduino. As bibliotecas contém 
funções que auxiliam o uso do componente.

A biblioteca disponivel é a **<SparkFun_GridEYE_Arduino_Library.h>**

##  $\textcolor{#C77DFF}{\text{MODO DE USO:}}$
A principal ideia ao usar o sensor é percorrer a matriz de 8x8 gerada pela câmera, com o objetivo de obter uma maior precisão para 
detecção da temperatura. 
