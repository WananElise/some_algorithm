#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


void myprintf(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


void print(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i); //0-9
		v2.push_back(i + 5); //5-14
	}
	myprintf(v1);
	myprintf(v2);
	vector<int>vTarget;
	//最特殊的情况就是两个大容器 包含了小容器
	int a = v1.size() < v2.size() ? v1.size() : v2.size();//三目运算符判断谁更小
	vTarget.resize(min(v1.size(),v2.size()));
	vector<int>::iterator end=set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), end, print);

}


int main() {


	test01();

	system("pause");
	return 0;
}