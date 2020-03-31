# APS1 - Computação Embarcada. <br> Pedro Luiz & Gabriel Zezze
* ## Ligações elétricas:
  ### **1.** Conectar a placa **OLED** na parte **EXT1**
  ### **2.** Ligar speaker no **GND** e **PD26** 
  
<br><br>

* ## Como usar:
  ### _Em posse do Hardware embarcado, essas são as ações disponíveis:_
  ### **Botão 1 OLED:** Toca a música.
  ### **Botão 2 OLED:** Pausa a musica.
  ### **Botão 3 OLED:** Avança para a próxima música.
  ### **Leds:** Indica qual música está sendo tocada.
  
<br> 
 
* ## Link para o [Vídeo]().

<br>

* ## Arquitetura do software:
  ### O projeto se trata de um player de música 8-bits, que utilizando um speaker(conectado no pino PD26) toca músicas definidas no codigo, compostas por tempo e frequência das notas. <br> As músicas sao definidad no codigo através de duas structs:
  ```c
  typedef struct {
    int freq;
    int tempo;
  } note;

  typedef struct {
    note notes[100];
    int bpm;
  } song_part;  
  ```
  ### A struct _note_ define uma nota musical a ser tocada pela frequência e a duração que ela deve ser tocada. Já a struct _song_part_ define um trecho de uma música a qual possui uma array de _notes_ as quais são as notas a ser tocadas e tambem possui um _int bpm_ que dita a quantidade de batidas por minuto que a música possui.
  ### Para saber a duração, em segundos, de cada nota foi feita a seguinte conta: _**tempo / bpm**_.


