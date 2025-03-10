#include "util.h"

int main() {
    int size;
    cout << "Input size: ";
    cin >> size;

    int* array = new int[size];
    cout << "Input array of natural elements: ";

    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int average = sum_of_not_extreme_numbers(array, size);
    cout << "The average excluding the minimum and maximum elements is: " << average << endl;

    delete[] array; 
    return 0;
}
