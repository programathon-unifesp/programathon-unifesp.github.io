#include <iostream>
#include <string>

using namespace std;

const string pedra("pedra"), papel("papel"), ataque("ataque"); 

int main(){
    int N;
    string sinal1, sinal2;
	cin >> N;
    while(N--){
        cin >> sinal1 >> sinal2;
        if(sinal1==papel && sinal2==papel)
            cout << "Ambos venceram" << endl;
        else if(sinal1==pedra && sinal2==pedra)
            cout << "Sem ganhador" << endl;
        else if(sinal1==ataque && sinal2==ataque)
            cout << "Aniquilacao mutua" << endl;
        else if(sinal1==ataque || (sinal1==pedra && sinal2==papel))
            cout << "Jogador 1 venceu" << endl;
        else if(sinal2==ataque || (sinal2==pedra && sinal1==papel))
            cout << "Jogador 2 venceu" << endl;
    }
	return 0;
}
