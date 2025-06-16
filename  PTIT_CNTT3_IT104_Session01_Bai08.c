#include <stdio.h>
int index(int arr[], int a) {
    int count[100]={0};
    int max=0;
    int maximum=0;
    for (int i = 0; i < a; i++) {
        if (arr[i] >= 0 && arr[i] < 100) {
            count[arr[i]]++;
        }
    }
    for (int i = 0; i < 100; i++) {
        if (count[i] > max) {
            max = count[i];
            maximum = i;
        }
    }
    return maximum;
}
int main() {
    int a;
    printf("Nhap phan tu mang la: ");
    scanf("%d", &a);
    int arr[a];
    printf("Nhap %d so phan tu tu 1 den 100 la: ");
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    int result = index(arr, a);
    printf("Phan tu xuat hien nhieu nhat la %d\n", result);
    return 0;
}

//độ phức tạp thời gian là:O(n) do dùng cấu trúc for chạy tuần tự
//độ phức tạp không gian là:O(n) do dùng mảng arr trong hàm main