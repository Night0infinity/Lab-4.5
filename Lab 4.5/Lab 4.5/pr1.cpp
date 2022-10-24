#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	srand((unsigned)time(NULL));
	cout << "R = "; cin >> R;
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if ((x * x + y * y <= R * R && y >= 0 && x >= 0)
			|| (x * x + y * y <= R * R && y <= 0 && x >= 0)
			|| (y >= 0 && x <= 0 && y <= R && y >= -x)
			|| (y <= 0 && x <= 0 && y >= -R && y <= -x))

			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

		for (int i = 0; i < 10; i++)
		{
			x = -R + rand() * 2*R /RAND_MAX;
			y = -R + rand() * 2 * R / RAND_MAX;
			if ((x * x + y * y <= R * R && y >= 0 && x >= 0)
				|| (x * x + y * y <= R * R && y <= 0 && x >= 0)
				|| (y >= 0 && x <= 0 && y <= R && y >= -x)
				|| (y <= 0 && x <= 0 && y >= -R && y <= -x))

				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}