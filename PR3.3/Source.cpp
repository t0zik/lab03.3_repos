// Lab_03_3.cpp
// < Товарницький Назарій Володимирович >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 16
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент

		double R; // вхідний параметр
		double R2;// вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "R2 = "; cin >> R2;

	// розгалуження в повній формі
	if (x <= -R)
		y = x - R;
	else
		if (-R < x && x <= 0)
			y = R + sqrt(R * R - x * x);
		else
			if (0 < x && x <= R2)
				y = R2 - sqrt(R2 * R2 - x * x);
			else
				if (R2 < x && x <= 4)
					y = -R;
				else
					y = -R + R / 2 * (x - 4);
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}