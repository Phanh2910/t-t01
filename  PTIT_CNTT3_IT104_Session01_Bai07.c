//2 cách
//cách thứ 1: sử dụng mảng đếm

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int checkNum(int arr[], int n) {
    int count[1001] = {0};
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
        if (count[arr[i]] > 1) {
            return 1;
        }
        else if (count[arr[i]] == 1) {
            return 0;
        }
    }
    return 0;
}
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = checkNum(arr, n);
    if (result) {
        printf("mang co phan tu trung lap\n");
    }else {
        printf("mang khong co phan tu trung lap\n");
    }
    return 0;
}

//độ phức tạp thời gian là:O(n)
//độ phức tạp không gian là:O(1)


//cách 2:dùng for lồng
int check(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j] && arr[i] >= 0 && arr[j] <= 100000) {
                return 1;
            }
        }
    }
    return 0;
}
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = checkNum(arr, n);
    if (result) {
        printf("mang co phan tu trung lap\n");
    }else {
        printf("mang khong co phan tu trung lap\n");
    }
    return 0;
}
//độ phức tạp thời gian là: O(n^2) (do dùng for lồng)
//độ phức tạp không gian là:0(1)