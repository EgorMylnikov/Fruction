#include <iostream>
using namespace std;
class Fraction
{
	int a;
	int b;

public:
	
	int separated(int a, int b)
	{
		if (b == 0)
		{
			return 0;
		}
		else
		{
			return a / b;
		}
	}
	int main()
{
	setlocale(LC_ALL, "Rus");
	Fraction;
	int a;
	int b;

	cout << "\t ������� ���������" << endl;
	cin >> a;
	cout << "\t �� �����"<< a << endl;
	cout << "\t ������� �����������" << endl;
	cin >> b;
	cout << "\t �� �����" << b << endl;
	cout << separated(a, b) << endl;

	
	


}
};
