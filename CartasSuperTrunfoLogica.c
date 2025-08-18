#include <stdio.h>
#include <stdlib.h>
#include <time.h>
        int main(){
                /* Declarando Tipo de Variaveis */
            char estado1[10], estado2[10];
            char codigoCarta1[4], codigoCarta2[4];
            char nome_da_Cidade[20], nome_da_Cidade2[20];
            unsigned long int populacao, polucacao2;
            float area1, area2;
            float pib1, pib2;
            int pt1, pt2;
            float densitade1, densitade2;
            float pibporcapital1, pibporcapital2;
            float superpoder1, superpoder2;
            int resultado1, resultado2;
            char primeiroAtributo, segundoAtributo;
            int ataque1, ataque2, defesa1, defesa2, recuo1, recuo2;
            



                /* Imprimindo Boas Vindas */
                printf("Bem vindo ao Super Trunfo \n");
                printf("        \n");
                printf("Esse é um jogo de cartas onde você vai criar duas cartas e jogar contra o computador \n");
                printf("        \n");

                 /* Recebendo dados do Usuário */
                printf("        \n");
                printf("Bem vindo ao jogo, nesse primeiro momento você vai cadastrar duas cartas \n");
                printf("Essas cartas serão compostas por estados, cidades, população, área, PIB e pontos turisticos \n");
                printf("e suas respectivas caractristicas de acordo com a descrição! \n");
                printf("        \n");
                
                printf("Insira os dados da primeira carta abaixo! \n");
                printf("        \n");

                printf("Escolha uma letra de A a H para representar sua primeira carta \n");
                scanf("%s", estado1);

                printf("Insira a letra escolhida (%s) e escolha um numero de 01 a 05 para criar o codigo da sua carta \n", estado1);
                scanf("%s", codigoCarta1);

                printf("Insira o nome da cidade: \n");
                scanf("%s", nome_da_Cidade);

                printf("Agora informe qual a população da cidade %s (com numeros de ate 5 digitos)\n", nome_da_Cidade);
                scanf("%lu", &populacao);
                
                printf("Iforme a Area (com numeros de ate 5 digitos) da cidade %s \n", nome_da_Cidade);
                scanf("%f", &area1);

                printf("Qual o PIB da cidade %s \n", nome_da_Cidade);
                scanf("%f", &pib1);

                printf("Quantos pontos turisticos possuem a cidade %s ? \n", nome_da_Cidade);
                scanf("%d", &pt1);

                printf("        \n");
                printf("Perfeito, agora vamos inserir os dados da segunda carta! \n");
                printf("        \n");
               
                /*  Carta 2  */
               
                printf("Escolha uma letra de I a P para representar sua segunda carta \n");
                scanf("%s", estado2);
                
                printf("Insira a letra escolhida (%s) e escolha um numero de 01 a 05 para criar o codigo da sua carta \n", estado2);
                scanf("%s", codigoCarta2);

                printf("Insira o nome da cidade: \n");
                scanf("%s", nome_da_Cidade2);

                printf("Agora informe qual a população da cidade %s (com numeros de ate 5 digitos) \n", nome_da_Cidade2);
                scanf("%lu", &polucacao2);

                printf("Iforme a Area (com numeros de ate 5 digitos) da cidade %s \n", nome_da_Cidade2);
                scanf("%f", &area2);

                printf("Qual o PIB da cidade %s ? \n", nome_da_Cidade2);
                scanf("%f", &pib2);

                printf("Quantos pontos turisticos possuem a cidade %s ? \n", nome_da_Cidade2);
                scanf("%d", &pt2);
                printf("        \n");

                printf("Perfeito agora vamos imprimir os dados das cartas \n");
                printf("----------------------------------------------- \n");
                printf("----------------------------------------------- \n");

                // calculando variaveis

                //carta 1
                densitade1 = (float) populacao / area1;
                pibporcapital1 = (float) pib1 / populacao;
                superpoder1 = (float) populacao + area1 + pib1 + pt1 + pibporcapital1;

                //carta 2
                densitade2 = (float) polucacao2 / area2;
                pibporcapital2 = (float) pib2 / polucacao2;
                superpoder2 = (float) polucacao2 + area2 + pib2 + pt2 + pibporcapital2;
                
                /* Imprimindo dados das cartas*/
                
                /* Carta 1*/

                printf("Carta 1: \n");
                printf("Estado: %s\n", estado1);
                printf("Codigo: %s\n", codigoCarta1);
                printf("Nome da cidade: %s\n", nome_da_Cidade);
                printf("População: %lu\n", populacao);
                printf("Área: %.3f km \n", area1);
                printf("PIB: %.f bilhões de reais\n", pib1);
                printf("Pontos turisticos: %d\n", pt1);
                printf("Densidade Populacional: %.3f hab/km \n", densitade1);
                printf("PIB por capita: %.2f reais \n", pibporcapital1);
                printf("Super Poder: %f \n", superpoder1);
                printf("        \n");

                printf("----------------------------------------------- \n");
                printf("----------------------------------------------- \n");
               
                /*carta 2*/

                printf("carta 2 \n");
                printf("estado: %s\n", estado2);
                printf("codigo: %s\n", codigoCarta2);
                printf("nome da cidade: %s\n", nome_da_Cidade2);
                printf("população: %lu\n", polucacao2);
                printf("área: %.3f km \n", area2);
                printf("PIB: %.f bilhões de reais\n", pib2);
                printf("pontos turisticos: %d\n", pt2);
                printf("Densidade Populacional: %.3f hab/km \n", densitade2);
                printf("PIB por capita: %.2f reais \n", pibporcapital2);
                printf("Super Poder: %.f \n", superpoder2);
                printf("        \n");
                printf("----------------------------------------------- \n");
                printf("----------------------------------------------- \n");

        srand(time(0));
            ataque1 = populacao / 100;
            ataque2 = rand() % 500 + 400;
            defesa1 = area1 / 100;
            defesa2 = rand() % 500 + 400;
            recuo1 = superpoder1 / 100;
            recuo2 = rand() % 200 + 200;
        /*    
        printf("%d")
        printf("%d \n", ataque1);
        printf("e %d\n", ataque2);
        */


      printf("agora vamos utilizar os atributos das cartas. \n");
      printf("\n");
      printf("Escolha o primeiro atributo\n");
      printf("A. Ataque\n");
      printf("D. Defesa\n");
      printf("R. Recuo\n");
      printf("\n");

        
        scanf(" %c", &primeiroAtributo);

        switch (primeiroAtributo)
        {
        case 'a':
        case 'A': 
                printf("Voce escolheu a opção ataque!\n");
                resultado1 = ataque1 > ataque2 ? 1 : 0;
                break;
        case 'D':
        case 'd':
                printf("Voce escolheu a opção Defesa\n");
                resultado1 = defesa1 > defesa2 ? 1 : 0;
        case 'R':
        case 'r':
                printf("Voce escolheu a opção Recuo\n");
                resultado1 = recuo1 > recuo2 ? 1 : 0;
                break;
        }
        printf("\n");
        printf("Escolha o segundo atributo\n");
        printf("Atenção!! Voce deve escolher um atributo diferente do primeiro\n");
        printf("A. Ataque\n");
        printf("D. Defesa\n");
        printf("R. Recuo\n");
        printf("\n");

        scanf(" %c", &segundoAtributo);

        if (primeiroAtributo == segundoAtributo)
        {
                printf("Voce escolheu o mesmo atributo!");
        } else {
        switch (segundoAtributo)
        {
        case 'a':
        case 'A': 
                printf("Voce escolheu a opção ataque!\n");
                resultado2 = ataque1 > ataque2 ? 1 : 0;
                break;
        case 'D':
        case 'd':
                printf("Voce escolheu a opção Defesa\n");
                resultado2 = defesa1 > defesa2 ? 1 : 0;
                break;
        case 'R':
        case 'r':
                printf("Voce escolheu a opção Recuo\n");
                resultado2 = recuo1 > recuo2 ? 1 : 0;
                break;
        }

        if (resultado1 && resultado2)
        {
                printf("Parabens, voce venceu\n");
        } else if (resultado1 != resultado2){
                printf("Empatou\n");
        } else {
                printf("Voce perdeu!\n");
        }
        }

                



                return 0;



        }