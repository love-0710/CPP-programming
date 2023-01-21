#include<iostream>
using namespace std;
class Distance
{
	int m,cm;
	public:
		void input()
		{
			cout<<"Enter meter and centimeter respectively :  ";
			cin>>m>>cm;
		}
		friend Distance operator+ (Distance x, Distance y);
		void display()
		{
			cout<<m<<"meter and "<<cm<<"centimeter"<<endl;
		}
};
Distance operator+ (Distance x, Distance y)
{
	Distance z;
	z.cm = x.cm + y.cm;
	z.m =  z.cm/100;
	z.cm = z.cm%100;
}

int main()
{
	Distance a;
	a.input();
	a.display();
}
