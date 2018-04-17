#include "estrutura.h"

void criar(tLista *L){
    L->n = 0;
}

int vazia(tLista L){
    if(L.n == 0){
        return 1;
    }else{
        return 0;
    }
}

int cheia(tLista L){
    if(L.n == MAX){
        return 1;
    }else{
        return 0;
    }
}

int tamanho(tLista L){
    return L.n;
}

int posicao(tLista L, tElem dado){
    int i;

    for(i = 0; i <= L.n - 1; i++){
        if(L.v[i] == dado){
            return i + 1;
        }
    }

    return -1;
}

int posicaoOrdenada(tLista L, tElem dado){
    int i;

    for(i = 0; i <= L.n - 1; i++){
        if(L.v[i] >= dado){
            return i + 1;
        }
    }

    return i + 1;
}

int inserir(tLista *L, int pos, tElem dado){
    int i;

    if(cheia(*L)){
        return 0;
    }else{
        for(i = L->n - 1; i >= pos - 1; i--){
            L->v[i + 1] = L->v[i];
        }
        L->v[pos - 1] = dado;
        L->n++;
    }
}

int insercaoOrdenada(tLista *L, tElem dado){
    int pos;


    if(vazia(*L)){
        L->v[0] = dado;
        L->n++;
    }else{
        pos = posicaoOrdenada(*L, dado);
        inserir(L, pos, dado);
    }
}

int remover(tLista *L, int pos){
    int i;

    if(vazia(*L)){
        return 0;
    }else{
        for(i = pos - 1; i <= L->n - 1; i++){
            L->v[i] = L->v[i + 1];
        }
        L->n--;
    }
}

int alterar(tLista *L, int pos, tElem dado){
    L->v[pos - 1] = dado;
}

void exibirLista(tLista L){
    int i;

    for(i = 0; i <= L.n - 1; i++){
        printf("%d.o Elemento: %d\n", i + 1, L.v[i]);
    }
}

void menuInsercao(tLista *L, tElem valor){

}
