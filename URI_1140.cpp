#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    bool tautograma, inicio;
    string frase;
    char letra;
	while(getline(cin,frase)){
        if(frase[0]=='*') break;
        tautograma = true;
        inicio = false;
        letra = tolower(frase[0]);
        for(int i=1; frase[i]!='\0'; i++){
            if(frase[i]==' ')
                inicio = true;
			else if(inicio){
				inicio = false;	
				if(letra!=tolower(frase[i]))
                    tautograma = false;
			}
        }
        cout << ((tautograma) ? 'Y' : 'N') << endl;    
    }
	return 0;
}
