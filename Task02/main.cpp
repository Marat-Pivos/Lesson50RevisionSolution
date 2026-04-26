#include "logic.h"

int main(){
	srand(time(0));
	int array[DEF_SIZE];

	for (int i = 0; i < DEF_SIZE; i++) {
		array[i] = rand() % 100 + 1;
		cout << array[i] << " ";
	}

	double sum = get_sum_of_average_elements(array);
	
	cout << "The sum of average elements: " << sum << endl;
	return 0;
}