/*
 * Desafio Super Trunfo - Nível Aventureiro
 * Tema: Interatividade no Super Trunfo
 * 
 * Este programa implementa um menu interativo para comparação entre duas cartas
 * do Super Trunfo (Cidades ou Países), utilizando estruturas switch e decisões aninhadas.
 * O usuário pode escolher entre jogar com cidades ou países e qual atributo será usado na comparação.
 * 
 * Autor: Felipe Boechat
 */

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // --- CARTA 1 ---
    char estado1;           // Letra do estado (A-Z)
    char codigo1[4];        // Código da carta (ex: A01)
    char nomeCidade1[50];   // Nome da cidade
    char nomePais1[50];     // Nome do país
    int populacao1;         // População
    float area1;            // Área em km²
    float pib1;             // PIB em bilhões de reais
    int pontosTuristicos1;  // Número de pontos turísticos
    float densidade1;       // Densidade populacional (hab/km²)
    float pibPerCapita1;    // PIB per capita (reais)

    // --- CARTA 2 ---
    char estado2;           // Letra do estado (A-Z)
    char codigo2[4];        // Código da carta (ex: A01)
    char nomeCidade2[50];   // Nome da cidade
    char nomePais2[50];     // Nome do país
    int populacao2;         // População
    float area2;            // Área em km²
    float pib2;             // PIB em bilhões de reais
    int pontosTuristicos2;  // Número de pontos turísticos
    float densidade2;       // Densidade populacional (hab/km²)
    float pibPerCapita2;    // PIB per capita (reais)

    // Variável para controlar o tipo de jogo
    int tipoJogo;

    // Mensagem de boas-vindas
    printf("=== Super Trunfo - Nível Mestre ===\n");
    printf("Implementando Comparações Avançadas com Atributos Múltiplos\n\n");

    // --- MENU INICIAL ---
    printf("=== MENU INICIAL ===\n");
    printf("Escolha o tipo de jogo:\n");
    printf("1. Cidades (jogar com cartas de cidades brasileiras)\n");
    printf("2. Países (jogar com cartas de países do mundo)\n");
    printf("Digite sua escolha (1 para Cidades ou 2 para Países): ");
    scanf("%d", &tipoJogo);

    // Validação da escolha do tipo de jogo
    if (tipoJogo != 1 && tipoJogo != 2) {
        printf("Erro: Opção inválida! Escolha 1 para Cidades ou 2 para Países.\n");
        return 1;
    }

    // --- CADASTRO DAS CARTAS ---
    if (tipoJogo == 1) {
        // Jogo com Cidades
        printf("\n=== CADASTRO DE CIDADES ===\n");
        
        // Cadastro da Carta 1
        printf("Cadastro da Cidade 1:\n");
        
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

        // Cadastro da Carta 2
        printf("\nCadastro da Cidade 2:\n");
        
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

    } else {
        // Jogo com Países
        printf("\n=== CADASTRO DE PAÍSES ===\n");
        
        // Cadastro da Carta 1
        printf("Cadastro do País 1:\n");
        
        printf("Digite o nome do país: ");
        scanf(" %[^\n]", nomePais1);
        
        printf("Digite a população: ");
        scanf("%d", &populacao1);
        
        printf("Digite a área em km²: ");
        scanf("%f", &area1);
        
        printf("Digite o PIB em bilhões de dólares: ");
        scanf("%f", &pib1);
        
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontosTuristicos1);

        // Cadastro da Carta 2
        printf("\nCadastro do País 2:\n");
        
        printf("Digite o nome do país: ");
        scanf(" %[^\n]", nomePais2);
        
        printf("Digite a população: ");
        scanf("%d", &populacao2);
        
        printf("Digite a área em km²: ");
        scanf("%f", &area2);
        
        printf("Digite o PIB em bilhões de dólares: ");
        scanf("%f", &pib2);
        
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontosTuristicos2);
    }

    // --- CÁLCULO DOS ATRIBUTOS DERIVADOS ---
    // Densidade Populacional = População / Área
    // PIB per capita = (PIB * 1.000.000.000) / População
    densidade1 = (area1 > 0) ? (float)populacao1 / area1 : 0;
    pibPerCapita1 = (populacao1 > 0) ? (pib1 * 1000000000) / populacao1 : 0;

    densidade2 = (area2 > 0) ? (float)populacao2 / area2 : 0;
    pibPerCapita2 = (populacao2 > 0) ? (pib2 * 1000000000) / populacao2 : 0;

    // --- EXIBIÇÃO DOS DADOS DAS CARTAS ---
    printf("\n=== RESULTADO DO CADASTRO ===\n");
    
    if (tipoJogo == 1) {
        // Exibição para Cidades
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
    } else {
        // Exibição para Países
        printf("┌─────────────────────────────────────────────────────────────\n");
        printf("│ CARTA 1 (%s)\n", nomePais1);
        printf("├─────────────────────────────────────────────────────────────\n");
        printf("│ País: %s\n", nomePais1);
        printf("│ População: %d habitantes\n", populacao1);
        printf("│ Área: %.2f km²\n", area1);
        printf("│ PIB: %.2f bilhões de dólares\n", pib1);
        printf("│ Pontos Turísticos: %d\n", pontosTuristicos1);
        printf("│ Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("│ PIB per capita: $ %.2f\n", pibPerCapita1);
        printf("└─────────────────────────────────────────────────────────────\n\n");

        printf("┌─────────────────────────────────────────────────────────────\n");
        printf("│ CARTA 2 (%s)\n", nomePais2);
        printf("├─────────────────────────────────────────────────────────────\n");
        printf("│ País: %s\n", nomePais2);
        printf("│ População: %d habitantes\n", populacao2);
        printf("│ Área: %.2f km²\n", area2);
        printf("│ PIB: %.2f bilhões de dólares\n", pib2);
        printf("│ Pontos Turísticos: %d\n", pontosTuristicos2);
        printf("│ Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("│ PIB per capita: $ %.2f\n", pibPerCapita2);
        printf("└─────────────────────────────────────────────────────────────\n");
    }

    // --- MENU INTERATIVO DE COMPARAÇÃO MÚLTIPLA ---
    int atributo1 = 0, atributo2 = 0;
    char nomeAtributo1[50], nomeAtributo2[50];
    float valor_c1_a1 = 0, valor_c2_a1 = 0;
    float valor_c1_a2 = 0, valor_c2_a2 = 0;
    float soma1 = 0, soma2 = 0;

    // --- ESCOLHA DO PRIMEIRO ATRIBUTO ---
    printf("\n=== MENU DE COMPARAÇÃO MÚLTIPLA ===\n");
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite sua escolha (1-5): ");
    scanf("%d", &atributo1);

    // Validação da primeira escolha
    if (atributo1 < 1 || atributo1 > 5) {
        printf("Erro: Opção inválida! Escolha um número entre 1 e 5.\n");
        return 1;
    }

    // --- ESCOLHA DO SEGUNDO ATRIBUTO ---
    do {
        printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
        if (atributo1 != 1) printf("1. População\n");
        if (atributo1 != 2) printf("2. Área\n");
        if (atributo1 != 3) printf("3. PIB\n");
        if (atributo1 != 4) printf("4. Pontos Turísticos\n");
        if (atributo1 != 5) printf("5. Densidade Demográfica\n");
        printf("Digite sua escolha: ");
        scanf("%d", &atributo2);

        if (atributo1 == atributo2) {
            printf("Erro: Você não pode escolher o mesmo atributo duas vezes!\n");
        } else if (atributo2 < 1 || atributo2 > 5) {
            printf("Erro: Opção inválida!\n");
        }
    } while (atributo1 == atributo2 || atributo2 < 1 || atributo2 > 5);

    // --- OBTENÇÃO DOS VALORES DOS ATRIBUTOS ---
    // Usando switch para o primeiro atributo
    switch (atributo1) {
        case 1: strcpy(nomeAtributo1, "População"); valor_c1_a1 = populacao1; valor_c2_a1 = populacao2; break;
        case 2: strcpy(nomeAtributo1, "Área"); valor_c1_a1 = area1; valor_c2_a1 = area2; break;
        case 3: strcpy(nomeAtributo1, "PIB"); valor_c1_a1 = pib1; valor_c2_a1 = pib2; break;
        case 4: strcpy(nomeAtributo1, "Pontos Turísticos"); valor_c1_a1 = pontosTuristicos1; valor_c2_a1 = pontosTuristicos2; break;
        case 5: strcpy(nomeAtributo1, "Densidade Demográfica"); valor_c1_a1 = densidade1; valor_c2_a1 = densidade2; break;
    }

    // Usando switch para o segundo atributo
    switch (atributo2) {
        case 1: strcpy(nomeAtributo2, "População"); valor_c1_a2 = populacao1; valor_c2_a2 = populacao2; break;
        case 2: strcpy(nomeAtributo2, "Área"); valor_c1_a2 = area1; valor_c2_a2 = area2; break;
        case 3: strcpy(nomeAtributo2, "PIB"); valor_c1_a2 = pib1; valor_c2_a2 = pib2; break;
        case 4: strcpy(nomeAtributo2, "Pontos Turísticos"); valor_c1_a2 = pontosTuristicos1; valor_c2_a2 = pontosTuristicos2; break;
        case 5: strcpy(nomeAtributo2, "Densidade Demográfica"); valor_c1_a2 = densidade1; valor_c2_a2 = densidade2; break;
    }

    // --- CÁLCULO DA SOMA E EXIBIÇÃO DOS RESULTADOS ---
    soma1 = valor_c1_a1 + valor_c1_a2;
    soma2 = valor_c2_a1 + valor_c2_a2;

    char* nomeCarta1 = (tipoJogo == 1) ? nomeCidade1 : nomePais1;
    char* idCarta1 = (tipoJogo == 1) ? codigo1 : nomePais1;
    char* nomeCarta2 = (tipoJogo == 1) ? nomeCidade2 : nomePais2;
    char* idCarta2 = (tipoJogo == 1) ? codigo2 : nomePais2;

    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");
    printf("Atributos escolhidos: %s e %s\n", nomeAtributo1, nomeAtributo2);
    printf("--------------------------------------------------------------\n");

    // Exibição detalhada para a Carta 1
    printf("CARTA 1 (%s - %s)\n", idCarta1, nomeCarta1);
    printf(" - %s: %.2f %s\n", nomeAtributo1, valor_c1_a1, (atributo1 == 5) ? "(menor é melhor)" : "");
    printf(" - %s: %.2f %s\n", nomeAtributo2, valor_c1_a2, (atributo2 == 5) ? "(menor é melhor)" : "");
    printf(" - SOMA DOS ATRIBUTOS: %.2f\n\n", soma1);

    // Exibição detalhada para a Carta 2
    printf("CARTA 2 (%s - %s)\n", idCarta2, nomeCarta2);
    printf(" - %s: %.2f %s\n", nomeAtributo1, valor_c2_a1, (atributo1 == 5) ? "(menor é melhor)" : "");
    printf(" - %s: %.2f %s\n", nomeAtributo2, valor_c2_a2, (atributo2 == 5) ? "(menor é melhor)" : "");
    printf(" - SOMA DOS ATRIBUTOS: %.2f\n", soma2);
    
    printf("--------------------------------------------------------------\n");

    // Lógica de decisão final
    printf("RESULTADO FINAL: ");
    if (soma1 > soma2) {
        printf("CARTA 1 (%s) VENCEU com a maior soma!\n", nomeCarta1);
    } else if (soma2 > soma1) {
        printf("CARTA 2 (%s) VENCEU com a maior soma!\n", nomeCarta2);
    } else {
        printf("EMPATE! As somas dos atributos são iguais.\n");
    }

    printf("\n=== FIM DO PROGRAMA ===\n");

    return 0;
}
