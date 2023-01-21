#include<iostream>
using namespace std;
struct date
{
	int day, month, year;
};
	void validate(struct date );
	void display(struct date );
	int main()
{
	date d;
	cout<<"enter day:";
	cin>>d.day;
	cout<<"enter month in integer:";
	cin>>d.month;
	cout<<"enter year:";
	cin>>d.year;

	validate(d);
}

void validate(struct date d)
{
	if(d.day>31 || d.day<1)
	cout<<"error: the day should be between 1 to 31";
	else
	if(d.month>12 || d.month <1)
	cout<<"error: the month should be between 1 to 12 only";
	else
	if(d.month==2)
	{
		if(d.day==29)
		{
		if(d.year %4 !=0)
		cout<<d.year<<"is not a leap year";
		else
		display(d);
		}
		else
		{
		if(d.day>29)
		cout<<"INVALID .... february has only 28 or 29 days";
		else
		display(d);
		}
	}
		else
		if(d.month==4)
		{
		if(d.day>30)
		cout<<"INVALID .... april has only 30 days";
		}
			else
			if(d.month==9)
			{
			if(d.day>30)
			cout<<"INVALID  .....september has only 30 days";
			}
		else
		if(d.month==11)
		{
			if(d.day>30)
			cout<<"INVALID .....november has 30 days";
		}
		else
		if(d.month==6)
		{
			if(d.day>30)
			cout<<"INVALID .....june has only 30 days";
		}
		else
		display(d);
}

void display(struct date d)
{
	switch(d.month)
	{
		case 1: cout<<"january"<<d.day<<" "<<d.year;
			break;
		case 2: cout<<"february"<<d.day<<" "<<d.year;
			break;
		 case 3: cout<<"march"<<d.day<<" "<<d.year;
                        break;
		 case 4: cout<<"april"<<d.day<<" "<<d.year;
                        break;

		 case 5: cout<<"may"<<d.day<<" "<<d.year;
                        break;\

		 case 6: cout<<"june"<<d.day<<" "<<d.year;
                        break;

		 case 7: cout<<"july"<<d.day<<" "<<d.year;
                        break;

		 case 8: cout<<"august"<<d.day<<" "<<d.year;
                        break;

		 case 9: cout<<"september"<<d.day<<" "<<d.year;
                        break;

		 case 10: cout<<"october"<<d.day<<" "<<d.year;
                        break;

		 case 11: cout<<"november"<<d.day<<" "<<d.year;
                        break;

		 case 12: cout<<"december"<<d.day<<" "<<d.year;
                        break;
	}
}
