#include <iostream>
using namespace std;

int main()
{
	int z[] = { 1,7,3,6 };

	for (int x = 0; x < 4; x++) {
		cout << z[x] << " ";
	}
	for (int x = 0; x < 4; x++) {

		for (int c = x; c < 4 - 1; c++) {
			if (z[c] > z[c + 1]); {
				swap(z[c], z[c + 1]);				
			}
		}
	}
	cout << endl;
	for (int x = 0; x < 4; x++) {
		cout << z[x] << " ";
	}
}