/*
 * Desafio Super Trunfo - Nível Aventureiro
 * Tema: Interatividade no Super Trunfo
 * 
 * Este programa implementa um menu interativo para comparação entre duas cartas
 * do Super Trunfo, utilizando estruturas switch e decisões aninhadas.
 * O usuário pode escolher qual atributo será usado na comparação.
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
    printf("=== Super Trunfo - Nível Aventureiro ===\n");
    printf("Interatividade no Super Trunfo\n\n");

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

    // --- MENU INTERATIVO (NÍVEL AVENTUREIRO) ---
    int escolha;
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite sua escolha (1-5): ");
    scanf("%d", &escolha);

    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");
    
    // Estrutura switch para processar a escolha do usuário
    switch (escolha) {
        case 1: // População
            printf("Atributo escolhido: POPULAÇÃO\n");
            printf("- Carta 1 (%s): %d habitantes\n", codigo1, populacao1);
            printf("- Carta 2 (%s): %d habitantes\n", codigo2, populacao2);
            
            // Lógica de comparação aninhada para população
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        case 2: // Área
            printf("Atributo escolhido: ÁREA\n");
            printf("- Carta 1 (%s): %.2f km²\n", codigo1, area1);
            printf("- Carta 2 (%s): %.2f km²\n", codigo2, area2);
            
            // Lógica de comparação aninhada para área
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        case 3: // PIB
            printf("Atributo escolhido: PIB\n");
            printf("- Carta 1 (%s): %.2f bilhões de reais\n", codigo1, pib1);
            printf("- Carta 2 (%s): %.2f bilhões de reais\n", codigo2, pib2);
            
            // Lógica de comparação aninhada para PIB
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        case 4: // Pontos Turísticos
            printf("Atributo escolhido: PONTOS TURÍSTICOS\n");
            printf("- Carta 1 (%s): %d pontos\n", codigo1, pontosTuristicos1);
            printf("- Carta 2 (%s): %d pontos\n", codigo2, pontosTuristicos2);
            
            // Lógica de comparação aninhada para pontos turísticos
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        case 5: // Densidade Demográfica (regra invertida: menor vence)
            printf("Atributo escolhido: DENSIDADE DEMOGRÁFICA\n");
            printf("- Carta 1 (%s): %.2f hab/km²\n", codigo1, densidade1);
            printf("- Carta 2 (%s): %.2f hab/km²\n", codigo2, densidade2);
            
            // Lógica de comparação aninhada para densidade (menor vence)
            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu! (menor densidade)\n", nomeCidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 (%s) venceu! (menor densidade)\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        default: // Opção inválida
            printf("Erro: Opção inválida! Escolha um número entre 1 e 5.\n");
            break;
    }

    printf("\n=== FIM DO PROGRAMA ===\n");

    return 0;
}
