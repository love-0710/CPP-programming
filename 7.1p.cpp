#include<iostream>
using namespace std;
class db;
class dm
{
public:
	int meter, centi;
	void read()
	{
		cin>>meter>>centi;
	}
	friend void sum(dm x, db y);
	friend void add(dm x, db y);
};
class db
{
	public:
		int feet, inch;
		void read()
		{
			cin>>feet>>inch;
		}
	friend void sum(dm x,db y);
	friend void add(dm x,db y);
};

	void sum(dm x, db y)
	{
		int cm, m;
		cm=x.centi + 100*x.meter + 30*y.feet +2.54*y.inch;
		m=cm/100;
		cm=cm%100;
		cout<<"\n"<<m<<"meter and"<<cm<<"centimeters";
	}
	void add(dm x, db y)
	{
		int f, i;
		i=y.inch +12*y.feet + 40*x.meter +0.4*x.centi;
		f=i/12;
		i=i%12;
		cout<<"\n"<<f<<"feet and "<<i<<"inches";
	}
int main()
{
	dm x;
	db y;
	cout<<"Enter meters and centimeters respectively: ";
	x.read();
	cout<<"Enter feet & inches respectively:";
	y.read();
	sum(x,y);
	add(x,y);
}
