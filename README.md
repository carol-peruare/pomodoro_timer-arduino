# 🍅 Arduino Pomodoro Timer

Um cronômetro de produtividade baseado na **Técnica Pomodoro**, desenvolvido com Arduino e um display LCD I2C. 

O projeto auxilia no gerenciamento de tempo e aumento de foco, alternando automaticamente entre períodos de **Foco Total** e **Descanso**.

## 🚀 Funcionalidades

* **Ciclo Automático:** Alterna entre os estados de trabalho e pausa sem necessidade de intervenção manual.
* **Display Informativo:** Exibe o status atual ("FOCUS TIME" ou "REST TIME") e a contagem regressiva.
* **Multitarefa:** Utiliza a função `millis()` para contagem de tempo, garantindo que o processador não fique bloqueado (diferente do uso de `delay`), permitindo futuras expansões como leitura de botões ou sensores.

## ⏱️ Configuração de Tempo

O sistema segue o padrão clássico da técnica Pomodoro:

| Estado | Duração | Descrição |
| :--- | :--- | :--- |
| **FOCUS TIME** | **25 Minutos** | Tempo dedicado a tarefa principal sem interrupções. |
| **REST TIME** | **05 Minutos** | Pausa curta para descanso mental. |

*> O ciclo se repete infinitamente. Os tempos podem ser ajustados facilmente alterando as variáveis no código fonte.*

## 🛠 Hardware Utilizado

* **Microcontrolador:** Arduino Uno 
* **Display:** LCD 20x4 com módulo I2C
* **Conexões:** Jumpers e Protoboard

---
Desenvolvido por **Carolina Peruare**.
