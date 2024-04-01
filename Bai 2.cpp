#include <stdio.h>
#include <math.h>

// Hàm ki?m tra xem m?t s? có ph?i là s? chính ph??ng hay không
int isPerfectSquare(int num) {
	int sqrtNum = (int)sqrt(num);
	return (sqrtNum * sqrtNum == num);
}

// Hàm ??m và in ra các s? chính ph??ng nh? h?n n
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
