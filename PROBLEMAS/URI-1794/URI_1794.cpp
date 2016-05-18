#include <iostream>

using namespace std;

int main(){
	int N, LA, LB, SA, SB;
	cin >> N >> LA >> LB >> SA >> SB;
	cout << ((N>=LA && N>=SA && N<=LB && N<=SB) ? "possivel" : "impossivel") << endl;
	return 0;
}
