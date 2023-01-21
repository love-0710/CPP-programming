#include<iostream>
using namespace std;
class Stack
{
	int stack[5];
	top=-1;
public:
	friend Stack operator+(stack, int);
	friend Stack operator--(stack, int);
	void display()
	{
		if(top==-1)
		{
			cout<<"\nStack is empty\n";
			return;
		}
		cout<<"\nstack:";
		for(int i=0, i<=top; i++)
			cout<<stack[i]<<" ";
		cout<<"\n";
	}
};
Stack operator+(stack a, int b)
{
	if(a.top==4)
	{
		cout<<"stack overflow\n";
		return a;
	}
	a.stack[++a.top]=b;
	return a;
}
Stack operator--(stack a, int)
{
	if(a.top==-1)
	{
		cout<<"stack underflow\n";
		return a;
	}
	cout<<"popped element : "<<a.stack[a.top--]<<endl;
	return a;
}
int main()
{
	int c=0;
	stack a;
	while(c!=4)
	{
		cout<<"Enter 1 to push\n2 to pop\n3 to display\n4 to exit\n";
		cin>>c;
	switch(c)
		{
		case 1: int element;
			cout<<"enter element to push"<<endl;
			cin>>element;
			a=a+element;
			break;
		case 2:a=a--;
			break;
		case 3: a.display();
		}
	}
	
