#include <stdio.h>

// Ham thuc hien thuat toan Sap xep noi bot cai tien
void bubbleSortImproved(int arr[], int n, int order) {
    int i, j, temp, swapped;
    int loopCount = 0; // Dem so lan lap

    for (i = 0; i < n - 1; i++) {
        swapped = 0; // Khoi tao bien kiem tra hoan doi
        loopCount++;

        for (j = 0; j < n - i - 1; j++) {
            if ((order == 1 && arr[j] > arr[j + 1]) || (order == 0 && arr[j] < arr[j + 1])) {
                // Hoan doi neu khong dung thu tu mong muon
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // Danh dau da co hoan doi

                // Hien thi mang sau moi lan hoan doi
                printf("Mang sau khi hoan doi %d va %d: ", arr[j + 1], arr[j]);
                for (int k = 0; k < n; k++) {
                    printf("%d ", arr[k]);
                }
                printf("\n");
            }
        }

        // Neu khong co hoan doi, dung lai
        if (!swapped) {
            break;
        }
    }

    printf("So lan lap can thiet: %d\n", loopCount);
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

    // Goi ham sap xep noi bot cai tien
    bubbleSortImproved(arr, n, order);

    // Hien thi mang da sap xep
    printf("Mang sau khi sap xep: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

