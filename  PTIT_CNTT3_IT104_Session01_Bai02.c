#include <stdio.h>

int main() {

    return 0;
}
 void printDouble(int n) {
    int i=1;
    while (i<n) {
        printf("%d\n", i);
        i *= 2;
    }
}
//độ phức tạp của thời gian là: O(log n)