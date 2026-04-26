// Task 03 [The matching elements]
// Совпадающие элементы
// 
// Дан вектор целочисленных значений. Необходимо спроектировать эффективный 
// алгоритм и реализовать функцию (или программу), которая проверяет, 
// что среди элементов вектора есть хотя бы одна пара совпадающих.
// Дополнительно в функции необходимо предусмотреть механизм "защиты от дурака"
// для работы с некорректными данными (в данном случае функция должна 
// возвращать значение false).
#include "logic.h"

// RAM - O(1)
// CPU - O(N^2)

bool is_the_same_elements(int array[], int size) {
	if (size <= 0) {
		return 0;
	}

	bool same_numbers = false;

	for (int i = 0; i < size - 1; i++) {
		for (int a = i + 1; a < size; a++)
			if (array[i] == array[a]) {
				same_numbers = true;
				break;
			}
	}
	return same_numbers;
}