#include "Util.h"


int find_max_index(int* arr, int size) {
    int maxIndex = -1, minIndex = -1;
    int maxAbs = 0, minAbs = INT_MAX;

    for (int i = 0; i < size; ++i) {
        if (abs(arr[i]) > maxAbs) {
            maxAbs = abs(arr[i]);
            maxIndex = i;
        }
        if (abs(arr[i]) < minAbs) {
            minAbs = abs(arr[i]);
            minIndex = i;
        }
    }

    if (maxIndex > minIndex) {
        int temp = maxIndex;
        maxIndex = minIndex;
        minIndex = temp;
    }

    int sum = 0;
    for (int i = maxIndex + 1; i < minIndex; ++i) {
        sum += arr[i];
    }

    return sum;
}