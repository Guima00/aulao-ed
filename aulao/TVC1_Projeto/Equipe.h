#ifndef EQUIPE_H_INCLUDED
#define EQUIPE_H_INCLUDED
#include <cstdlib>

class Equipe
{
private:
    int grupo;
    int pontos;
public:
    Equipe() { grupo = rand()%8+1; pontos = rand()%10; };
    ~Equipe() { };
    int getGrupo() { return grupo; };
    void setGrupo(int g) { grupo = g; };
    int getPontos() { return pontos; };
    void setPontos(int p) {pontos = p; };
};

#endif // EQUIPE_H_INCLUDED
