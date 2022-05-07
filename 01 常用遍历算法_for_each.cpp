#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

//for_each遍历算法

//普通函数
void print01(int val)
{
	cout << val << " ";
}
//仿函数
class print02
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(50);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), print01);//普通函数
	cout << endl;
	for_each(v.begin(), v.end(), print02());//函数对象





}




int main() {

	test01();
	system("pause");
	return 0;
}