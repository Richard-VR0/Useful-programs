#include <iostream>
using namespace std;

//VESCIO RICCARDO
//Esercizio pagina 22

int main(int argc, char** argv) {
	string n, c;
	int x;
	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	cin >> n >> c >> x;
	
	cout << n << " " << c << " ha " << x << " anni";
	
	return 0;
}
