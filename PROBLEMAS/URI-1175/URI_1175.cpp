#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> N(20);
    for(int i=0; i<20; i++)
        cin >> N[i];
    reverse(N.begin(), N.end());
    for(int i=0; i<20; i++)
        cout << "N[" << i << "] = " << N[i] << endl;
    return 0;
}
