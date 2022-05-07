#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

template<typename T>
void myPrint(T& t)
{
	for (typename T::iterator it = t.begin(); it != t.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

class Transform
{
public:
	int operator()(int val)
	{
		return val+100;
	}

};
class print
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

	for (int i = 0; i < 10; i++)
	{
		
		v.push_back(i+1);
		
	}
	myPrint(v);

	vector<int>v1;
	v1.resize(v.size());
	transform(v.begin(), v.end(), v1.begin(), Transform());
	for_each(v1.begin(), v1.end(),print());

}

int main() {

	test01();

	system("pause");
	return 0;
}