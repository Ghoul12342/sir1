#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "russian");
	//Series7. ƒано целое число N и набор из N вещественных чисел. ¬ывести в том же пор€дке округленные значени€ всех чисел из данного набора(как целые числа), а также сумму всех округленных значений.
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