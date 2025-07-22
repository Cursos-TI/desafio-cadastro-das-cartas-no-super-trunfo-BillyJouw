#include <stdio.h>
        int main(){
                /* Declarando Tipo de Variaveis */
            char estado1[10], estado2[10];
            char codigoCarta1[4], codigoCarta2[4];
            char nome_da_Cidade[20], nome_da_Cidade2[20];
            int populacao, polucacao2;
            float area1, area2;
            float pib1, pib2;
            int pt1, pt2;
                

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

                printf("Insira a letra escolhida (%s) e escolha um numero de 01 a 04 para criar o codigo da sua carta \n", estado1);
                scanf("%s", codigoCarta1);

                printf("Insira o nome da cidade: \n");
                scanf("%s", nome_da_Cidade);

                printf("Agora informe qual a população da cidade %s \n", nome_da_Cidade);
                scanf("%d", &populacao);
                
                printf("Iforme a Area (em Km) da cidade %s \n", nome_da_Cidade);
                scanf("%f", &area1);

                printf("Qual o PIB da cidade %s ? \n", nome_da_Cidade);
                scanf("%f", &pib1);

                printf("Quantos pontos turisticos possuem a cidade %s ? \n", nome_da_Cidade);
                scanf("%d", &pt1);

                printf("        \n");
                printf("Perfeito, agora vamos inserir os dados da segunda carta! \n");
                printf("        \n");
               
                /*  Carta 2  */
                printf("Escolha uma letra de i a P para representar sua segunda carta \n");
                scanf("%s", estado2);
                
                printf("Insira a letra escolhida (%s) e escolha um numero de 05 a 08 para criar o codigo da sua carta \n", estado2);
                scanf("%s", codigoCarta2);

                printf("Insira o nome da cidade: \n");
                scanf("%s", nome_da_Cidade2);

                printf("Agora informe qual a população da cidade %s \n", nome_da_Cidade2);
                scanf("%d", &polucacao2);

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

                /* Imprimindo dados das cartas*/
                /* Carta 1*/

                printf("carta 1 \n");
                printf("estado: %s\n", estado1);
                printf("codigo: %s\n", codigoCarta1);
                printf("nome da cidade: %s\n", nome_da_Cidade);
                printf("população: %d\n", populacao);
                printf("área: %.2f\n", area1);
                printf("PIB: %.2f\n", pib1);
                printf("pontos turisticos: %d\n", pt1);

                printf("----------------------------------------------- \n");
                printf("----------------------------------------------- \n");
                /*carta 2*/

                printf("carta 2 \n");
                printf("estado: %s\n", estado2);
                printf("codigo: %s\n", codigoCarta2);
                printf("nome da cidade: %s\n", nome_da_Cidade2);
                printf("população: %d\n", polucacao2);
                printf("área: %.2f\n", area2);
                printf("PIB: %.2f\n", pib2);
                printf("pontos turisticos: %d\n", pt2);

                printf("----------------------------------------------- \n");
                printf("----------------------------------------------- \n");

                printf("essas foram as cartas, Obrigado \n");


                return 0;



        }
