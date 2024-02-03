#pragma once
#include <iostream>
int prime(n) {
	int C;
	C = 0;
	int k;
	k = 1;
	while (k < n) {
		if (n % k == 0) {
			C = C + 1;
		}
		k = k + 1;
	}
	if C == 1 {
		return 1;
	}
	else {
		return 0;
	}
}