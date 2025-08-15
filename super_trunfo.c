#include <stdio.h>

int main(){
    // carta 1 
    char estado1;
    char codigo1[10];
    char nomecidade1[100];
    int populacao1;
    float areaemkm²1;
    float PIB1;
    int pontosturisticos1;

    //carta 2
    char estado2;
    char codigo2[10];
    char nomecidade2[100];
    int populacao2;
    float areaemkm²2;
    float PIB2;
    int pontosturisticos2;

    //leitura dos dados da primeira carta
    printf("carta 1:\n");
    printf("estado:");
    scanf("%s" , &estado1);

    printf("codigo: ");
    scanf("%s" , &codigo1);

    printf("nomecidade1:");
    scanf("%s" , &nomecidade1);

    printf("populacao:");
    scanf("%d" , &populacao1);

    printf("area(em km²):");
    scanf("%f" , &areaemkm²1);

    printf("PIB:");
    scanf("%f" , &PIB1);

    printf("numeros de pontos turisticos:");
    scanf("%d" , &pontosturisticos1);
    
    //leitura dos dados da segunda carta
    printf("carta 2:\n");
    printf("estado: ");
    scanf("%s" , &estado2);

    printf("codigo: ");
    scanf("%s" , &codigo2);

    printf("nome da cidade: ");
    scanf("%s" , &nomecidade2);

    printf("populacao: ");
    scanf("%d" , &populacao2);

    printf("area (em km²): ");
    scanf("%f" , &areaemkm²2);

    printf("PIB:");
    scanf("%f", &PIB2);
    
    printf("numero de pontos turisticos: ");
    scanf("%d" , &pontosturisticos2);
    
    //comparacao

    printf("\n--- ccomparacao de cartas ---\n");
    printf("populacao: %d\n", populacao1 > populacao2);
    printf("area: %f\n", areaemkm²1 > areaemkm²2);
    printf("PIB: %f\n", PIB1 > PIB2);
    printf("pontos turisticos: %s\n", pontosturisticos1 > pontosturisticos2);
    printf("nonme da cidade: %s\n", nomecidade1 > nomecidade2);
    printf("codigo da carta: %s\n", codigo1 > codigo2);
    printf("estado: %s\n", estado1 > estado2);

    return 0;
}

    
    