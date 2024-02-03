#include "library.h"
int main() {
	int n; cout << "Input any number: ";
	cin >> n;
	for (x = 0; x < n + 1; x++) {
		if (prime(x)) {
			cout << x << " " << endl;
		}
	}
	return 0
}