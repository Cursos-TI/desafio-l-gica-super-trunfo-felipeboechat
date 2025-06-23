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

## 🏅 Nível Mestre

No nível Mestre, o desafio se intensifica com a adição de funcionalidades avançadas, como menus dinâmicos e lógica de decisão complexa com operadores ternários.

### 🆕 Diferença em relação ao Nível Aventureiro:
- **Escolha de Dois Atributos:** O usuário poderá escolher dois atributos para comparação entre as cartas.
- **Lógica de Decisão Complexa:** Implementação de estruturas de decisão aninhadas e encadeadas, além do uso de operadores ternários para determinar a carta vencedora.
- **Menus Dinâmicos:** Os menus serão dinâmicos, permitindo uma navegação fluida entre as opções de comparação.

### 🚩 Novas Funcionalidades:
- **Comparação de Dois Atributos:** O sistema comparará dois atributos simultaneamente para determinar a carta vencedora.
- **Lógica Avançada:** Uso de operadores ternários e lógica aninhada para lidar com comparações complexas.
- **Empates:** O sistema será capaz de lidar com empates, exibindo mensagens apropriadas.
- **Exibição de Resultados:** Exibição dos resultados das comparações de forma clara e interativa.

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
