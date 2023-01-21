#include<iostream>
using namespace std;
class array
{
	int a;
public:
	array()
	{
		a=0;
	}
	array(int b)
	{
		a=b;
	}
	void display(array m[])
	{
		for(int i=0; i<=4; i++)
		cout<<m[i].a<<endl;
	}
};
int main()
{
	array n[5];
	array m[]={array(1), array(2), array(3), array(4), array(5)};
	n[0].display(n);
	n[0].display(m);
	return 0;
}
