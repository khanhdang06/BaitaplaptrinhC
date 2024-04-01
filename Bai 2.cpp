#include <stdio.h>
#include <math.h>

// H�m ki?m tra xem m?t s? c� ph?i l� s? ch�nh ph??ng hay kh�ng
int isPerfectSquare(int num) {
	int sqrtNum = (int)sqrt(num);
	return (sqrtNum * sqrtNum == num);
}

// H�m ??m v� in ra c�c s? ch�nh ph??ng nh? h?n n
void printPerfectSquares(int n) {
	printf("Cac so chinh phuong nho hon %d la:\n", n);
	for (int i = 1; i < n; ++i) {
		if (isPerfectSquare(i)) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

int main() {
	int n;
	printf("Nhap vao so nguyen duong n: ");
	scanf("%d", &n);

	if (n <= 0) {
		printf("Vui long nhap so nguyen duong.\n");
		return 1;
	}

	printPerfectSquares(n);

	return 0;
}
