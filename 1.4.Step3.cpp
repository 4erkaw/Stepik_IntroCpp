/*
	1.4 �������� ��������. ��� 3

	���� ��� ����� �����. �������� �������� ����������� �� ���. ���� ����� �����, �������� ����� �� ���.

	������ ������� ������:
	�������� ��� �����.

	������ �������� ������:
	�������� ����� �� ������.

	Sample Input 1: 1 2
	Sample Output 1: 2
	Sample Input 2: 5 3
	Sample Output 2: 5
*/
#include <iostream>

using namespace std;

int main() {
	int a, b;
	while (true) {
		cin >> a >> b;
		if (a > b) {
			cout << a << endl;
			cout << endl;
		}
		else {
			cout << b << endl;
			cout << endl;
		}
	}
}