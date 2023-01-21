#include<iostream>
using namespace std;
class circle
{
	int rad;
	float area;
	const float pi=3.14;

public:
	void read()
	{
		cout<<"Enter the radius of the circle:";
		cin>>rad;
	}
	void calc()
	{
		area=rad*rad*pi;
	}
	void display()
	{
		cout<<"Area of the circle is: " <<area<<endl;
	}
};

int main()
{
	circle ob1;
	ob1.read();
	ob1.calc();
	ob1.display();
	return 0;
}
