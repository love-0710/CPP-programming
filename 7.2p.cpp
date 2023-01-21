#include<iostream>
using namespace std;
class min_max;
class twovalues
{
	int a, b;
public:
	twovalues()
	{
		cout<<"Enter  values: ";
		cin>>a>>b;
	}
	friend min_max;
};
class min_max
{
	public:
		void calc(twovalues x)
		{
			if(x.a>x.b)
				cout<<x.a<<"is greater and "<<x.b<<" is smaller";
			else
				cout<<x.b<<"is greater and "<<x.a<<"is smaller";
		}
};
int main()
{
	twovalues x;
	min_max y;
	y.calc(x);
	return 0;
}
