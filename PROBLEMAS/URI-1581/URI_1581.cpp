#include <iostream>
#include <string>

using namespace std;

int main(){
    int N, K;
    bool idiomaNativo;
    string S, aux;
    cin >> N;
    while(N--){
        idiomaNativo = true;
        cin >> K;
        cin >> S;
        while(--K){
            cin >> aux;
            if(aux!=S) idiomaNativo = false;
        }
        cout << ((idiomaNativo) ? S : "ingles") << endl;
    }
    return 0;
}

