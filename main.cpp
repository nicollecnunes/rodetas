#include "Estrategia.h"
#include "Transmissao.h"
#include "Visao.h"

using namespace std;

int main(){
    Estrategia e;
    Transmissao t;
    Visao v;

    // a main fica responsável por enviar a informação entre as duas
    e.setRandomPwms();
    cout << t.transmiteMensagem(e.getPwm1(), e.getPwm2());

    cout << v.executaPwm(t.getMensagem());
    

    return 0;
}