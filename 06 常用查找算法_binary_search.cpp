#include<iostream>
using namespace std;
#include<algorithm>
#include<set>


void test01()
{
	set<int>s;
	s.insert(6);
	s.insert(2);
	s.insert(3);
	s.insert(4);
	s.insert(5);
	s.insert(1);
   bool ret=binary_search(s.begin(), s.end(),3);

   if (ret)
   {
	   cout << "�ҵ���Ԫ��" << endl;
   }
   else
   {
	   cout << "û���ҵ�Ԫ��" << endl;
    }




}



int main() {

	test01();

	system("pause");
	return 0;
}