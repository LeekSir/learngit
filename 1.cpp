/*************************************************************************
    > File Name: 1.cpp
    > Author: leeksir
    > Mail: leek9527@163.com 
    > Created Time: 2017年12月15日 星期五 15时59分05秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class stu{
public:
	stu(string n=NULL,int a=0):name(n),age(a){

	}
	void ShowStu()
	{
		cout<< "name: " << name << ", age: " << age << endl;
	}
	void growup()
	{
		age++;
	}

private:
	string name;
	int age;

};

template <class T>
void print(T b, T e)
{
	while(b != e)
	{
		cout << *b++ << " ";
	}
	cout << endl;
}

int main()
{
	int aa[10] = {
		0,4,2,1,3,8,6,7,9,5
	};
	print(aa,aa+10);
	vector <int> arr(aa,aa+10);
	vector <int>::iterator it;
	it = arr.begin();
	print(arr.begin(), arr.end());
	stu a("红红", 20);
	//cout << a << endl;
	a.ShowStu();
	a.growup();
	a.ShowStu();

	return 0;
}
