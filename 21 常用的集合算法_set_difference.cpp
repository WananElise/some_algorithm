#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

void myprint(int val)
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
	vector<int>vTarget;//目标容器
	//最特殊的情况两个容器没有交集 取两个容器中大的size作为目标容器开辟空间
	vTarget.resize(max(v1.size(),v2.size()));
	cout << "v1和v2的差集为:" << endl;
	vector<int>::iterator end1= set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), end1, myprint);
	cout << endl;
	cout << "v2和v1的差集为:" << endl;
	vector<int>::iterator end2 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
	for_each(vTarget.begin(), end2, myprint);
	cout << endl;
}


int main() {

	test01();


	system("pause");
	return 0;
}