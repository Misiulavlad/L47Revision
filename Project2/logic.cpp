#include "util.h"
int sum_of_dont_zero(int* arr, int size) {
	int sum = 0;
	int count =0;
	for (int i = 0; i < size; i++) {
		if (arr[i] != 0) {
			sum += arr[i];
			count++;
		}
	}
	return sum/count;
}
