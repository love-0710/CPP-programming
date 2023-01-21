#include<iostream>
using namespace std;
struct student 
{
	char name;
	float marks;
	void read();
	void display();
	void sort();
};

struct student s[10];

void read()
{
	cout<<"name:";
	cin>>name;
	cout<<"roll_no.:";
	cin>>roll_no.;
	cout<<"marks:";
	cin>>marks;
}
void display()
{
	cout<<name<<"\t"<<roll_no<<"\t"<<marks<<endl;
}

int main()
{
	int n;
	cout<<"enter how many students""<<endl;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		s[i].read();
	}
	cout<<"student details are "<<endl;
	cout<<"name"<<"\t"<<"roll_no"<<"\t"<<"marks"<<endl;
	for(int i=0; i<n; i++)
	s[i].display
