#include<iostream>
using namespace std;
class TIME
{
	float hours;
	int min, x;
public:
	void read()
	{
		cout<<"enter the value of hours:"<<endl;
		cin>>hours;
		cout<<"enter the value of minutes:"<<endl;
		cin>>min;
	}
	void display()
	{
		cout<<hours<<":"<<min<<endl;
	}
	TIME add(TIME t1, TIME t2)
	{
		hours=t1.hours + t2.hours;
		min=t1.min + t2.min;
		if(min>=60)
		{
			min-=60;
			hours+=1;
		}
		return t1;
	}
	TIME add(TIME t1, int x)
	{
		hours= t1.hours;
		min=t1.min + x;
	 	if(min>=60)
                {
                        min-=60;
                        hours+=1;
                }
                return t1;
	}
};
int main()
{
	TIME t1, t2,r1,r2;
	int x;
	cout<<"enter the value of x:";
	cin>>x;
	t1.read();
	t2.read();
	t2=t1.add(t1,t2);
	t1=t1.add(t1,x);
	t1.display();
	t2.display();
	
}

