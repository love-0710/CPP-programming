#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	int roll;
	char name[50];
	float mark;
public:
	Student(int a, char b[], float c)
	{
		strcpy(name,b);
		roll=a;
		mark=c;
	}
	void display()
	{
		cout<<"Name : "<<name<<"\nRoll no. : "<<roll<<"\nMarks : "<<mark<<endl;
	}

	~Student()
	{
		cout<<"\nEnd\n";
	}
};
int main()
{
	int r;
	char n[50];
	float m;
	cout<<"Enter the name: ";
	cin>>n;
	cout<<"Enter the roll: ";
	cin>>r;
	cout<<"Enter the marks: ";
	cin>>m;
	Student s(r, n, m);
	s.display();
	return 0;
}


