#include "util.h"

int find_max_element(int* arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i]; 
        }
    }
    return max;
}

int find_min_element(int* arr, int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
}

int sum_of_not_extreme_numbers(int* arr, int size) {
    int max = find_max_element(arr, size);
    int min = find_min_element(arr, size);

    int sum = 0, count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != max && arr[i] != min) {
            sum += arr[i];
            count++;
        }
    }

    if (count == 0) { 
        return 0;
    }

    return sum / count; 
}
