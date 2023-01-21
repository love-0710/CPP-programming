#include<isostream>
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
	cout<<"enter the details of "<< n << "cities
