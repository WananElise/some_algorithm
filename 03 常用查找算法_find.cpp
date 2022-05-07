#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<string>
//常用查找算法

class print
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}

};




//查找内置数据类型
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(20);
	sort(v.begin(), v.end());
	vector<int>::iterator it = find(v.begin(), v.end(), 30);
	if (it != v.end())
	{
		cout<<"找到该元素 ：" << *it << endl;
	}
	else
	{
		cout << "没有找到该元素" << endl;
	}

}

class person
{
public:
	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	//重载比较运算符
	bool operator==(person p)const
	{
		if ((this->m_age == p.m_age) && (this->m_name == p.m_name))
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


//查找自定义数据类型
void test02()
{
	vector<person>v;
	person p1("张三", 18);
	person p2("李四", 38);
	person p3("王五", 28);
	person p4("赵六", 38);
	person p5("小明", 48);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	vector<person>::iterator it = find(v.begin(), v.end(), p1);
	if (it != v.end())
	{
		cout << "找到该元素 ：" << it->m_age<< endl;
	}
	else
	{
		cout << "没有找到该元素" << endl;
	}



}


int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}