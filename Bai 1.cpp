#include <stdio.h>

int main() {
	for (int i = 10; i <= 99; ++i) {
		if (i % 7 == 0) {
			printf("%d ", i);
		}
	}
	return 0;
}
