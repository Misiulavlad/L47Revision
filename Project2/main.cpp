#include "util.h"
int main() {
    int size;
    cout << "Input size: ";
    cin >> size;

    int* array = new int[size];
    cout << "Input array: ";

    int i = 0, value;
    while (i < size) {
        cin >> value;
        if (value == -999) {
            break;
        }
        array[i++] = value;
    }
    cout << "Sum of not zeroes number is: " << sum_of_dont_zero(array, size);
    delete[] array;
	return 0;
}