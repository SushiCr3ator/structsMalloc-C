#include <stdio.h>
#include <stdlib.h>

void _staticarr(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        arr[i] = i * i;
        printf("ans: %d\n",arr[i]);
    }
}

/*int _dynamicarr(int arr*, int length) {//learn malloc,calloc,realloc etc. Lecture: extended dynamic arrays
    int* arr = malloc(20 * sizeof(int));
    for (int i = 0; i < length; i++) {
    }
    return 0;
}*/

int _ungeradeNum(int n) { //recursion
    if (n == 0) return 0;
    return 2 * n - 1 + _ungeradeNum(n - 1); //every function opens the other one till 0 is returned and sums back up tgt

}

int main(void) {
    int leng= 2;
    int array[leng];
    _staticarr(array, leng);
    printf("%d",_ungeradeNum(leng));

    return 0;
}
