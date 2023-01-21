#include<iostream>
#include<string.h>
using namespace std;
class String
{
	char str1[35];
	char str2[35];
	char str3[35];
public:
	String(char s1[], char s2[])
	{
		strcpy(str1, s1);
		strcpy(str2, s2);
	}
	void join()
	{
		strcpy(str3, strcat(str1, str2));
	}
	void display()
	{
		cout<<str3<<endl;
	}
};
int main()
{
	char s1[35],s2[35];
	cout<<"Enter the string 1: "<<endl;
	cin>>s1;
	cout<<"Enter the string 2: "<<endl;
	cin>>s2;
	String s(s1,s2);
	s.join();
	s.display();
	return 0;
}
