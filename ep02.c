#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "utils.h"
#include <inttypes.h>


int main (){

  //declaracao de ponteiro para a estrutura contendo variáveis de acordo com formato proposto
  bag *e;

  //leitura das variáveis a partir de um arquivo 
  scanf("%i", &(e->n)); //dimensao
  scanf("%i", &(e->k)); //diagonal

  e->eq[e->k]; 

  for(int i=0; i<=e->k; i++){
    char *equacao = malloc(sizeof(500));
    fgets(equacao, 24, stdin);
    char ch;
    if(strlen(equacao) > 0){
      ch = equacao[0];
    }

    // analiza se foi feita a leitura de string inválida
    if(equacao == NULL || equacao == "" || equacao == " " || equacao == "\n" || equacao == "\0" || ch == 13 || ch==10){ 
      fgets(equacao, 24, stdin);
    }
    e->eq[i] = equacao;
  }

  scanf("%le", &(e->epsilon));
  scanf("%i", &(e->max_iter));

  exerc02(e);

}
