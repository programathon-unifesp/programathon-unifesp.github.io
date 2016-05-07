#include <iostream>

using namespace std;

int main(){
    const int TAM_MAX = 101+1;
    unsigned long long int LEDS;
    char V[TAM_MAX];
    int N;
    cin >> N;
    cin.getline(V,TAM_MAX);
    while(N--){
        LEDS = 0;
        cin.getline(V,TAM_MAX);
        for(int i=0; V[i]!='\0'; i++){
            switch(V[i]){
                case '1':
                    LEDS+= 2;
                    break;
                case '2':
                    LEDS+= 5;
                    break;
                case '3':
                    LEDS+= 5;
                    break;
                case '4':
                    LEDS+= 4;
                    break;
                case '5':
                    LEDS+= 5;
                    break;
                case '6':
                    LEDS+= 6;
                    break;
                case '7':
                    LEDS+= 3;
                    break;
                case '8':
                    LEDS+= 7;
                    break;
                case '9':
                    LEDS+= 6;
                    break;
                case '0':
                    LEDS+= 6;
                    break;
            }    
        }
        cout << LEDS << " leds" << endl;
    }
    return 0;
}
