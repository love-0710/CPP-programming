#include<iostream>
using namespace std;
class student
{
public:	int usn;
	char name[30];
	float mark[3],sum=0, avg=0, temp;

		void read()
		{

			cout<<"Enter the name of the student: ";
			cin>>name;
			cout<<"Enter USN number: ";
			cin>>usn;
			cout<<"Enter the subkject marks: ";
			for(int i=0; i<3; i++)
			{
				cin>>mark[i];
			}
				cout<<endl;
		}
		void avg1()
		{
			for(int i=0; i<3; i++)
			{
				for(int j=0; j<3-i-1; j++)
				{
					if(mark[j]<mark[j+1])
					{
						temp=mark[j];
						mark[j]=mark[j+1];
						mark[j+1]=temp;

					}
				}
			}
			sum = mark[0]+mark[1];
			avg = sum/2;
		}
		void display()
		{
			cout<<"USN: "<<usn<<endl<<"Name: "<<name<<endl<<"Avg marks: "<<avg<<endl;
		}
};
int main()
{
	student a[10];
	for(int i=0; i<10; i++)
	{
		a[i].read();
	}
	for(int j=0; j<10; j++)
	{
		a[j].avg1();
	}
	for(int k=0; k<10; k++)
	{
		a[k].display();
	}
}
