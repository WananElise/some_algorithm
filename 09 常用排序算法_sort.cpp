#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<functional>
//³£ÓÃÅÅÐòËã·¨ sort


class mycompare
{
public:

	bool operator()(int val1,int val2)
	{
		return val1 > val2;
	}
};


void print(int val)
{
	cout << val << " ";
}


void test01()
{

	vector<int>v;
	v.push_back(30);
	v.push_back(50);
	v.push_back(60);
	v.push_back(70);
	v.push_back(10);
	v.push_back(20);
	sort(v.begin(), v.end());
	cout << "ÉýÐò" << endl;
	for_each(v.begin(), v.end(), print);
	cout << endl;
	sort(v.begin(), v.end(),greater<int>());
	cout << "½µÐò" << endl;
	for_each(v.begin(), v.end(), print);


}




int main() {


	test01();

	system("pause");
	return 0;
}