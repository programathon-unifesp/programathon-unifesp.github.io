#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

const int N = 12;

int main(){
    vector<vector<double> > matriz(N,vector<double>(N));
    char operacao;
    double soma = 0.0;
    int quantidade = 0;
    cin >> operacao; 
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> matriz[i][j];
            if(j>i){
                soma+= matriz[i][j];
                quantidade++;
            }
        }
    }
    cout << fixed << setprecision(1);
    cout << ((operacao=='S') ? soma : soma/((double)quantidade)) << endl;
    return 0;
}
