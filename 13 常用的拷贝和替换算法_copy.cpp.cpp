#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>



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
	vector<int>v1;
	v1.resize(v.size());
	copy(v.begin(), v.end(), v1.begin());
	for_each(v1.begin(), v1.end(), print);
}

int main() {
	test01();
	system("pause");
	return 0;
}