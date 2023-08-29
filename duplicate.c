#include <stdio.h>
void findDuplicates(int arr[], int len) {
 printf("Duplicate elements are: ");
for (int i = 0; i < len; i++) {
for (int j = i + 1; j < len; j++) {
 if (arr[i] == arr[j]) {
 printf("%d ", arr[j]);
            }
        }
    }
}

int main() {
    int arr[] = { /* your array here */ };
    int len = sizeof(arr) / sizeof(arr[0]);
    findDuplicates(arr, len);
    return 0;
}
