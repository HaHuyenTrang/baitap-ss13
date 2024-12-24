#include <stdio.h>

// sap xep noi bot 
void bubbleSort(int arr[], int n, int order) {
    int i, j;
    int swapped;

    for (i = 0; i < n - 1; i++) {
        swapped = 0; // dat lai trang thai hoan doi 

        for (j = 0; j < n - i - 1; j++) {
            // kiem tra dieu kien hoan doi  
            if ((order == 1 && arr[j] > arr[j + 1]) || (order == 0 && arr[j] < arr[j + 1])) {
                // Hoán ð?i hai ph?n t?
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // danh dau rang da co hoan doi 
            }
        }

        // het hoan doi, dung vong lap  
        if (swapped == 0) {
            break;
        }
    }
}

int main() {
    int n, i, order;

    // nhap so luong phan tu mang  
    printf("so luong phan tu mang : ");
    scanf("%d", &n);

    int arr[n];

    // nhap phan tu mang 
    printf("nhap phan tu mang :\n");
    for (i = 0; i < n; i++) {
        printf("Ph?n t? %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // chon sap xep 
    printf("chon sap xep (1: tang , 0: giam): ");
    scanf("%d", &order);


    bubbleSort(arr, n, order);


    printf("mang sau khu sap xep :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

