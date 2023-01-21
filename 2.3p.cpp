#include<iostream>
using namespace std;
class student
{
	public:
		char name[20];
		int reg;
		float m1, m2, m3;
		void get_input()
		{
			cout<<"Enter the student name: ";
			cin>>name;
			cout<<"Enter registration number: ";
			cin>>reg;
			cout<<"Enter marks in maths: ";
			cin>>m1;
			cout<<"Enter marks in physics: ";
			cin>>m2;
			cout<<"Enter marks in data structure: ";
			cin>>m3;
		}
	float average()
	{
		float avg=(m1 + m2+ m3)/3;
		return avg;
	}
	void display()
	{
		cout<<"Name: "<<name<<"\t reg. no.: "<<reg<<endl;
		cout<<"marks in maths: " <<m1 <<endl<<"marks in Physics: "<<m2<<endl<<"marks in data structure: "<<m3<<endl;
		cout<<"\n Average marks: "<<average();
	}
};
int main()
{
	student a;
	a.get_input();
	a.average();
	a.display();
}
