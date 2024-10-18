#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "");

    char estadoA[100], estadoB[100];
    char codigoEstadoA[100], codigoEstadoB[100];
    char nomeCidadeA[100], nomeCidadeB[100];
    int populacaoA, populacaoB, pontoTuristicoA, pontoTuristicoB;
    float areaA, areaB, pibA, pibB;
    char escolha;

    do {
        // Entrada da primeira cidade
        printf("=== Cadastro da Cidade 1 ===\n");
        printf("Nome do Estado: ");
        fgets(estadoA, sizeof(estadoA), stdin);
        estadoA[strcspn(estadoA, "\n")] = '\0';

        printf("O código do estado: ");
        fgets(codigoEstadoA, sizeof(codigoEstadoA), stdin);
        codigoEstadoA[strcspn(codigoEstadoA, "\n")] = '\0';

        printf("O nome da cidade: ");
        fgets(nomeCidadeA, sizeof(nomeCidadeA), stdin);
        nomeCidadeA[strcspn(nomeCidadeA, "\n")] = '\0';

        printf("A população total: ");
        scanf("%d", &populacaoA);
        while (getchar() != '\n');

        printf("A quantidade de pontos turísticos: ");
        scanf("%d", &pontoTuristicoA);
        while (getchar() != '\n');

        printf("A área da cidade (em km²): ");
        scanf("%f", &areaA);
        while (getchar() != '\n');

        printf("O PIB (em milhões): ");
        scanf("%f", &pibA);
        while (getchar() != '\n');

        // Entrada da segunda cidade
        printf("\n=== Cadastro da Cidade 2 ===\n");
        printf("Nome do Estado: ");
        fgets(estadoB, sizeof(estadoB), stdin);
        estadoB[strcspn(estadoB, "\n")] = '\0';

        printf("O código do estado: ");
        fgets(codigoEstadoB, sizeof(codigoEstadoB), stdin);
        codigoEstadoB[strcspn(codigoEstadoB, "\n")] = '\0';

        printf("O nome da cidade: ");
        fgets(nomeCidadeB, sizeof(nomeCidadeB), stdin);
        nomeCidadeB[strcspn(nomeCidadeB, "\n")] = '\0';

        printf("A população total: ");
        scanf("%d", &populacaoB);
        while (getchar() != '\n');

        printf("A quantidade de pontos turísticos: ");
        scanf("%d", &pontoTuristicoB);
        while (getchar() != '\n');

        printf("A área da cidade (em km²): ");
        scanf("%f", &areaB);
        while (getchar() != '\n');

        printf("O PIB (em milhões): ");
        scanf("%f", &pibB);
        while (getchar() != '\n');

        // Comparação dos atributos
        printf("\n--- Comparação de Cidades ---\n");

        if (populacaoA > populacaoB) {
            printf("Cidade 1 (%s) tem maior população.\n", nomeCidadeA);
        } else if (populacaoA < populacaoB) {
            printf("Cidade 2 (%s) tem maior população.\n", nomeCidadeB);
        } else {
            printf("Ambas as cidades têm a mesma população.\n");
        }

        if (areaA > areaB) {
            printf("Cidade 1 (%s) tem maior área.\n", nomeCidadeA);
        } else if (areaA < areaB) {
            printf("Cidade 2 (%s) tem maior área.\n", nomeCidadeB);
        } else {
            printf("Ambas as cidades têm a mesma área.\n");
        }

        if (pibA > pibB) {
            printf("Cidade 1 (%s) tem maior PIB.\n", nomeCidadeA);
        } else if (pibA < pibB) {
            printf("Cidade 2 (%s) tem maior PIB.\n", nomeCidadeB);
        } else {
            printf("Ambas as cidades têm o mesmo PIB.\n");
        }

        // Determinar a cidade vencedora
        int pontosCidadeA = 0, pontosCidadeB = 0;

        // População
        if (populacaoA > populacaoB) {
            pontosCidadeA++;
        } else if (populacaoA < populacaoB) {
            pontosCidadeB++;
        }

        // Área
        if (areaA > areaB) {
            pontosCidadeA++;
        } else if (areaA < areaB) {
            pontosCidadeB++;
        }

        // PIB
        if (pibA > pibB) {
            pontosCidadeA++;
        } else if (pibA < pibB) {
            pontosCidadeB++;
        }

        // Exibir o vencedor
        if (pontosCidadeA > pontosCidadeB) {
            printf("\nA cidade vencedora é: %s\n", nomeCidadeA);
        } else if (pontosCidadeB > pontosCidadeA) {
            printf("\nA cidade vencedora é: %s\n", nomeCidadeB);
        } else {
            printf("\nNenhuma cidade venceu, houve um empate.\n");
        }

        // Perguntar se deseja realizar outra comparação
        printf("\nDeseja comparar outras cidades? (S/N): ");
        scanf("%c", &escolha);
        while (getchar() != '\n'); // Limpar o buffer

    } while (escolha == 'S' || escolha == 's');

    printf("Encerrando o programa...\n");
    return 0;
}
