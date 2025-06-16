#include <stdio.h>

int main() {
    int* mallocArray(int n){
        int*  arr = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            arr[i] = i;
        }
    }
    return 0;
}
//độ phức tạp trong không gian là: O(n)
