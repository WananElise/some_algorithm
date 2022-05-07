#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

//���ò����㷨find_if

class greaterFIve
{
public:

	bool operator()(int val) const
	{
		return val > 5;
	}

};



//����������������
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i+1);
	}
	vector<int>::iterator it= find_if(v.begin(), v.end(), greaterFIve());

	if (it == v.end())
	{
		cout << "û���ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ���:" << *it << endl;
	}

}


class person
{
public:

	person(string name, int age) {

		this->m_name = name;
		this->m_age = age;

	}

	string m_name;
	int m_age;

};

class greater1
{
public:

	bool operator()(person &p) const
	{
		return p.m_age < 19;
	}

};

class mycompare
{
public:

	bool operator()(person& p1,person &p2) const
	{
		return p1.m_age > p2.m_age;
	}

};

class print
{
public:

	void operator()(person& p) const
	{
		cout << "������" << p.m_name << " ���䣺" << p.m_age << endl;
		
	}


};


//�����Զ�����������
void test02()
{
	vector<person>v;
	person p1("����", 18);
	person p2("����", 19);
	person p3("����", 28);
	person p4("����", 38);
	person p5("С��", 48);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);



	sort(v.begin(), v.end(), mycompare());

	for_each(v.begin(), v.end(), print());

	vector<person>::iterator it= find_if(v.begin(), v.end(),greater1());

	if (it != v.end())
	{
		cout << "�ҵ���" << "������" << it->m_name << " ���䣺" << it->m_age << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}

}



int main() {

	//test01();
	test02();

	system("pause");
	return 0;
}