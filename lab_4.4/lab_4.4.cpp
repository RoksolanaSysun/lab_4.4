#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double xp;
	double xk;
	double dx;
	double R; // вхідний параметр
	double y; // результат обчислення виразу

	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp ;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x < -R) {
			y = x + R;
		}
		else
			if (x >= -R && x <= 0) {
				y = sqrt(R * R - x * x);
			}
			else
				if (x > 0 && x <= 6) {
					y = R - (R * x) / 6;
				}
				else {
					y = x - 6;
				}
		cout << "|" << setw(5) << x << " |"
			<< setw(7) << y << " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
