#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


void print(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	cout << "��תǰ" << endl;
	for_each(v.begin(), v.end(), print);
	cout << endl;
	cout << "��ת��" << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), print);
	cout << endl;
}


int main() {

	test01();
	system("pause");
	return 0;
}