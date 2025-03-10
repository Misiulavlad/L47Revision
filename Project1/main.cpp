#include "Util.h"
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

    size = i; 

    cout << "Sum between max and min (by absolute value): "
        << find_max_index(array, size) << endl;

    delete[] array; 
    return 0;
}