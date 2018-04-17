#ifndef ESTRUTURA_H_INCLUDED
#define ESTRUTURA_H_INCLUDED
#define MAX 5

typedef int tElem;

typedef struct{
    tElem v[MAX];
    int n;
}tLista;

void criar(tLista *L);
int vazia(tLista L);
int cheia(tLista L);
int tamanho(tLista L);
int posicao(tLista L, tElem dado);
int posicaoOrdenada(tLista L, tElem dado);
int inserir(tLista *L, int pos, tElem dado);
int insercaoOrdenada(tLista *L, tElem dado);
int remover(tLista *L, int pos);
int alterar(tLista *L, int pos, tElem dado);


void exibirLista(tLista L);
void menuInsercao(tLista *L, tElem valor);

#endif // ESTRUTURA_H_INCLUDED
