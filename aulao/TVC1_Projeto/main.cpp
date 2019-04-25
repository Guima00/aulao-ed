#include <iostream>
#include "Equipe.h"
#include "CopaDoMundo.h"
#include "MatrizBlocoDiagonal.h"

using namespace std;

// ############################################################################
// TVC 1 -- ESTRUTURA DE DADOS e LABORATORIO DE PROGRAMACAO II
// DATA: 23/04/2018
// PREENCHER ESTE CABECALHO COM SUAS INFORMACOES
// ALUNO(A):
// MATRICULA:
// ############################################################################

// ----------------------------------------------------------------------------
//Q1
int** criaArrayIrregular(int *dims, int n, int *nmaxi)
{
    // Implemente aqui sua solucao!
    // Se necessario remova o codigo abaixo.
    return NULL;
}

void destroiArrayIrregular(int **vet, int n)
{
    // Implemente aqui sua solucao!
}
// ----------------------------------------------------------------------------
//-Q1

// ----------------------------------------------------------------------------
//Q2
int somaDigitos(int val, int *nr)
{
    return 0;
}
//-Q2
// ----------------------------------------------------------------------------

int main()
{
    srand(1);
    cout << "TVC 1 -- ESTRUTURA DE DADOS e LAB. DE PROG. II" << endl;
    cout << "FAVOR PREENCHER OS SEUS DADOS" << endl;/*

    // TESTE DA QUESTAO 1 -----------------------------------------------------
    cout << endl << "TESTE DA QUESTAO 1" << endl;
    int dimensoes[5] = {6, 7, 5, 9, 1};
    int **vv;// = NULL;
    int maxi = -1;
    cout << "Criando vetor de vetores" << endl;
    vv = criaArrayIrregular(dimensoes, 5, &maxi);
    if(maxi != -1)
        cout << "Indice do maior: " << maxi << endl;
    // preenche vv
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < dimensoes[i]; j++)
            vv[i][j] = i+1;
    // imprime vv
    for(int i = 0; i < 5; i++){
            cout << "array[" << i << "] = ";
        for(int j = 0; j < dimensoes[i]; j++)
            cout <<  vv[i][j] << " ";
        cout << endl;
    }
    cout << "Destruindo vetor de vetores" << endl;
    if(vv != NULL)
        destroiArrayIrregular(vv, 5);
    cout << endl;*/
    // ------------------------------------------------------------------------

    // TESTE DA QUESTAO 2 -----------------------------------------------------
    cout << endl << "TESTE DA QUESTAO 2" << endl;
    int soma=0, nrec=0;
    soma = somaDigitos(96541,&nrec);
    cout << "Soma dos digitos de 96541: " << soma << endl;
    cout << "Numero de chamadas recursivas: " << nrec << endl;
    cout << endl;
    // ------------------------------------------------------------------------

    // TESTE DA QUESTAO 3 -----------------------------------------------------
    cout << endl << "TESTE DA QUESTAO 3" << endl;
    CopaDoMundo cm2018(16);
    int grupo=0, pontos=0;
//    cout << "Equipes: " << endl;
//    cm2018.imprimeEquipes();
    cout << "Equipes: " << endl;
    cm2018.imprime();
    cm2018.primeiraGrupo(&grupo, &pontos);
    cout << "Pontos da equipe primeira colocada do grupo " << grupo << ": " << pontos << endl;
    cout << endl;/*
    // ------------------------------------------------------------------------

    // TESTE DA QUESTAO 4 -----------------------------------------------------
    cout << endl << "TESTE DA QUESTAO 4" << endl;
    MatrizBlocoDiagonal m(4);

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            m.set(i,j,10.0+i+j);

    for(int i=3; i<6; i++)
        for(int j=3; j<6; j++)
            m.set(i,j,20.0+i+j);

    for(int i=6; i<9; i++)
        for(int j=6; j<9; j++)
            m.set(i,j,30.0+i+j);

    for(int i=9; i<12; i++)
      for(int j=9; j<12; j++)
	m.set(i,j,40.0+i+j);

    m.imprime();

    m.setBloco(0,99);
    m.imprime();*/

    return 0;
}
