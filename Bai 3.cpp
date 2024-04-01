#include <stdio.h>

// Hàm s?p x?p dãy s? nguyên b?ng thu?t toán Insertion Sort
void insertionSort(int arr[], int n) {
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		// Di chuy?n các ph?n t? l?n h?n key v? sau
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

int main() {
	int n;
	printf("Nh?p s? l??ng ph?n t?: ");
	scanf("%d", &n);

	int arr[n];
	printf("Nh?p dãy s? nguyên:\n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	// S?p x?p dãy s? nguyên b?ng Insertion Sort
	insertionSort(arr, n);

	printf("Dãy s? nguyên sau khi s?p x?p:\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
