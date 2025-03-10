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

    cout << "Input range (from a to b): ";
    int a, b;
    cin >> a >> b;

    while (a <= 0 || b <= 0 || a > b || b > size) {
        cout << "Invalid range. Try again." << endl;
        cin >> a >> b;
    }

    cout << "Input the sort direction (1 for ascending, 2 for descending): ";
    int direction;
    cin >> direction;

    while (direction != 1 && direction != 2) {
        cout << "Invalid direction. Try again (1 for ascending, 2 for descending): ";
        cin >> direction;
    }

 
    sort(array, size, a, b, direction);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    delete[] array;
    return 0;
}
