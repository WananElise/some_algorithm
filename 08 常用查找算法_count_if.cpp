#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

//���ò����㷨 count_if

class greater20
{
public:

	bool operator()(int val)
	{
		return val > 20;
	}
};




//ͳ��������������
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(670);
	v.push_back(50);
	v.push_back(30);
	v.push_back(20);

	int num = count_if(v.begin(), v.end(), greater20());

		cout<< "����20Ԫ�ظ���Ϊ" << num << endl;

}

class person
{
public:

	person(string name, int age);

	string m_name;
	int m_age;

};
person::person(string name, int age)
{
	this->m_age = age;
	this->m_name = name;


}

class greaterAge20
{
public:

	bool operator()(const person &p)
	{

		return p.m_age > 20;
	}


};


//ͳ���Զ�����������
void test02()
{
	vector<person>v;
	person p1("����", 18);
	person p2("����", 28);
	person p3("����", 38);
	person p4("����", 18);
	person p5("����", 18);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	int sum = count_if(v.begin(), v.end(), greaterAge20());

	cout << sum << endl;
}


int main() {

	test02();
	//test01();
	system("pause");
	return 0;
}