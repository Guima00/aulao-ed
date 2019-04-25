#ifndef MATRIZBLOCODIAGONAL_H_INCLUDED
#define MATRIZBLOCODIAGONAL_H_INCLUDED

class MatrizBlocoDiagonal
{
public:
    MatrizBlocoDiagonal(int nb);
    ~MatrizBlocoDiagonal();

    float get(int i, int j);
    void set(int i, int j, float val);
    void setBloco(int ib, float val);
    void imprime();

private:
    int n;           // dimensao da matriz
    int numBlocos;   // numero de blocos 3x3
    float *vet;

    int detInd(int i, int j);
};

#endif // MATRIZBLOCODIAGONAL_H_INCLUDED
