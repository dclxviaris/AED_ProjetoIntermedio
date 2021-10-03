//fprintfs = só para debug
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "declaracoes.h"

void main () { //int argc, char** argv
    /***********
 if (argc != 3)
    {
		fprintf (stdout, "Número de argumentos errado!"); //nome do programa, opção -s, nome do ficheiro
		exit (EXIT_FAILURE);
	} else continue;

    if (**argv[1] != "s")
    {
        fprintf(stdout, "Flag '-s' necessária para esta fase do projeto!"); //verifica se a flag -s está presente
        exit(EXIT_FAILURE);
    } else continue;
***********/

    

    FILE *fp;
    int parede_1 = 0, parede_2 = 0, parede_v = 0;
    char ch = '0', ch_next = '0';

    int t_counter = 0;
    tab *tabuleiro;

    fp = fopen("enunciado202.in1", "r"); 
    /***********
filename = (char*) malloc( strlen(*argv[2] + 1) ); //até à linha 39: verifica se de facto a extensão é .in1
    strcpy(filename, *argv[1]);
    extencao = strrchr(filename, dot);
    if ((read_ok = strcmp(extencao, ".in1")) != 0 )
    {
        fprintf(stdout, "Extensão inválida!");
        exit(EXIT_FAILURE);
    }
    else continue;
    
    
***********/
    
    //fp = fopen (*argv[2], "r");
    /*if (fp == NULL)
    {
    fprintf(stdout, "Impossível abrir o ficheiro!");
    }*/
    


    // Calcula a quantidade de informação da tabela + paredes

    for (int i = 0; i < 100; i++) {
        fscanf(fp, " "); //? 
        fscanf(fp, "\n");

        if(feof(fp) != 0) break; 

        if (i == 0) {
            fscanf(fp, "%d", &(tabuleiro->tab_l));
            printf("%d\n", tabuleiro->tab_l);            
        }
        if (i == 1) {
            fscanf(fp, "%d", &(tabuleiro->tab_c));
            printf("%d\n", tabuleiro->tab_c);

            // Alocaçao do tabuleiro 2D
            alloc_tabuleiro(tabuleiro); 
        }
        if (i == 2) {
            fscanf(fp, "%d", &(tabuleiro->tesouro_l));
            printf("%d\n", tabuleiro->tesouro_l);            
        }
        if (i == 3) {
            fscanf(fp, "%d", &(tabuleiro->tesouro_c));
            printf("%d\n", tabuleiro->tesouro_c); 
        }
        if (i == 4) {
            fscanf(fp, "%s", tabuleiro->tipo_jogo);
            printf("%s\n", tabuleiro->tipo_jogo); 
        }
        if (i == 5 && (strcmp(tabuleiro->tipo_jogo, "A6") != 0)) {
            fscanf(fp, "%s", tabuleiro->tipo_jogo);
            printf("%s\n", tabuleiro->tipo_jogo); 
        }


        if (i > 5 /* && tipo_jogo != A6 */) {    // Ler Paredes para apenas 1 int

            // Passagem do valor da celula para as coord no tabuleiro
            fscanf(fp, "%d", &parede_1);

            fscanf(fp, " ");
            fscanf(fp, "\n");

            fscanf(fp, "%d", &parede_2);

            fscanf(fp, " ");
            fscanf(fp, "\n");

            fscanf(fp, "%d", &parede_v);

            tabuleiro->tabuleiro[parede_1 - 1][parede_2 - 1] = parede_v;
        }
    }

    print_tabuleiro(tabuleiro);

    fclose(fp);
}
