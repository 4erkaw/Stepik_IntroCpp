﻿/*
	1.5 Цикл while. Шаг 11

	Последовательность состоит из натуральных чисел и завершается числом 0. 
	Определите значение второго по величине элемента в этой последовательности, то есть элемента, 
	который будет наибольшим, если из последовательности удалить наибольший элемент.

	Формат входных данных:
	Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, 
	а служит как признак ее окончания).
	Формат выходных данных:
	Выведите ответ на задачу.
	Sample Input 1:
	4
	4
	2
	3
	0
	Sample Output 1:
	4
	Sample Input 2:
	2
	1
	0
	Sample Output 2:
	1
*/
#include <iostream>

int main() {
	while (true) {
		int n, max1 = 0, max2 = 0;
		while (std::cin >> n && n) {
			if (n >= max1) {
				max2 = max1;
				max1 = n;
			} else if (n > max2) {
				max2 = n;
			}
		}
		std::cout << max2;
	}
	return 0;
}