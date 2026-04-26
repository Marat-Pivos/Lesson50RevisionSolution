 // Task 04 [The swap of extreme elements]
// Обмен экстремальных элементов
// 
// Дан вектор целочисленных значений. Необходимо спроектировать эффективный 
// алгоритм и реализовать функцию (или программу), которая меняет 
// экстремальные элементы вектора местами. Если экстремальных элементов
// несколько, то необходимо поменять последние найденные элементы.
// Дополнительно в функции необходимо предусмотреть механизм "защиты от дурака"
// для работы с некорректными данными.


// RAM - O(1)
// CPU - O(N)

#include "logic.h"

int get_max_index(int array[], int size) {
	int maxindex = 0;
	
	for (int i = 1; i < size; i++) {
		if (array[i] >= array[maxindex]) {
			maxindex = i;
		}
	}

	return maxindex;
}

int get_min_index(int array[], int size) {
	int minindex = 0;

	for (int i = 1; i < size; i++) {
		if (array[i] <= array[minindex]) {
			minindex = i;
		}
	}

	return minindex;
}

void swap_extrem_elements(int array[], int size) {	
	if (size <= 0) {
		return;
	}

	int index_max = get_max_index(array, size);
	int index_min = get_min_index(array, size);

	int temp = array[index_min];
	array[index_min] = array[index_max];
	array[index_max] = temp;
}