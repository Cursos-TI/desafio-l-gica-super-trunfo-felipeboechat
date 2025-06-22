/*
 * Desafio Super Trunfo - Nível Novato
 * Tema: Comparando Cartas do Super Trunfo
 * 
 * Este programa implementa a lógica básica de comparação entre duas cartas
 * do Super Trunfo, utilizando estruturas de decisão if e if-else.
 * O foco é comparar um atributo específico (População) para determinar a carta vencedora.
 * 
 * Autor: Felipe Boechat
 */

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Declaração das variáveis para a Carta 1
    char estado1;           // Letra do estado (A-Z)
    char codigo1[4];        // Código da carta (ex: A01)
    char nomeCidade1[50];   // Nome da cidade
    int populacao1;         // População da cidade
    float area1;            // Área em km²
    float pib1;             // PIB em bilhões de reais
    int pontosTuristicos1;  // Número de pontos turísticos
    float densidade1;       // Densidade populacional (hab/km²)
    float pibPerCapita1;    // PIB per capita (reais)

    // Declaração das variáveis para a Carta 2
    char estado2;           // Letra do estado (A-Z)
    char codigo2[4];        // Código da carta (ex: A01)
    char nomeCidade2[50];   // Nome da cidade
    int populacao2;         // População da cidade
    float area2;            // Área em km²
    float pib2;             // PIB em bilhões de reais
    int pontosTuristicos2;  // Número de pontos turísticos
    float densidade2;       // Densidade populacional (hab/km²)
    float pibPerCapita2;    // PIB per capita (reais)

    // Mensagem de boas-vindas
    printf("=== Super Trunfo - Nível Novato ===\n");
    printf("Comparando Cartas do Super Trunfo\n\n");

    // --- CADASTRO DA CARTA 1 ---
    printf("Cadastro da Carta 1:\n");
    
    // Validação do estado - aceitar apenas letras de A a Z
    do {
        printf("Digite a letra do estado (A-Z): ");
        scanf(" %c", &estado1);
        // Converter para maiúscula se for minúscula
        if (estado1 >= 'a' && estado1 <= 'z') {
            estado1 = estado1 - 32;
        }
        // Validar se é uma letra de A a Z
        if (estado1 < 'A' || estado1 > 'Z') {
            printf("Erro: Digite apenas uma letra de A a Z!\n");
        }
    } while (estado1 < 'A' || estado1 > 'Z');
    
    // Validação do código - formato: letra + 2 números
    do {
        printf("Digite o código da carta (ex: A01): ");
        scanf("%s", codigo1);
        // Validar se tem exatamente 3 caracteres e se o primeiro é letra e os outros são números
        if (strlen(codigo1) != 3 || 
            codigo1[0] < 'A' || codigo1[0] > 'Z' ||
            codigo1[1] < '0' || codigo1[1] > '9' ||
            codigo1[2] < '0' || codigo1[2] > '9') {
            printf("Erro: O código deve ter formato letra + 2 números (ex: A01, B25)!\n");
        }
    } while (strlen(codigo1) != 3 || 
             codigo1[0] < 'A' || codigo1[0] > 'Z' ||
             codigo1[1] < '0' || codigo1[1] > '9' ||
             codigo1[2] < '0' || codigo1[2] > '9');
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área em km²: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- CADASTRO DA CARTA 2 ---
    printf("\nCadastro da Carta 2:\n");
    
    // Validação do estado - aceitar apenas letras de A a Z
    do {
        printf("Digite a letra do estado (A-Z): ");
        scanf(" %c", &estado2);
        // Converter para maiúscula se for minúscula
        if (estado2 >= 'a' && estado2 <= 'z') {
            estado2 = estado2 - 32;
        }
        // Validar se é uma letra de A a Z
        if (estado2 < 'A' || estado2 > 'Z') {
            printf("Erro: Digite apenas uma letra de A a Z!\n");
        }
    } while (estado2 < 'A' || estado2 > 'Z');
    
    // Validação do código - formato: letra + 2 números
    do {
        printf("Digite o código da carta (ex: A01): ");
        scanf("%s", codigo2);
        // Validar se tem exatamente 3 caracteres e se o primeiro é letra e os outros são números
        if (strlen(codigo2) != 3 || 
            codigo2[0] < 'A' || codigo2[0] > 'Z' ||
            codigo2[1] < '0' || codigo2[1] > '9' ||
            codigo2[2] < '0' || codigo2[2] > '9') {
            printf("Erro: O código deve ter formato letra + 2 números (ex: A01, B25)!\n");
        }
    } while (strlen(codigo2) != 3 || 
             codigo2[0] < 'A' || codigo2[0] > 'Z' ||
             codigo2[1] < '0' || codigo2[1] > '9' ||
             codigo2[2] < '0' || codigo2[2] > '9');
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área em km²: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- CÁLCULO DOS ATRIBUTOS DERIVADOS ---
    // Densidade Populacional = População / Área
    // PIB per capita = (PIB * 1.000.000.000) / População
    densidade1 = (area1 > 0) ? (float)populacao1 / area1 : 0;
    pibPerCapita1 = (populacao1 > 0) ? (pib1 * 1000000000) / populacao1 : 0;

    densidade2 = (area2 > 0) ? (float)populacao2 / area2 : 0;
    pibPerCapita2 = (populacao2 > 0) ? (pib2 * 1000000000) / populacao2 : 0;

    // --- EXIBIÇÃO DOS DADOS DAS CARTAS ---
    printf("\n=== RESULTADO DO CADASTRO ===\n");
    printf("┌─────────────────────────────────────────────────────────────\n");
    printf("│ CARTA 1 (%s)\n", codigo1);
    printf("├─────────────────────────────────────────────────────────────\n");
    printf("│ Estado: %c\n", estado1);
    printf("│ Código: %-4s\n", codigo1);
    printf("│ Cidade: %s\n", nomeCidade1);
    printf("│ População: %d habitantes\n", populacao1);
    printf("│ Área: %.2f km²\n", area1);
    printf("│ PIB: %.2f bilhões de reais\n", pib1);
    printf("│ Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("│ Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("│ PIB per capita: R$ %.2f\n", pibPerCapita1);
    printf("└─────────────────────────────────────────────────────────────\n\n");

    printf("┌─────────────────────────────────────────────────────────────\n");
    printf("│ CARTA 2 (%s)\n", codigo2);
    printf("├─────────────────────────────────────────────────────────────\n");
    printf("│ Estado: %c\n", estado2);
    printf("│ Código: %-4s\n", codigo2);
    printf("│ Cidade: %s\n", nomeCidade2);
    printf("│ População: %d habitantes\n", populacao2);
    printf("│ Área: %.2f km²\n", area2);
    printf("│ PIB: %.2f bilhões de reais\n", pib2);
    printf("│ Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("│ Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("│ PIB per capita: R$ %.2f\n", pibPerCapita2);
    printf("└─────────────────────────────────────────────────────────────\n");

    // --- COMPARAÇÃO DAS CARTAS (NÍVEL NOVATO) ---
    // Neste nível, a comparação é feita com base em um atributo específico escolhido no código
    // O atributo escolhido é: POPULAÇÃO
    // Para população, a carta com o maior valor vence
    printf("\n=== COMPARAÇÃO DE CARTAS (Atributo: População) ===\n");
    printf("- Carta 1 - %s (%s): %d\n", nomeCidade1, codigo1, populacao1);
    printf("- Carta 2 - %s (%s): %d\n", nomeCidade2, codigo2, populacao2);

    // Lógica de comparação usando estruturas if e if-else
    if (populacao1 > populacao2) {
        // Se a população da Carta 1 for maior que a da Carta 2
        printf("- Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        // Se a população da Carta 2 for maior que a da Carta 1
        printf("- Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        // Se as populações forem iguais (empate)
        printf("- Resultado: Empate!\n");
    }

    printf("\n=== FIM DO PROGRAMA ===\n");

    return 0;
}
