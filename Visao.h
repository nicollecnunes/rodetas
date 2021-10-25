#ifndef VISAO_H
#define VISAO_H

#include <string>
#include <cstring>

using namespace std;

class Visao
{
    int pwm1, pwm2;

    public:
    Visao(int = 0, int = 0);
    virtual ~Visao();  

    int getPwm1() const;
    int getPwm2() const;

    void setPwm1(int);
    void setPwm2(int);

    string executaPwm(string);
};

#endif