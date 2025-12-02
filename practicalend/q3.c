#include <stdio.h>

int main() {
    int arr[7] = {20, 32, 6, 7, 22, 47, 21};
    int i;

    int largest = arr[0];   
    int smallest = arr[0];  

   
    for(i = 1; i < 7; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }

        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}
