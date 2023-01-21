#include<iostream>
using namespace std;
class employee
{
	int emp_num, basic, gross_sal;
	float da, it, net_sal;
	string emp_name;

public:
	void read()
	{
		cout<<"Employee_name is:";
		cin>>emp_name;
		cout<<"Enter the basic:";
		cin>>basic;
		cout<<"enter the gross salary:";
		cin>>gross_sal;
	}
	void calc()
	{
		da=0.52*basic;
		it=0.3*gross_sal;
		net_sal=(gross_sal + basic)-da-it;
	}
	void disp()
	{
		cout<<endl<<"The net salary is:"<<net_sal<<endl;
	}
};
int main()
{
	employee a;
	a.read();
	a.calc();
	a.disp();
	return 0;
}
