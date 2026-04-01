
#include <vector>
#include <iostream>
using namespace std;
void main()
{
	vector <float> diem;

	diem.push_back(6);
	diem.push_back(7.5);
	diem.push_back(4.2);
	diem.push_back(6.4);
	diem.push_back(5.9);

	diem.pop_back();
	for (int i = 0; i < diem.size(); i++)

	{
		cout << diem[i] << endl;
	}
}

