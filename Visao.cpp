#include "Visao.h"

#include <string>
#include <cstring>
#include <iostream>

Visao :: Visao(int _pwm1, int _pwm2):
    pwm1(_pwm1), pwm2(_pwm2) {}

Visao :: ~Visao(){}

int Visao :: getPwm1() const { return pwm1; }
int Visao :: getPwm2() const { return pwm2; }


void Visao :: setPwm1(int _pwm1) {
    pwm1 = _pwm1;
}
void Visao :: setPwm2(int _pwm2) {
    pwm2 = _pwm2;
}

string Visao :: executaPwm(string mensagem){
    string pwm1, pwm2;

    pwm1 = mensagem.substr(1,3);
    pwm2 = mensagem.substr(4,3);

    return "\nPWM1: " + pwm1 + " | PWM2: " + pwm2;
}