#include "util.h"

int count_local_minima(int* arr, int size) {
    int local_minimum = 0;

    for (int i = 1; i < size - 1; i++) {
        if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) {
            local_minimum++;
        }
    }

    return local_minimum;
}

int count_local_maxima(int* arr, int size) {
    int local_maximum = 0;

    for (int i = 1; i < size - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            local_maximum++;
        }
    }

    return local_maximum;
}
