#include <iostream>
#include "CopaDoMundo.h"
#include "Equipe.h"

using namespace std;

// ----------------------------------------------------------------------------
//Q3
CopaDoMundo::CopaDoMundo(int tam)
{
    n=tam;
    equipes=new Equipe [n];
}

CopaDoMundo::~CopaDoMundo()
{
    delete [] equipes;
}

void CopaDoMundo::imprime()
{
    float media=0;
    for(int i=0; i<n; i++)
    {
        cout<<"equipe: "<<i+1<<"\t";
        cout<<"Grupo: "<<equipes[i].getGrupo()<<"\t";
        cout<<"pontos: "<<equipes[i].getPontos()<<endl;
        media+=equipes[i].getPontos();
    }
    media=media/n;
    cout<<"media: "<<media<<endl;
}

void CopaDoMundo::primeiraGrupo(int *g, int *p)
{
    *g=equipes[0].getGrupo();
    *p=0;
    for(int i=1; i<n; i++)
    {
        if(*g>equipes[i].getGrupo())
        {
            *g=equipes[i].getGrupo();
        }
    }
    for(int i=0; i<n; i++)
    {
        if(equipes[i].getGrupo()==*g)
        {
           if(*p<equipes[i].getPontos())
           {
             *p=equipes[i].getPontos();
           }
        }
    }

}
//-Q3
// ----------------------------------------------------------------------------
