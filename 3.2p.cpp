#include<iostream>
using namespace std;
class employee
{
	char name[20];
	int emp_code;
public:
	int grosssal;
	void read()
	{
		cout<<"Enter name: ";
		cin>>name;
		cout<<"Enter employee code: ";
		cin>>emp_code;
		cout<<"Enter gross salary: ";
		cin>>grosssal;
	}
	void display()
	{
		cout<<"\nName: "<<name;
		cout<<"\nEmployee code: "<<emp_code;
		cout<<"\nGross salary: "<<grosssal<<endl;
	}
};
int main()
{
	employee a[10];
	employee temp;
	cout<<"Enter details:\n";
	for(int i=0; i<3; i++)
	{
		a[i].read();
	}
		for(int i=0;i<3;i++)
		{
			a[i].display();
		}
	for(int i=0; i<3; i++)
	{
		for(int j=0;j<3-i-1;j++)
		{
			if(a[j].grosssal>a[j+1].grosssal)
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"\n\n Maximum gross salary:\n";
	a[2].display();
	cout<<"\n\n Minimum gross salary:\n";
	a[0].display();
	return 0;
}
