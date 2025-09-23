#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de Paiss.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Declaração de variáveis Carta1
    char codPais1[4];          //Código da Pais
    char numCodPais1[4];       //Número código da Pais
    char nomePais1[50];        //nome da país
    unsigned long int populacao1;//população de habitantes
    float area1;                 //área da Pais
    float pib1;                  //PIB da Pais
    int numPontosTuristicos1;    //número total de pontos turísticos
    float densidadePopulacional1;// Número de habitantes por km²
    float pibPerCapta1;           //Calcula PIB per capta da Pais

    // Declaração de variáveis Carta2
    char codPais2[4];          //Código da Pais
    char numCodPais2[4];       //Número código da Pais
    char nomePais2[50];        //nome da país
    unsigned long int populacao2;//população de habitantes
    float area2;                 //área da Pais
    float pib2;                  //PIB da Pais
    int numPontosTuristicos2;    //número total de pontos turísticos
    float densidadePopulacional2;// Número de habitantes por km² 
    float pibPerCapta2;           //Calcula PIB per capta da Pais

    // Declaração de variáveis de resultado da comparação das cartas
    int resultPopulacao;
    int resultArea;
    int resultPib;
    int resultPontosTur;
    int resultdensidadePop;
    int resultPibPerCap;

    // Declaração de variável atributo de comparação
    int atributoEscolhido;
    char atributoDeComparacao[30];

    // Cadastro das Cartas:
    //Carta1
    printf("Insira as informações para a primeira carta: \n");

    printf("\nDigite uma letra de 'A' a 'H' para o código da carta: ");
    scanf(" %s", codPais1);

    printf("\nDigite um número de '01' a '04' para o código da carta: ");
    scanf(" %s", numCodPais1);

    // printf("\nDigite um Estado(UF): ");
    // scanf(" %49[^\n]", estado1);
     
    printf("\nDigite o nome do país: ");
    scanf(" %49[^\n]", nomePais1);   

    printf("\nDigite a população do país: ");
    scanf("%lu", &populacao1);  

    printf("\nDigite a área do país: ");
    scanf(" %f", &area1);

    printf("\nDigite o PIB do país: ");
    scanf(" %f", &pib1);

    printf("\nDigite o número de pontos turísticos do país: ");
    scanf(" %d", &numPontosTuristicos1);

    //Calcula densidade populacional da Pais
    densidadePopulacional1 = (float)populacao1 / area1;

    //Calcula Pib per Capta da Pais
    pibPerCapta1 = ((float)populacao1 / pib1);

    //Carta2
    printf("\n---------------------------------------------------------\n");            // Separador
    printf("\nInsira as informações para a segunda carta: \n");

    printf("\nDigite uma letra de 'A' a 'H' para o código da carta: ");
    scanf(" %s", codPais2);
        
    printf("\nDigite um número de '01' a '04' para o código da carta: ");
    scanf(" %s", numCodPais2);

    // printf("\nDigite uma Estado(UF): ");
    // scanf(" %49[^\n]", estado2);

    printf("\nDigite o nome do país: ");
    scanf(" %49[^\n]", nomePais2);   

    printf("\nDigite a população do país: ");
    scanf("%lu", &populacao2);  

    printf("\nDigite a área do país: ");
    scanf(" %f", &area2);

    printf("\nDigite o PIB do país: ");
    scanf(" %f", &pib2);

    printf("\nDigite o número de pontos turísticos do país:: ");
    scanf(" %d", &numPontosTuristicos2);

    //Calcula densidade populacional da Pais
    densidadePopulacional2 = (float)populacao2 / area2;

    //Calcula Pib per Capta da Pais
    pibPerCapta2 = ((float)populacao2 / pib2);
    
    //Soma dos atributos numéricos para super poder
    // superPoderCarta1 = (float)populacao1 + area1 + pib1 + (float)numPontosTuristicos1 + pibPerCapta1;
    // printf("\nSuper poder Carta 1: %.2f", superPoderCarta1);

    // superPoderCarta2 = (float)populacao2 + area2 + pib2 + (float)numPontosTuristicos2 + pibPerCapta2;
    // printf("\nSuper poder Carta 2: %.2f", superPoderCarta2);
    
    //Menu Interativo
    printf("\n************************MENU************************\n");
    printf("\nEscolha o atributo que deseja comparar:\n");

    //Lista de atributos para escolha do usuário
    printf("\n1.População");
    printf("\n2.Área");
    printf("\n3.PIB");
    printf("\n4.Número de Pontos Turísticos");
    printf("\n5.Densidade Demográfica\n");
    
    scanf("%d", &atributoEscolhido);

    //printf("\nAtributo escolhido: %d", atributoEscolhido);

    //Seleção do atributo
    switch (atributoEscolhido)
    {
    case 1:
          strcpy(atributoDeComparacao, "População");
          scanf("%29s", &atributoDeComparacao);

        break;
    case 2:
          strcpy(atributoDeComparacao, "Área");
          scanf("%29s", &atributoDeComparacao);
          printf("\nAtributo escolhido foi: %s", atributoDeComparacao);

        break;
    case 3:
          strcpy(atributoDeComparacao, "PIB");
          scanf("%29s", &atributoDeComparacao);

        break;
    case 4:
          strcpy(atributoDeComparacao, "Número de Pontos Turísticos");
          scanf("%29s", &atributoDeComparacao);

        break;
    case 5:
          strcpy(atributoDeComparacao, "Densidade Demográfica");
          scanf("%29s", &atributoDeComparacao);

        break;
    default: "Opção inválida!";
        break;
    }
    
    // scanf("%29s", &atributoDeComparacao);
    //printf("\nAtributo escolhido: %s", atributoDeComparacao);

    //Comparação de atributos
{
            // atributoDeComparacao = "População";

        //     if{
        //     printf("\nCarta %s%s: %s", codPais1,numCodPais1,nomePais1);

        //     printf("\nPopulação do país: %lu", populacao1);                                   // Exibe a população da cidade
        //     printf("\nÁrea do país: %.2f", area1);                                            // Exibe a área da cidade
        //     printf("\nPIB do país: %.2f", pib1);                                              // Exibe o PIB da cidade
        //     printf("\nNúmero de pontos turísticos do país: %d", numPontosTuristicos1);      // Exibe o numero de pontos turísticos da cidade
        //     printf("\nDensidade Populacional: %.2f hab/km²", densidadePopulacional1);       // Exibe a quantidade de habitantes por km²
        //     printf("\nPIB per Capita: %.2f reais\n", pibPerCapta1);                            // Exibe o PIB per capita da cidade


        //     printf("\nCarta %s%s: %s", codPais2,numCodPais2,nomePais2);
        //     printf("\n---------------------------------------------------------");
        //     printf("\nAtributo Comparado: %s",atributoDeComparacao);
        //     printf("\nResultado: Carta %s%s - %s venceu!", codPais1,numCodPais1,nomePais1);
        // }else{
        //     printf("\nCarta %s%s: %s", codPais1,numCodPais1,nomePais1);
        //     printf("\nCarta %s%s: %s", codPais2,numCodPais2,nomePais2);
        //     printf("\n---------------------------------------------------------");
        //     printf("\nResultado: Carta %s%s - %s venceu!",codPais2,numCodPais2,nomePais2);
        // };



    //Resultado comparação das cartas
    // printf("\n---------------------------------------------------------\n");
    // printf("Comparação das cartas (Atributo Super poder)\n");

    // //Compara o atributo e exibe o vencedor
    // if (superPoderCarta1 > superPoderCarta2)
    // {
    //     printf("\nCarta %s%s: %s - %s %.2f", codPais1,numCodPais1,nomePais1,estado1,superPoderCarta1);
    //     printf("\nCarta %s%s: %s - %s %.2f", codPais2,numCodPais2,nomePais2,estado2,superPoderCarta2);
    //     printf("\n---------------------------------------------------------");
    //     printf("\nResultado: Carta %s%s %s - %s venceu!", codPais1,numCodPais1,nomePais1,estado1);
    // }
    // else{
    //     printf("\nCarta %s%s: %s - %s %.2f", codPais1,numCodPais1,nomePais1,estado1,superPoderCarta1);
    //     printf("\nCarta %s%s: %s - %s %.2f", codPais2,numCodPais2,nomePais2,estado2,superPoderCarta2);
    //     printf("\n---------------------------------------------------------");
    //     printf("\nResultado: Carta %s%s %s - %s venceu!",codPais2,numCodPais2,nomePais2,estado2);
    //     };
    

    printf("\nFIM\n");
    
    return 0;
}
