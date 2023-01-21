#include<iostream>
using namespace std;
class complex
{
	int a, b;
public:
	void input()
	{
		cin>>a>>b;
	}
	void display()
	{
		cout<<a<<"+"<<b<<"i\n";
	}
	friend complex operator+ (int x, complex t);
	friend complex operator+ (complex t, int x);
};

complex operator+ (int x, complex t)
{
	complex temp;
	temp.a=x + t.a;
	temp.b = t.b;
	return temp;
}

complex operator+ (complex t, int x)
{
	complex temp;
	temp.a = x + t.a;
	temp.b = t.b;
	return temp;
}

int main()
{
	complex s1, s2, s3;
	int x;
	cout<<"enter real and imaginary part respectively:" ;
	s1.input();
	cout<<"enter integer : ";
	cin>>x;
	s2= x + s1;
	s3 = s1+ x;
	cout<<" input: " ;
	s1.display();
	cout<< "output: \n";
	s2.display();
	s3.display();
}
