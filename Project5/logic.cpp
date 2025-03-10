#include "util.h"

void sort(int* arr, int size, int a, int b, int dir) {
    int a1 = a - 1; 
    int b1 = b - 1;

    
    if (a1 < 0 || b1 >= size || a1 > b1) {
        cout << "Invalid range!" << endl;
        return;
    }

    for (int i = a1; i <= b1; i++) {
        for (int j = a1; j < b1 - (i - a1); j++) {
            if ((dir == 1 && arr[j] > arr[j + 1]) || (dir == 2 && arr[j] < arr[j + 1])) {
          
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}