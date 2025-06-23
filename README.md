# ⚠️ Importante!!!
Você pode escolher qualquer um dos desafios para desenvolver. Sinta-se à vontade para começar pelo desafio que mais lhe interessa.

# Desafio Super Trunfo - Países - Comparação das Cartas

Bem-vindo ao desafio "Super Trunfo - Países"! Neste projeto, você desenvolverá um sistema para comparar cartas baseadas em atributos de cidades. O desafio é dividido em três níveis: Novato, Aventureiro e Mestre. Cada nível adiciona novas funcionalidades e complexidades, permitindo um aprendizado progressivo.

## 🏅 Nível Novato

No nível Novato, você começará implementando a lógica básica de comparação entre cartas utilizando estruturas de decisão `if` e `if-else`.

### 🚩 Objetivos:
- **Cadastro de Cartas:** O sistema permitirá ao usuário cadastrar cartas de cidades, incluindo informações como estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos.
- **Comparação de Cartas:** O sistema comparará os atributos de duas cartas e determinará a vencedora com base em uma propriedade específica (população, área, PIB, etc.), escolhida no código.
- **Exibição de Resultados:** Após a comparação, o sistema exibirá qual carta venceu com base na regra: maior valor vence, exceto em densidade populacional, onde o menor valor é o vencedor.

### 📥 Entrada de Dados:
- Os dados das cartas serão inseridos manualmente via terminal.
- O sistema solicitará interativamente as informações de cada carta.

### 📤 Saída de Dados:
- Após o cadastro, as propriedades da cidade serão exibidas de forma organizada.
- O resultado da comparação será mostrado, indicando a carta vencedora.

---

## 🏅 Nível Aventureiro — Interatividade no Super Trunfo

Neste nível, o Super Trunfo fica mais interessante! Você implementará um menu interativo usando `switch` para que o jogador possa escolher o atributo de comparação entre duas cartas de cidades. Além disso, usará estruturas de decisão aninhadas (`if-else` dentro de `if-else`) para criar uma lógica de comparação mais complexa, considerando regras específicas para cada atributo.

### 🚩 O que você vai fazer
- Implementar um menu interativo no terminal usando a estrutura `switch` que permita ao jogador escolher qual atributo será usado para comparar as cartas.
- Implementar a lógica de comparação entre duas cartas com base no atributo selecionado pelo jogador. Os atributos disponíveis são:
  - Nome da cidade (string — usado apenas para exibir informações)
  - População (int)
  - Área (float)
  - PIB (float)
  - Número de pontos turísticos (int)
  - Densidade demográfica (float — já calculada no desafio anterior)
- A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, vence a carta com o menor valor.
- Exibir o resultado da comparação, incluindo:
  - O nome das duas cidades
  - O atributo usado na comparação
  - Os valores do atributo para cada carta
  - Qual carta venceu
  - Em caso de empate, exibir a mensagem "Empate!"

### 📥 Exemplo de uso do menu
```
=== MENU DE COMPARAÇÃO ===
Escolha o atributo para comparar as cartas:
1. População
2. Área
3. PIB
4. Pontos Turísticos
5. Densidade Demográfica
Digite sua escolha (1-5): 2
```

### 📤 Exemplo de saída
```
=== RESULTADO DA COMPARAÇÃO ===
Atributo escolhido: ÁREA
- Carta 1 (A01): 432165.00 km²
- Carta 2 (B25): 236547.00 km²
Resultado: Carta 1 (Cidade X) venceu!
```

### 🛠️ Como compilar e executar

No terminal (usando WSL):
```sh
wsl gcc -Wall -o logicaSuperTrunfo logicaSuperTrunfo.c
wsl ./logicaSuperTrunfo
```

### 💡 Dicas
- O menu e as mensagens exibidas no terminal devem ser intuitivos e fáceis de entender.
- Use o `default` no `switch` para tratar opções inválidas.
- O código deve ser limpo, organizado e bem comentado.
- O cadastro das cartas pode ser reaproveitado do nível anterior.

---

## 🏅 Nível Mestre - Comparação com Múltiplos Atributos

Este é o desafio final do Super Trunfo! Você integrará tudo o que aprendeu sobre estruturas de decisão em C para criar uma lógica de comparação ainda mais sofisticada.

### 🚩 O que você vai fazer
- Permitir que o jogador escolha **dois atributos** para comparar as cartas, através de menus dinâmicos.
- O sistema garantirá que o jogador não possa selecionar o mesmo atributo duas vezes.
- Após comparar os dois atributos individualmente, o sistema **somará os valores** dos atributos para cada carta. A carta com a **maior soma** vence a rodada.
- Implementar tratamento de empates.
- Criar menus dinâmicos onde, após a escolha do primeiro atributo, ele não aparecerá como opção para o segundo.
- Usar o **operador ternário** para tornar o código mais elegante na exibição dos resultados.

### 📥 Exemplo de uso dos menus
Primeira escolha:
```
=== MENU DE COMPARAÇÃO MÚLTIPLA ===
Escolha o PRIMEIRO atributo para comparar:
1. População
2. Área
3. PIB
4. Pontos Turísticos
5. Densidade Demográfica
Digite sua escolha (1-5): 1
```

Segunda escolha (note que "População" não é mais uma opção):
```
Escolha o SEGUNDO atributo (diferente do primeiro):
2. Área
3. PIB
4. Pontos Turísticos
5. Densidade Demográfica
Digite sua escolha: 3
```

### 📤 Exemplo de saída
```
=== RESULTADO DA COMPARAÇÃO ===
Atributos escolhidos: População e PIB
--------------------------------------------------------------
CARTA 1 (R17 - Niteroi)
 - População: 1234567.00
 - PIB: 12345.00
 - SOMA DOS ATRIBUTOS: 1246912.00

CARTA 2 (S22 - Barueri)
 - População: 123456.00
 - PIB: 32156.00
 - SOMA DOS ATRIBUTOS: 155612.00
--------------------------------------------------------------
RESULTADO FINAL: CARTA 1 (Niteroi) VENCEU com a maior soma!
```

---

## 📋 Requisitos Funcionais Comuns
- **Cadastro de Cartas:** O sistema deve permitir o cadastro de cartas com as informações necessárias.
- **Comparação:** O sistema deve comparar as cartas e determinar a vencedora com base nas regras estabelecidas.
- **Exibição de Resultados:** Os resultados devem ser exibidos de forma clara, indicando a carta vencedora.

## 📌 Requisitos Não Funcionais Comuns
- **Usabilidade:** A interface do usuário deve ser simples e intuitiva.
- **Performance:** O sistema deve executar operações sem atrasos perceptíveis.
- **Manutenibilidade:** O código deve ser bem estruturado e documentado.
- **Confiabilidade:** O sistema deve ser robusto e capaz de lidar com entradas inválidas de forma adequada.

---

Boa sorte no desenvolvimento deste desafio e aproveite para aprender e se divertir enquanto progride pelos níveis!

Equipe de Ensino - MateCheck
