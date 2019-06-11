﻿/*
	1.5 Цикл while. Шаг 13

	Последовательность Фибоначчи определяется так:
	F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
	Дано натуральное число A. Определите, каким по счету числом Фибоначчи оно является, 
	то есть выведите такое число N, что F(N) = A. Если А не является числом Фибоначчи, выведите число -1.

	Формат входных данных
	Вводится натуральное число A > 1.
	Формат выходных данных
	Выведите ответ на задачу.
	Sample Input: 8
	Sample Output: 6
*/
#include <iostream>

int main() {
	while (true) {
		int a, i = 1, f = 0, fn = 1;
		std::cin >> a;
		while (fn < a) {
			fn += f;
			f = fn - f;
			i++;
		}
		if (fn == a) {
			std::cout << i;
		} else {
			std::cout << -1;
		}
	}
	return 0;
}