#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    bool maiuscula;
    string sentenca;
	while(getline(cin,sentenca)){
        maiuscula = true;
        for(int i=0; sentenca[i]!='\0'; ++i){
            if(isalpha(sentenca[i])){
                if(maiuscula){
                    sentenca[i] = toupper(sentenca[i]);
                    maiuscula = false;
                }
                else{
                    sentenca[i] = tolower(sentenca[i]);
                    maiuscula = true;
                }
            }
        }
        cout << sentenca << endl;
    }
	return 0;
}
