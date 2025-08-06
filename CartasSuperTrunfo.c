#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2; 
    float pib1, pib2;
    int pontos1, pontos2;

    //Cadastro das informações da primeira carta
    printf ("Digite as informações da primeira carta:\n");
    printf ("Estado: ");
    scanf (" %c", &estado1);
    printf ("Código: ");
    scanf ("%s", codigo1);
    printf ("Nome da Cidade: ");
    scanf ("%s", cidade1);
    printf ("População: ");
    scanf ("%d", &populacao1);
    printf ("Área: ");
    scanf ("%f", &area1);
    printf ("PIB: ");
    scanf ("%f", &pib1);
    printf ("Número de Pontos Turísticos: ");
    scanf ("%d", &pontos1);
    printf("---------\n");

    //Exibir na tela do usuário as informações da primeira carta
    printf ("Carta 1\n");
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Nome da Cidade: %s\n", cidade1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %f\n", area1);
    printf ("PIB: %f\n", pib1);
    printf ("Número de Pontos Turísticos: %d\n", pontos1);
    printf ("-------------------------------------------\n");

    //Cadastro das informações da segunda carta
    printf ("Digite as informações da segunda carta:\n");
    printf ("Estado: ");
    scanf (" %c", &estado2);
    printf ("Código: ");
    scanf ("%s", &codigo2);
    printf ("Nome da Cidade: ");
    scanf ("%s", &cidade2);
    printf ("População: ");
    scanf ("%d", &populacao2);
    printf ("Área: ");
    scanf ("%f", &area2);
    printf ("PIB: ");
    scanf ("%f", &pib2);
    printf ("Número de Pontos Turísticos: ");
    scanf ("%d", &pontos2);
    printf ("---------\n");

    //Exibir na tela do usuário as informações da segunda carta
    printf ("Carta 2\n");
    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da Cidade: %s\n", cidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %f\n", area2);
    printf ("PIB: %f\n", pib2);
    printf ("Número de Pontos Turísticos: %d\n", pontos2);
    printf ("-------------------------------------------\n");

    return 0;

}
