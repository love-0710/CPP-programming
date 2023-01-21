#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		void read()
		{
			cout<<"Enter the real number: ";
			cin>>real;
			cout<<"Enter an imaginary number: ";
			cin>>img;
		}
		void display()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}

		void add(complex c1, complex c2)
		{
			real=c1.real+c2.real;
			img=c1.img+c2.img;
		}
		void add(complex c2, int x)
		{
			real=c2.real+x;
			img=c2.img;
		}
};
int main()
{
	complex c1, c2, c3, c4;
	cout<<"Complex 1 : \n";
	c1.read();
	cout<<"Complex 2 : \n";
	c2.read();

	c3.add(c1,c2);

	cout<<"\nSum of complex :";
	c3.display();

	int x;
	cout<<"\nEnter integer no. : ";
	cin>>x;
	c4.add(c2,x);

	cout<<"Sum of complex & integer: ";
	c4.display();
return 0;
}
