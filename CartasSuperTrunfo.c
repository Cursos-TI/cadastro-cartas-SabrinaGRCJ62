#include <stdio.h>

// Estrutura da carta
struct Carta {
    char estado;              // Continente (A-H)
    char codigo[4];           // Código da carta (ex: A01)
    char nome[50];            // Nome do país
    int populacao;            // População
    float area;               // Área em km²
    float pib;                // PIB
    int pontosTuristicos;     // Número de pontos turísticos
};

// Função que converte letra do continente em nome
const char* getContinente(char c) {
    switch(c) {
        case 'A': return "América do Sul";
        case 'B': return "América do Norte";
        case 'C': return "Europa";
        case 'D': return "África";
        case 'E': return "Ásia";
        case 'F': return "Oceania";
        case 'G': return "Oriente Médio";
        case 'H': return "Antártida";
        default: return "Continente desconhecido";
    }
}

int main() {
    // Cadastro fixo de 2 cartas
    struct Carta cartas[2] = {
        { 'A', "A01", "Brasil", 214000000, 8516000.0, 1600.0, 20 },
        { 'E', "E02", "Japão", 125000000, 377975.0, 5000.0, 15 }
    };

    printf("\n===== CARTAS CADASTRADAS =====\n");
    for (int i = 0; i < 2; i++) {
        printf("\n--- Carta %d ---\n", i+1);
        printf("Continente: %s (%c)\n", getContinente(cartas[i].estado), cartas[i].estado);
        printf("Codigo: %s\n", cartas[i].codigo);
        printf("Pais: %s\n", cartas[i].nome);
        printf("Populacao: %d habitantes\n", cartas[i].populacao);
        printf("Area: %.2f km2\n", cartas[i].area);
        printf("PIB: %.2f bilhoes\n", cartas[i].pib);
        printf("Pontos Turisticos: %d\n", cartas[i].pontosTuristicos);
    }

    return 0;
}