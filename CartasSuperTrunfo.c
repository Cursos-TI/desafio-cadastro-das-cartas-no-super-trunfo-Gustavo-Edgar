#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    unsigned long int populacao, populacao2;
    float area,area2, pib,pib2, densidade,densidade2, percapita,percapita2,superpoder,superpoder2;
    int pontos, pontos2;
    
    printf("Carta 1:\n");
    printf("População: ");
    scanf("%lu", &populacao);
    printf("Área: ");
    scanf("%f",&area);
    printf("PIB: ");
    scanf("%f",&pib);
    printf("Número de pontos turísticos: ");
    scanf("%d",&pontos);
    densidade = populacao/area;
    percapita = pib/populacao;
    superpoder = populacao+area+pib+pontos+densidade+percapita+(1/densidade);


    printf("\nCarta 2:\n");
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área: ");
    scanf("%f",&area2);
    printf("PIB: ");
    scanf("%f",&pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d",&pontos2);
    densidade2 = populacao2/area2;
    percapita2 = pib2/populacao2;
    superpoder2 = populacao2+area2+pib2+pontos2+densidade2+percapita2+(1/densidade2);

    printf("\n Resultado das Comparações: \n");
    if(populacao > populacao2){
        printf("População: Carta 1 venceu(1)\n");
    }
    else{
        printf("População: Carta 2 venceu(0)\n");
    }

    if(area > area2){
        printf("Área: Carta 1 venceu(1)\n");
    }
    else{
        printf("Área: Carta 2 venceu(0)\n");
    }

    if(pib > pib2){
        printf("PIB: Carta 1 venceu(1)\n");
    }
    else{
        printf("PIB: Carta 2 venceu(0)\n");
    }

    if(pontos > pontos2){
        printf("Pontos Turísticos: Carta 1 venceu(1)\n");
    }
    else{
        printf("Pontos Turísticos: Carta 2 venceu(0)\n");
    }

    if(densidade < densidade2){
        printf("Densidade Populacional: Carta 1 venceu(1)\n");
    }
    else{
        printf("Densidade Populacional: Carta 2 venceu(0)\n");
    }

    if(percapita > percapita2){
        printf("PIB per Capita: Carta 1 venceu(1)\n");
    }
    else{
        printf("PIB per Capita: Carta 2 venceu(0)\n");
    }

    if(superpoder > superpoder2){
        printf("Superpoder: Carta 1 venceu(1)\n");
    }
    else{
        printf("Superpoder: Carta 2 venceu(0)\n");
    }

    return 0;
}
