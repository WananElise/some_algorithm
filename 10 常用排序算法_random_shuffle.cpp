#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<ctime>

//ϴ���㷨 random_shuffle

//��ӡ����ģ��
template<typename T>
void myprint(const T& t)
{

	for (typename T::const_iterator it = t.begin(); it != t.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}






void test01()
{

	srand((unsigned int)time(NULL));
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i + 1);
		
	}
	myprint(v);
	//ϴ�ƴ���˳��
	random_shuffle(v.begin(), v.end());
	myprint(v);


}



int main() {




	test01();
	system("pause");
	return 0;
}