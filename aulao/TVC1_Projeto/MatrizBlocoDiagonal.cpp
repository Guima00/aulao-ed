#include <iostream>
#include "MatrizBlocoDiagonal.h"

using namespace std;

// ----------------------------------------------------------------------------
//Q4
MatrizBlocoDiagonal::MatrizBlocoDiagonal(int nb)
{
    // construtor
    // implemente aqui sua solucao
    numBlocos = nb;
    n = 3*numBlocos;
    int tam = 9*numBlocos;
    vet = new float[tam];
    for(int i=0; i<tam; i++)
        vet[i] = 0;
}

MatrizBlocoDiagonal::~MatrizBlocoDiagonal()
{
    // destrutor
    // implemente aqui sua solucao
    delete [] vet;
}

int MatrizBlocoDiagonal::detInd(int i, int j)
{
    // implemente aqui sua solucao
    if(i<0 || i>=n || j<0 || j>=n) return -1;

    int ib = i/3;
    int jb = j/3;

    if(ib==jb)
    {
        int ii = i%3;
        int jj = j%3;
        int pos = 9*ib + (jj + ii*3);
        return pos;
    }
    else
        return -2;
}

float MatrizBlocoDiagonal::get(int i, int j)
{
    // implemente aqui sua solucao
    int k = detInd(i,j);
    if(k==-1)
        cout << "invalido" << endl;
    else if(k==-2)
        return 0;
    else
        return vet[k];
}

void MatrizBlocoDiagonal::set(int i, int j, float val)
{
    // implemente aqui sua solucao
    int k = detInd(i,j);
    if(k==-1)
        cout << "invalido" << endl;
    else if(k!=-2)
        vet[k] = val;
}

void MatrizBlocoDiagonal::setBloco(int ib, float val)
{
    // implemente aqui sua solucao
    int off = 9*ib;
    for(int i=off; i<off+9; i++)
        vet[i] = val;
}
//-Q4
// ----------------------------------------------------------------------------

void MatrizBlocoDiagonal::imprime()
{
    cout << endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout << get(i,j) << " ";
        cout << endl;
    }
}
