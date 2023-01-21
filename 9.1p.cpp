#include<iostream>
using namespace std;
class Space
{
	int x, y, z;
public:
	void getdata()
	{
		cout<<"Enter the value of x, y, z: ";
		cin>>x>>y>>z;
	}
	void display()
	{
		cout<<"\nThe value of X: "<<x<<"\nThe value of Y: "<<y<<"\nThe value of Z: "<<z<<endl;
	}
	void  operator-()
	{
		x=-x;
		y=-y;
		z=-z;
	}
};
int main()
{
	Space t;
	t.getdata();
	-t;
	t.display();
}
