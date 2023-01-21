#include<iostream>
#include<cstring>
using namespace std;

struct census
{
	char city[30];
	long int pop;
	float lit;
};

int main()
{
	census s[5];
	int n,i,j;
	cout<<"Enter no. of cities:";
	cin>>n;
	cout<<"Enter the details of " << n <<"cities in the order:  city name,  population,  literacy level:\n";

	for(i=0; i<n; i++)
	{
	cin>>s[i].city>>s[i].pop>>s[i].lit;
	}
	census t;

	for(i=1; i<=n-1; i++)
	{
		for(j=1; j<=n-1; j++)
		{
			if(strcmp(s[j-1].city, s[j].city)>0)
			{
			t=s[j-1];
			s[j-1]=s[j];
			s[j]=t;
			}
		}
	}
	cout<<endl;

	for(i=0; i<n; i++)
	{
	cout<<"\n city name: " << s[i].city;
	cout<<"\n population:"<< s[i].pop;
	cout<<"\n literacy level:"<< s[i].lit;
	}
	return 0;
}
