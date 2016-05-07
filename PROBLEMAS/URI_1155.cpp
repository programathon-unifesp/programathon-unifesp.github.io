#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double S = 0.0;
    for(int i=1; i<=100; ++i)
        S+= (1/double(i));
    cout << fixed << setprecision(2);
    cout << S << endl;
    return 0;
}
