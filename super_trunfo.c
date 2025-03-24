#include <stdio.h>

int main(){
    char estado1, codigo_da_carta1[50], nome_da_cidade1[50], estado2, codigo_da_carta2[50], nome_da_cidade2[50];
    int populacao1, ponto_turisticos1, populacao2, ponto_turisticos2;
    float area_km1, pib1, area_km2, pib2;
    /*Cada variavel esta representado por um numero ao final para cada uma das cartas,
    como exemplo carta1 , estado1 - carta2 , estado2, e assim por diante.*/

    //========Abaixo, inicio do codigo para primeira carta.

    //Imprime nome da primeira carta
    printf("\n_____Insira os dados da primeira carta: \n");
    //Imprime o pedido de estado da primeira carta
    printf("Estado(Apenas uma letra): \n");
    //Abre o pedido de insercao do estado da primeira carta
    scanf("%c", &estado1);
    //Imprime o pedido de codigo da primeira carta
    printf("Codigo: \n");
    //Abre o pedido de insercao do codigo da primeira carta
    scanf("%s", &codigo_da_carta1);
    //Imprime o pedido de cidade da primeira carta
    printf("Nome da cidade(apenas uma palavra): \n");
    //Abre o pedido de insercao do cidade da primeira carta
    scanf("%s", nome_da_cidade1);
    //Imprime o pedido de cidade da primeira carta
    printf("Populacao: \n");
    //Abre o pedido de insercao do polulacao da primeira carta
    scanf("%d", &populacao1);
    //Imprime o pedido de area da primeira carta
    printf("area: \n");
    //Abre o pedido de insercao de area da primeira carta
    scanf("%f", &area_km1);
    //Imprime o pedido de pib da primeira carta
    printf("PIB: \n");
    //Abre o pedido de insercao do pib da primeira carta
    scanf("%f", &pib1);
    //Imprime o pedido de numeros de pontos turisticos da primeira carta
    printf("Numero de pontos turisticos: \n");
    //Abre o pedido de insercao do numeros de pontos turisticos da primeira carta
    scanf("%d", &ponto_turisticos1);

    //Fim do questionario da primeira carta.   
    
    //========Abaixo, inicio do codigo para segunda carta.
	
    //Imprime nome da segunda carta
    printf("\n_____Insira os dados da segunda carta: \n");
    //Imprime o pedido de estado da segunda carta
    printf("Estado(Apenas uma letra): \n");
    //Abre o pedido de insercao do estado da segunda carta
    scanf(" %c", &estado2);
    //Imprime o pedido de codigo da segunda carta
    printf("Codigo: \n");
    //Abre o pedido de insercao do codigo da segunda carta
    scanf("%s", &codigo_da_carta2);
    //Imprime o pedido de cidade da segunda carta
    printf("Nome da cidade(apenas uma palavra): \n");
    //Abre o pedido de insercao do cidade da segunda carta
    scanf("%s", nome_da_cidade2);
    //Imprime o pedido de cidade da segunda carta
    printf("Populacao: \n");
    //Abre o pedido de insercao do polulacao da segunda carta
    scanf("%d", &populacao2);
    //Imprime o pedido de area da segunda carta
    printf("area: \n");
    //Abre o pedido de insercao de area da segunda carta
    scanf("%f", &area_km2);
    //Imprime o pedido de pib da segunda carta
    printf("PIB: \n");
    //Abre o pedido de insercao do pib da segunda carta
    scanf("%f", &pib2);
    //Imprime o pedido de numeros de pontos turisticos da segunda carta
    printf("Numero de pontos turisticos: \n");
    //Abre o pedido de insercao do numeros de pontos turisticos da segunda carta
    scanf("%d", &ponto_turisticos2);
	
    //Fim do questionario da segunda carta.
		
    //========Inicio do retorno dos dados da primeira carta.
	
    //Imprime nome da primeira carta.
    printf("_____Dados da Primeira carta: \n");
    //Imprime estado da primeira carta.
    printf("Estado: %c\n", estado1);
    //Imprime codigo da primeira carta.
    printf("Codigo: %s\n", codigo_da_carta1);
    //Imprime cidade da primeira carta.
    printf("Cidade: %s\n", nome_da_cidade1);  
    //Imprime populacao da primeira carta.
    printf("Populacao: %d\n", populacao1);
    //Imprime area da primeira carta.
    printf("Area: %.2f\n", area_km1);
    //Imprime pib da primeira carta.
    printf("PIB: %.2f\n", pib1);
    //Imprime ponto turistico da primeira carta.
    printf("Pontos turisticos: %d\n", ponto_turisticos1);

    //Fim das respostas da primeira carta.

    //========Inicio do retorno dos dados da segunda carta.

    //Imprime nome da segunda carta.
    printf("\n_____Dados da Segunda carta: \n");
    //Imprime estado da segunda carta.
    printf("Estado: %c\n", estado2);
    //Imprime codigo da segunda carta.
    printf("Codigo: %s\n", codigo_da_carta2);
    //Imprime cidade da segunda carta.
    printf("Cidade: %s\n", nome_da_cidade2);  
    //Imprime populacao da segunda carta.
    printf("Populacao: %d\n", populacao2);
    //Imprime area da segunda carta.
    printf("Area: %.2f\n", area_km2);
    //Imprime pib da segunda carta.
    printf("PIB: %.2f\n", pib2);
    //Imprime ponto turistico da segunda carta.
    printf("Pontos turisticos: %d\n", ponto_turisticos2);
  
    //Fim das respostas da segunda carta.
  
  
    return 0;
   
     
}
