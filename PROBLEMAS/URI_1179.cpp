#include <iostream>
#include <vector>

using namespace std;

void imprimeVetor(vector<int>& vetor){
    for(int i=0; i<(int)vetor.size(); ++i){
        if((vetor[i]%2))
            cout << "impar[" << i << "] = " << vetor[i] << endl;
        else
            cout << "par[" << i << "] = " << vetor[i] << endl;
    }
}

void limpaVetor(vector<int>& vetor){
    vetor.clear();
}

int main(){
    int x;
    vector<int> par, impar;
    for(int i=0; i<15; ++i){
        cin >> x;
        if(x%2) impar.push_back(x);
        else par.push_back(x);
        if(impar.size()==5){
            imprimeVetor(impar);
            limpaVetor(impar);
        }
        if(par.size()==5){
            imprimeVetor(par);
            limpaVetor(par);
        }
    }
    if(!impar.empty())
        imprimeVetor(impar);
    if(!par.empty())
        imprimeVetor(par);
    return 0;
}
