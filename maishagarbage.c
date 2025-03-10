#include <stdio.h>


void find_smallest(int *arr, int size){
int *ptr = arr; // Pointer to traverse the array
int smallest = *ptr; // Assume the first element is the smallest

for (int i = 1; i < size; i++) {
ptr++; // Move the pointer to the next element
if (*ptr < smallest) {
smallest = *ptr;
}
}printf("The smallest element in the array is: %d\n", smallest);
}

int main() {
int arr[] = {23, 12, 45, 6, 78, 9};
//int size = sizeof(arr) / sizeof(arr[0]);

find_smallest(arr, size);

return 0;
}