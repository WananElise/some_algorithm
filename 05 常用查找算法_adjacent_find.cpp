#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
//���ò����㷨 adjacent_find

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
		cout <<"�ҵ����ڽ���ͬ������Ԫ��" << *it << endl;
	}
	else
	{
		cout << "δ�ҵ��ڽ���ͬ��Ԫ��" << endl;
	}



}


int main() {

	test01();
	system("pause");
	return 0;
}