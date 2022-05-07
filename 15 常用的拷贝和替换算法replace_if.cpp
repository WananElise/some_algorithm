#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


void print(int val)
{
	cout << val << " ";
}

class greater30
{
public:

	bool operator()(int val)
	{
		return val > 30;
	}
};


void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);
	cout << "Ìæ»»Ç°" << endl;
	for_each(v.begin(), v.end(), print);
	cout << endl;
	replace_if(v.begin(), v.end(), greater30(), 3000);
	cout << "Ìæ»»ºó" << endl;
	for_each(v.begin(), v.end(), print);
	cout << endl;






}



int main() {

	test01();
	system("pause");
	return 0;
}