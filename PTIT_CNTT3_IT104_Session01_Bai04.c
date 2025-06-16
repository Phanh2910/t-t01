#include <stdio.h>
int count(int n) {
    return n * (n+1)/2;
}
int main() {
 int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int total = count(n);
    printf("Tong la: %d\n", total);
    return 0;

}

int totalCalc(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}
int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int total = totalCalc(n);
    printf("Tong la: %d\n", total);
    return 0;
}

//độ phức tạp thời gian là:O(1)
//ộ phức tạp không gian là:O(1)