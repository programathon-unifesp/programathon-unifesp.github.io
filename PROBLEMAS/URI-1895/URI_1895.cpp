#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int N, T, L, A, B, X;
    cin >> N >> T >> L;
    A = B = 0;
    for(int i=0; i<N-1; i++){
        cin >> X;
        if(abs(X-T)<=L){
            if(i%2) B+= abs(X-T);
            else A+= abs(X-T);
            T = X;
        }
    }
    cout << A << " " << B << endl;
    return 0;
}
