#include<iostream>
using namespace std;
#include<vector>
#include<numeric>
#include<algorithm>
void print(int val)
{
	cout << val << " ";
}
void test01()
{

	vector<int>v;
	v.resize(10,20);

	for_each(v.begin(), v.end(), print);
	cout << endl;
	//fillÌî³ä
	fill(v.begin(), v.end(), 50);
	for_each(v.begin(), v.end(), print);
	cout << endl;


}

int main() {

	test01();
	system("pause");
	return 0;
}