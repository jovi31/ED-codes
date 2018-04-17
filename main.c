#include<stdio.h>
#include<stdlib.h>
#include "estrutura.h"
#include "funcoes.c"

int main(){
    int i;

    //Cria lista

    tLista umaLista;

    criar(&umaLista);

    /*umaLista.v[0] = 1;
    umaLista.v[1] = 2;
    umaLista.v[2] = 3;

    umaLista.n = 3;*/

    insercaoOrdenada(&umaLista, 11);
    insercaoOrdenada(&umaLista, 44);
    insercaoOrdenada(&umaLista, 6);
    insercaoOrdenada(&umaLista, 88);

    //Imprime lista

    exibirLista(umaLista);

    return 0;
}
