/*
	1.4 �������� ��������. ��� 4

	���� ��� ����� �����. ��������� ������ ������� �������, ���� ������ ����� ������ �������, 
	������, ���� ������ ������ �������, ��� ����, ���� ��� �����.

	������ ������� ������:
	�������� ��� �����.
	������ �������� ������:
	�������� ����� �� ������.

	Sample Input: 1 2
	Sample Output:2
*/
#include <iostream>

using namespace std;

int main() {
	int a, b;
	while (true) {
		cin >> a >> b;
		if (a > b) {
			cout << 1 << endl << endl;
		} else if (a < b) {
			cout << 2 << endl << endl;
		} else {
			cout << 0 << endl << endl;
		}
	}
}