#include "util.h"

int main() {
    int size;
    cout << "Input size: ";
    cin >> size;

    int* array = new int[size];
    cout << "Input array of integers: ";

    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int local_min_count = count_local_minima(array, size);
    int local_max_count = count_local_maxima(array, size);

    cout << "Number of local minima: " << local_min_count << endl;
    cout << "Number of local maxima: " << local_max_count << endl;

    delete[] array; // Free allocated memory
    return 0;
}
