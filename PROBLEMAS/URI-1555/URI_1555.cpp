#include <iostream>

using namespace std;

int R(int x, int y){
    return ((3*x)*(3*x))+(y*y);
}

int B(int x, int y){
    return (2*x*x)+((5*y)*(5*y));
}

int C(int x, int y){
    return (-100*x)+(y*y*y);
}

int main(){
    int N, x, y, r, b, c;
    cin >> N;
    while(N--){
        cin >> x >> y;
        r = R(x,y), b = B(x,y), c = C(x,y);
        if(r>b && r>c)
            cout << "Rafael ";
        else if(b>r && b>c)
            cout << "Beto ";
        else
            cout << "Carlos ";
        cout << "ganhou" << endl;
    }
    return 0;
}
