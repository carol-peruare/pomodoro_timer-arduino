# Arduino Pomodoro Timer

Este projeto consiste em um cronômetro baseado na Técnica Pomodoro, desenvolvido com Arduino. O sistema auxilia no gerenciamento de tempo ao alternar automaticamente entre períodos de foco e descanso.

## Funcionalidades

O dispositivo automatiza o ciclo de trabalho e repouso com as seguintes características:

* **Ciclo Automático:** Alternância entre os estados sem necessidade de intervenção manual.
* **Display Informativo:** Exibição em tempo real do status atual (Trabalho ou Descanso) e da contagem regressiva.
* **Programação Não Bloqueante:** Uso da função `millis()` para contagem de tempo, o que permite que o processador execute outras tarefas simultaneamente, garantindo maior precisão e expansibilidade.

## Configuração do Ciclo

O sistema utiliza o padrão clássico da técnica, configurado através das variáveis do código:

| Estado | Duração | Descrição |
| :--- | :--- | :--- |
| FOCUS TIME | 25 Minutos | Período dedicado à tarefa principal. |
| REST TIME | 05 Minutos | Pausa curta para descanso mental. |

## Hardware Utilizado

* Microcontrolador Arduino Uno
* Display LCD 20x4 com módulo de comunicação I2C
* Protoboard e Jumpers para conexões

## Autora

* [Carolina Peruare](https://github.com/carol-peruare)
