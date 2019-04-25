#ifndef COPADOMUNDO_H_INCLUDED
#define COPADOMUNDO_H_INCLUDED
#include "Equipe.h"

class CopaDoMundo
{
private:
    int n;
    Equipe *equipes;
public:
    CopaDoMundo(int tam);
    ~CopaDoMundo();
    void imprime();
    void primeiraGrupo(int *g, int *p);
};

#endif // COPADOMUNDO_H_INCLUDED
