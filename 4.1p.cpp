#include<iostream>
#include<cmath>
using namespace std;
class c_power
{
public:
	double power(double m, int n=2)
	{
		return(pow(m,n));
	}
	int power(int m, int n)
	{
		return(pow(m,n));
	}
};
int main()
{
	int num, n;
	double m;
	c_power a;
	cout<<"Enter the value of m (floating point) : ";
	cin>>m;
	cout<<"Enter the value of m (integer) : ";
	cin>>num;
	cout<<"Enter the value of n : ";
	cin>>n;
	cout<<"\nFloat calculation: \n";
	cout<<"\nValue of m^n: "<<a.power(m,n);
	cout<<"\nValue of m^2: "<<a.power(m,2);
	cout<<"\n Integer calculation: ";
	cout<<"\n Value of m^n: "<<a.power(num,n)<<endl;
	return 0;
}

