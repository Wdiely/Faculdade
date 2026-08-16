#ifndef Carro_H
#define Carro_H
#include <string>
using namespace std;

class Carro {
public:
    Carro();
    Carro(const Carro& outro);
    void setnome(string nome);
    void setmarca(string marca);
    void setmotor(float motor);
    void setcor(string cor);
    void setvalor(float valor);
    
    string getnome() const;
    string getmarca() const;
    float getmotor() const;
    string getcor() const;
    float getvalor() const;
    
    void preencher();
    void imprimir();
    void copiar(const Carro& outro);
private:
    string nome;
    string marca;
    float motor;
    string cor;
    float valor;
};

#endif