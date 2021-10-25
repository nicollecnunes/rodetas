#include "Transmissao.h"
#include "Visao.h"
#include "Estrategia.h"

#include <string>
#include <iomanip>
#include <iostream>

Transmissao :: Transmissao(string _mensagem): mensagem(_mensagem){}
Transmissao :: ~Transmissao(){}

string Transmissao :: getMensagem() { return mensagem; }

void Transmissao :: setMensagem(int _pwm1, int _pwm2){
    string pwm1 = to_string(_pwm1);
    string pwm2 = to_string(_pwm2);

    if (pwm1.length() == 2)
        pwm1 = "0" + pwm1;
    
    if (pwm2.length() == 2)
        pwm2 = "0" + pwm2;
    
    if (pwm1.length() == 1)
        pwm1 = "00" + pwm1;

    if (pwm2.length() == 1)
        pwm2 = "00" + pwm2;

    mensagem = "[" + pwm1 + pwm2 + "]";
}

string Transmissao :: transmiteMensagem(int pwm1, int pwm2){
    setMensagem(pwm1, pwm2);
    return mensagem;
}