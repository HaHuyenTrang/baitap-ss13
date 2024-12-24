#include <stdio.h>

// Ham thuc hien thuat toan Sap xep chon
void selectionSort(int arr[], int n, int order) {
    int i, j, min_max_idx;

    for (i = 0; i < n - 1; i++) {
        min_max_idx = i; // Gia su phan tu hien tai la nho nhat hoac lon nhat

        for (j = i + 1; j < n; j++) {
            // Tim phan tu nho nhat hoac lon nhat dua vao thu tu sap xep
            if ((order == 1 && arr[j] < arr[min_max_idx]) || (order == 0 && arr[j] > arr[min_max_idx])) {
                min_max_idx = j;
            }
        }

        // Hoan doi neu can thiet
        if (min_max_idx != i) {
            printf("Hoan doi phan tu %d va %d\n", arr[i], arr[min_max_idx]);
            int temp = arr[i];
            arr[i] = arr[min_max_idx];
            arr[min_max_idx] = temp;
        }

        // Hien thi trang thai mang sau moi lan hoan doi
        printf("Mang sau lan hoan doi %d: ", i + 1);
        for (j = 0; j < n; j++) {
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
}

// Ham thuc hien tim kiem nhi phan
int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Kiem tra phan tu o giua
        if (arr[mid] == x) {
            return mid;
        }

        // Neu x lon hon, bo qua nua trai
        if (arr[mid] < x) {
            left = mid + 1;
        } else {
            // Neu x nho hon, bo qua nua phai
            right = mid - 1;
        }
    }

    return -1; // Khong tim thay
}

int main() {
    int n, i, order, x;

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

    // Nhap gia tri can tim
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    // Goi ham tim kiem nhi phan
    int result = binarySearch(arr, n, x);

    if (result != -1) {
        printf("Gia tri %d duoc tim thay o vi tri %d (chi so bat dau tu 0).\n", x, result);
    } else {
        printf("Gia tri %d khong ton tai trong mang.\n", x);
    }

    return 0;
}

