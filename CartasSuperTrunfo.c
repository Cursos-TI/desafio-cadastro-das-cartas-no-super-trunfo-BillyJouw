#include <stdio.h>
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

                printf("Agora informe qual a população da cidade %s \n", nome_da_Cidade);
                scanf("%lu", &populacao);
                
                printf("Iforme a Area (em Km) da cidade %s \n", nome_da_Cidade);
                scanf("%f", &area1);

                printf("Qual o PIB da cidade %s em bilhões de reais \n", nome_da_Cidade);
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

                printf("Agora informe qual a população da cidade %s \n", nome_da_Cidade2);
                scanf("%lu", &polucacao2);

                printf("Iforme a Area (em Km) da cidade %s \n", nome_da_Cidade2);
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

                /* Comparando as cartas */
                printf("        \n");
                printf("Agora vamos comparar as cartas \n");
                printf("Atributo: População\n");
                printf("        \n");



                printf("Carta 1 - %s : %lu \n", nome_da_Cidade2, populacao);
                printf("Carta2 - %s : %lu \n", nome_da_Cidade, polucacao2);
                if (populacao > polucacao2) {
                        printf("Resultado: Carta 1 (%s) Venceu!\n", nome_da_Cidade);
                } else {
                        printf("Resultado: Carta 2 (%s) Venceu!\n", nome_da_Cidade2);
                }

                



                printf("se o resultado for 1, significa que a carta %s venceu e se o resultado for 0, significa que a carta %s venceu \n", estado1, estado2);
                printf("        \n");
                
               int resultado1 = populacao > polucacao2;
                int resultado2 = area1 > area2;
                int resultado3 = pib1 > pib2;
                int resultado4 = pt1 > pt2;
                int resultado5 = densitade1 > densitade2;
                int resultado6 = pibporcapital1 > pibporcapital2;
                int resultado7 = superpoder1 > superpoder2;

                printf("comparaçãp de cartas: \n");
                printf("População: %d \n", resultado1);
                printf("Área: %d \n", resultado2);
                printf("PIB: %d \n", resultado3);
                printf("Pontos turisticos: %d \n", resultado4);
                printf("Densidade Populacional: %d \n", resultado5);
                printf("PIB por capita: %d \n", resultado6);
                printf("Super Poder: %d \n", resultado7);








                return 0;



        }