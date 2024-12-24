#include <stdio.h>

// Ham thuc hien thuat toan Sap xep chen
void insertionSort(int arr[], int n, int order) {
    int i, j, key;

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Sap xep tang dan hoac giam dan dua vao bien order
        if (order == 1) {
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
        } else {
            while (j >= 0 && arr[j] < key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
        }

        arr[j + 1] = key;

        // Hien thi trang thai mang sau moi lan chen
        printf("Mang sau lan chen %d: ", i);
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}

int main() {
    int n, i, order;

    // Nhap so luong phan tu cua mang
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    // Nhap cac phan tu cua mang
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Hien thi mang ban dau
    printf("Mang ban dau: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Nhap lua chon sap xep tang dan hay giam dan
    printf("Chon thu tu sap xep (1: Tang dan, 0: Giam dan): ");
    scanf("%d", &order);

    // Goi ham sap xep chen
    insertionSort(arr, n, order);

    // Hien thi mang da sap xep
    printf("Mang sau khi sap xep: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

