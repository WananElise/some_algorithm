#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<set>


//≥£”√≈≈–ÚÀ„∑® merge

void print(const int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>s1;
	s1.push_back(10);
	s1.push_back(20);
	s1.push_back(30);
	s1.push_back(40);
	s1.push_back(50);
	s1.push_back(60);
	vector<int>s2;
	s2.push_back(100);
	s2.push_back(200);
	s2.push_back(300);
	s2.push_back(400);
	s2.push_back(500);
	vector<int>s3;
	s3.resize(s1.size()+s2.size());
	merge(s1.begin(), s1.end(), s2.begin(), s2.end(), s3.begin());
	for_each(s3.begin(), s3.end(), print);


}



int main() {
	test01();

	system("pause");
	return 0;
}