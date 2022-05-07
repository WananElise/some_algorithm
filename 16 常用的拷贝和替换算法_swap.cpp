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
	vector<int>v1;
	vector<int>v2;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v2.push_back(100);
	v2.push_back(200);
	v2.push_back(300);
	cout << "交换前" << endl;
	for_each(v1.begin(), v1.end(), print);
	cout << endl;
	for_each(v2.begin(), v2.end(), print);
	cout << endl;
	swap(v1, v2);
	cout << "交换后" << endl;
	for_each(v1.begin(), v1.end(), print);
	cout << endl;
	for_each(v2.begin(), v2.end(), print);
	cout << endl;
}



int main() {

   test01();
	system("pause");
	return 0;
}