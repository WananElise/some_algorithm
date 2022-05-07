#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
//常用查找算法 adjacent_find

void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(10);
	v.push_back(30);
	v.push_back(10);


	vector<int>::iterator it = adjacent_find(v.begin(), v.end());

	if (it != v.end())
	{
		cout <<"找到了邻近相同的两个元素" << *it << endl;
	}
	else
	{
		cout << "未找到邻近相同的元素" << endl;
	}



}


int main() {

	test01();
	system("pause");
	return 0;
}