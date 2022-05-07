#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

//常用的查找算法count

//统计内置数据类型

void test01()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(10);
	v.push_back(40);
	v.push_back(50);

	int ret=count(v.begin(), v.end(),10);

	cout << "元素个数为" << ret << endl;
}

//统计自定义数据类型
class person
{
public:

	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	bool operator==(const person& p) 
	{
		if (this->m_age == p.m_age && this->m_name == p.m_name) 
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	string m_name;
	int m_age;
};



void test02()
{
	vector<person>v;
	person p1("张三", 18);
	person p2("李四", 28);
	person p3("王五", 38);
	person p4("赵六", 18);
	person p5("张三", 18);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	int ret=count(v.begin(), v.end(), p1);

	cout << "相同元素个数为" << ret << endl;
}


int main() {

	//test01();
	test02();

	system("pause");
	return 0;
}