#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
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
	vector<int>vTarget;
	//目标容器提前开辟空间
	//最特殊情况就是两个容器没有交集，并集就是两个容器size相加
      vTarget.resize(v1.size() + v2.size());
      vector<int>::iterator end=set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	  cout << "v1和v2的并集为:" << endl;
	  for_each(vTarget.begin(), end, myprint);
	  cout << endl;

}


int main() {

	test01();

	system("pause");
	return 0;
}