#include <stdio.h>

    // Desafio Super Trunfo - Países
    // Tema 1 - Nivel Novato - Criando as Cartas do Super Trunfo

int main() {

    // Area de declaração das variáveis para armazenar as informações das cartas
    // Variáveis para a primeira carta
    char estado_c1[3], codigo_c1[20], cidade_c1[50];
    int populacao_c1, ponto_turistico_c1;
    float area_c1, pib_c1;

    //Variáveis para a segunda carta
    char estado_c2[3], codigo_c2[20], cidade_c2[50];
    int populacao_c2, ponto_turistico_c2;
    float area_c2, pib_c2;



    // Area de mensagens iniciais para o usuário e regras do jogo
    printf("Bem-vindo ao jogo Super Trunfo - Países!\n");
    printf("Nesse jogo, os jogadores comparam as propriedades das cartas para determinar a mais forte.\n");
    printf("Para o tema 'Países' as propriedades das cidades são comparadas.\n");
    printf("As cartas de cada país serão divididas em oito estados, cada um com quatro cidades.\n");
    printf("Cada carta representa uma cidade.\n");
    printf("Os estados são representados por letras, de A a H, e as cidades são identificadas por números, de 01 a 04.\n");
    printf("A combinação da letra do estado e o número da cidade define o código da carta, por exemplo: A01, B02, C03, etc.\n");
    printf("Cada cidade tem as seguintes propriedades: área, população, PIB e pontos turísticos.\n");
    printf("Para começar, você devera cadastrar os dados de duas cartas.\n\n\n");



    //Area de entrada de dados para a Carta 1
    printf("Começe cadastrando a primeira carta.\n");

    printf("Informe o codigo: ");
    scanf("%s", codigo_c1);

    printf("Informe o estado: ");
    scanf("%s", estado_c1);

    printf("Informe o nome da cidade: "); // O nome da cidade deve ser composto por uma única palavra (Ex: Fortaleza) e não por nomes compostos (Ex: Rio de Janeiro, São Paulo).
    scanf("%s", cidade_c1);

    printf("Informe o valor correspondente à àrea (em Km²): "); // Use ponto, não virgula, para separar as casas decimais, por exemplo: 1234.56
    scanf("%f", &area_c1);

    printf("Informe o valor correspondente à população: "); //Valor exato, sem uso de casas decimais.
    scanf("%d", &populacao_c1);

    printf("Informe o valor correspondente ao PIB em (bilhões de reais): "); // Use ponto, não virgula, para separar as casas decimais, por exemplo: 1234.56
    scanf("%f", &pib_c1);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &ponto_turistico_c1);


    //Area de saída dos dados da Carta 1
    printf("\n\nCarta 1 cadastrada com sucesso!\n");
    printf("Exibindo informações da Carta\n");
    printf("Codigo: %s\n", codigo_c1);
    printf("Estado: %s\n", estado_c1);
    printf("Cidade: %s\n", cidade_c1);
    printf("Área: %.2f Km²\n", area_c1);
    printf("População: %d pessoas\n", populacao_c1);
    printf("PIB: %.2f bilhões de reais\n", pib_c1);
    printf("Pontos Turísticos: %d\n", ponto_turistico_c1);



    //Area de entrada de dados para a Carta 2
    printf("\n\n\nAgora cadastre a segunda carta.\n");

    printf("Informe o codigo: ");
    scanf("%s", codigo_c2);

    printf("Informe o estado: ");
    scanf("%s", estado_c2);

    printf("Informe o nome da cidade: "); // O nome da cidade deve ser composto por uma única palavra (Ex: Fortaleza) e não por nomes compostos (Ex: Rio de Janeiro, São Paulo).
    scanf("%s", cidade_c2);

    printf("Informe o valor correspondente à àrea (em Km²): "); // Use ponto, não virgula, para separar as casas decimais, por exemplo: 1234.56
    scanf("%f", &area_c2);

    printf("Informe o valor correspondente à população: "); //Valor exato, sem uso de casas decimais.
    scanf("%d", &populacao_c2);

    printf("Informe o valor correspondente ao PIB em (bilhões de reais): "); // Use ponto, não virgula, para separar as casas decimais, por exemplo: 1234.56
    scanf("%f", &pib_c2);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &ponto_turistico_c2);


    //Area de saída dos dados da Carta 2
    printf("\n\nCarta 2 cadastrada com sucesso!\n");
    printf("Exibindo informações da Carta\n");
    printf("Codigo: %s\n", codigo_c2);
    printf("Estado: %s\n", estado_c2);
    printf("Cidade: %s\n", cidade_c2);
    printf("Área: %.2f Km²\n", area_c2);
    printf("População: %d pessoas\n", populacao_c2);
    printf("PIB: %.2f bilhões de reais\n", pib_c2);
    printf("Pontos Turísticos: %d\n", ponto_turistico_c2);



    return 0; // Fim da função main.

} 