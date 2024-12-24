#include <stdio.h>

// Ham thuc hien thuat toan Sap xep chon
void selectionSort(int arr[], int n, int order) {
    int i, j, minIdx, temp;
    int swapCount = 0; // Dem so lan hoan doi

    for (i = 0; i < n - 1; i++) {
        minIdx = i;

        // Tim chi so phan tu nho nhat hoac lon nhat trong mang con
        for (j = i + 1; j < n; j++) {
            if ((order == 1 && arr[j] < arr[minIdx]) || (order == 0 && arr[j] > arr[minIdx])) {
                minIdx = j;
            }
        }

        // Hoan doi neu can thiet
        if (minIdx != i) {
            temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
            swapCount++;

            // Hien thi mang sau moi lan hoan doi
            printf("Hoan doi phan tu %d voi %d: ", arr[minIdx], arr[i]);
            for (int k = 0; k < n; k++) {
                printf("%d ", arr[k]);
            }
            printf("\n");
        }
    }

    printf("Tong so lan hoan doi: %d\n", swapCount);
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

    // Goi ham sap xep chon
    selectionSort(arr, n, order);

    // Hien thi mang da sap xep
    printf("Mang sau khi sap xep: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

