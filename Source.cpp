#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "russian");
	//Series7. ���� ����� ����� N � ����� �� N ������������ �����. ������� � ��� �� ������� ����������� �������� ���� ����� �� ������� ������(��� ����� �����), � ����� ����� ���� ����������� ��������.
	double i, n, s, sum;
	cin >> n;
	for (i = 1; i <= n; i = i + 1) {
		cout << i << "";
		s = s * 10;
		s = round(s);
		cout << s << endl;
	}
	sum = sum + s;
}