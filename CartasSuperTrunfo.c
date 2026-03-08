#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // ----- Carta 1 ----- //
    char estadoUm;            // Uma letra de 'A' a 'H' (representando um dos oito estados).
    char codigoCartaUm[4];    // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
    char nomeCidadeUm[25];    // O nome da cidade.
    int populacaoCidadeUm;    // O número de habitantes da cidade.
    float areaCidadeUm;       // A área da cidade em quilômetros quadrados.
    float pibCidadeUm;        //  O Produto Interno Bruto da cidade.
    int pontosTuristicosUm;   // A quantidade de pontos turísticos na cidade.
    // --------------------//

    // ----- Carta 2 ----- //
    char estadoDois;
    char codigoCartaDois[4];
    char nomeCidadeDois[25];
    int populacaoCidadeDois;
    float areaCidadeDois;
    float pibCidadeDois;
    int pontosTuristicosDois;
    // --------------------//

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.




    //----------------------    INTERFACE    -------------------------//
    printf("=======================================================\n");  
    printf("|   VAMOS CADASTRAR AS CARTAS DO JOGO SUPER TRUNFO!   |\n");
    printf("=======================================================\n");
    printf("\n");                                                          // Optei por construir uma 'interface' para os titulos
    printf("=======================================================\n");   // A intenção é dar um aspecto diferenciado ao programa
    printf("|    Insira as informações conforme for solicitado:   |\n");
    printf("=======================================================\n");
    printf("\n");
    //---------------------------------------------------------------//






    //----------------    CADASTRAMENTO CARTA 1    --------------------//

    //----------------------     Estado     --------------------------//
    printf("=======================================================\n");
    printf("|          Estado (uma letra entre 'A' e 'H')         |\n");
    printf("=======================================================\n");
    printf("\n");
    scanf(" %c", &estadoUm);
    printf("\n");

    //-----------------     Codigo da Carta     ----------------------//
    printf("=======================================================\n");
    printf("|Codigo da Carta (letra/estado + um numero de 01 a 04)|\n");
    printf("=======================================================\n");
    printf("\n");
    scanf(" %s", codigoCartaUm);
    printf("\n");

    //------------------     Nome da Cidade     ----------------------//
    printf("=======================================================\n");
    printf("|                     Nome da Cidade                  |\n");
    printf("=======================================================\n");
    printf("\n");
    scanf(" %s", nomeCidadeUm);
    printf("\n");

    //--------------------     Populacao     -------------------------//
    printf("=======================================================\n");
    printf("|                       Populacao                     |\n");
    printf("=======================================================\n");
    printf("\n");
    scanf(" %d", &populacaoCidadeUm);
    printf("\n");

    //----------------------     Area     ---------------------------//
    printf("=======================================================\n");
    printf("|                     Area da Cidade                  |\n");
    printf("=======================================================\n");
    printf("\n");
    scanf(" %f", &areaCidadeUm);
    printf("\n");

    //--------------     Produto Interno Bruto     ------------------//
    printf("=======================================================\n");
    printf("|              Produto Interno Bruto (PIB)            |\n");
    printf("=======================================================\n");
    printf("\n");
    scanf(" %f", &pibCidadeUm);
    printf("\n");

    //----------------     Pontos Turisticos     --------------------//
    printf("=======================================================\n");
    printf("|            Quantidade de Pontos Turisticos          |\n");
    printf("=======================================================\n");
    printf("\n");
    scanf(" %d", &pontosTuristicosUm);

    







    
    //----------------    CADASTRAMENTO CARTA 2    -------------------//
    printf("\n");
    printf("=======================================================\n");
    printf("|  Beleza! Agora vamos cadastrar a carta numero dois  |\n");
    printf("=======================================================\n");
    printf("\n");

    //----------------------     Estado     ---------------------------//
    printf("=======================================================\n");
    printf("|          Estado (uma letra entre 'A' e 'H')         |\n");
    printf("=======================================================\n");
    printf("\n");
    scanf(" %c", &estadoDois);
    printf("\n");

    //-----------------     Codigo da Carta     ----------------------//
    printf("=======================================================\n");
    printf("|Codigo da Carta (letra/estado + um numero de 01 a 04)|\n");
    printf("=======================================================\n");
    printf("\n");
    scanf(" %s", codigoCartaDois);
    printf("\n");

    //------------------     Nome da Cidade     ----------------------//
    printf("=======================================================\n");
    printf("|                     Nome da Cidade                  |\n");
    printf("=======================================================\n");
    printf("\n");
    scanf( "%s", nomeCidadeDois);
    printf("\n");
    

    //--------------------     Populacao     -------------------------//
    printf("=======================================================\n");
    printf("|                       Populacao                     |\n");
    printf("=======================================================\n");
    printf("\n");
    scanf(" %i", &populacaoCidadeDois);
    printf("\n");

    //----------------------     Area     ---------------------------//
    printf("=======================================================\n");
    printf("|                     Area da Cidade                  |\n");
    printf("=======================================================\n");
    printf("\n");
    scanf(" %f", &areaCidadeDois);
    printf("\n");

    //--------------     Produto Interno Bruto     ------------------//
    printf("=======================================================\n");
    printf("|              Produto Interno Bruto (PIB)            |\n");
    printf("=======================================================\n");
    printf("\n");
    scanf(" %f", &pibCidadeDois);
    printf("\n");

    //----------------     Pontos Turisticos     --------------------//
    printf("=======================================================\n");
    printf("|            Quantidade de Pontos Turisticos          |\n");
    printf("=======================================================\n");
    printf("\n");
    scanf(" %d", &pontosTuristicosDois);
    //---------------------------------------------------------------//
    









    //-----------    MOSTRANDO AS CARTAS CADASTRADAS    -------------//
    printf("\n");
    printf("=======================================================\n");
    printf("|   SHOW DE BOLA! Segue as duas cartas cadastradas:   |\n");
    printf("=======================================================\n");
    printf("\n");

    printf(" =====  CARTA 1  ====");
    printf("\n");
    printf("Nome: %s \n", nomeCidadeUm);
    printf("Estado: %c \n", estadoUm);
    printf("Codigo: %s \n", codigoCartaUm);
    printf("População: %i \n", populacaoCidadeUm);
    printf("Area: %f \n", areaCidadeUm);
    printf("PIB: %f \n", pibCidadeUm);
    printf("Pontos Turisticos: %d \n", pontosTuristicosUm);
    printf("\n");


    printf(" =====  CARTA 2  ====");
    printf("\n");
    printf("Nome: %s \n", nomeCidadeDois);
    printf("Estado: %c \n", estadoDois);
    printf("Codigo: %s \n", codigoCartaDois);
    printf("População: %i \n", populacaoCidadeDois);
    printf("Area: %f \n", areaCidadeDois);
    printf("PIB: %f \n", pibCidadeDois);
    printf("Pontos Turisticos: %d \n", pontosTuristicosDois);
    //---------------------------------------------------------------//







    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
