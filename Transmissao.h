#ifndef TRANSMISSAO_H
#define TRANSMISSAO_H

#include <string>
#include <iostream>
using namespace std;

class Transmissao
{
    string mensagem;
    public:
    Transmissao(string="[]");
    virtual ~Transmissao();  

    string getMensagem();
    void setMensagem(int, int);

    string transmiteMensagem(int, int);
};

#endif