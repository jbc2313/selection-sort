#include <stdio.h>


void listArray(int *pntr, int size) {
    int x; 
    for (x = 0; x < size; x++) {
        printf("array[%d]=%d\n", x, pntr[x]);
    };
};

void selection(int *pntr, int size) {
    int x; 
    for (x = 0; x < size - 1; x++) {
        int min = x;
        int i;
        for (i = x + 1; i < size; i++) {
            if (pntr[i] < pntr[min]) {
                min = i;
            };
        };
        // move the min to the correct position
        int tmp = pntr[min];
        pntr[min] = pntr[x];
        pntr[x] = tmp;

    };

};

int main() {
    int array[] = {8, 11, 3, 9, 5, 18, 4, 1, 13, 14};
    int size = sizeof(array) / sizeof(array[0]);
    listArray(array, size);
    selection(array, size);
    printf("Array was sorted!\n");
    listArray(array, size);
    return 0;
}
