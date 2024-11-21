#include <stdio.h>
void Merge(int arr1[], int n, int arr2[], int m);

int main() {
	int arr1[] = {12, 20, 24};
	int arr2[] = {7, 8, 65, 105};
	Merge(arr1, 3, arr2, 4);
	printf("\n");
	return 0;
}

void Merge(int arr1[], int n, int arr2[], int m) {
	int merged[n + m], i = 0, j = 0, k = 0;
	
	while (i < n && j < m)
		merged[k++] = (arr1[i] <= arr2[j]) ? arr1[i++] : arr2[j++];
	
	while (i < n) merged[k++] = arr1[i++];
	while (j < m) merged[k++] = arr2[j++];

	printf("Array elements: ");
	for (i = 0; i < n + m; i++)
		printf("%d ", merged[i]);
}