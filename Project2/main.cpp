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
    cout << "The arithmetic mean of the non-zero elements of the vector is : " << sum_of_dont_zero(array, size);
    delete[] array;
	return 0;
}