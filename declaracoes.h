#ifndef DECLARACOES_H_INCLUDED
#define DECLARACOES_H_INCLUDED

typedef struct tabuleiro { //labirinto
    int **tabuleiro; 
    char tipo_jogo[2];    // A(0-6)         //modo
    int tab_l;          // N de linhas do tabuleiro     //L
    int tab_c;          // N de colunas do tabuleiro    //C
    int tesouro_l;      // Linha do tesouro             //para já é melhor chamar tipo cel1_L
    int tesouro_c;      // Coluna do tesouro            //idem cel1_C
    int coord_l;        // Linha para as 2ª coordenadas do modo de jogo A6 //cell2_L
    int coord_c;        // Coluna para as 2ª coordenadas do modo de jogo A6 //cel2_C
    int n_cel_p_c;      // N de celulas pretas ou cinzentas //P
} tab; //Lab

void alloc_tabuleiro();
void print_tabuleiro();

#endif // DECLARACOES_H_INCLUDED
