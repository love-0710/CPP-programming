#include<iostream>
using namespace std;
class book
{
	char title[20], author[20];
	int price;
public:
	int isbn;
	void read()
	{
		cout<<"Enter ISBN: ";
		cin>>isbn;
		cout<<"Enter title: ";
		cin>>title;
		cout<<"Enter author name: ";
		cin>>author;
		cout<<"Enter price: ";
		cin>>price;
	}
	void display()
	{
		cout<<"\n ISBN: "<<isbn;
		cout<<"\n TITLE: "<<title;
		cout<<"\n AUTHOR: "<<author;
		cout<<"\n PRICE: "<<price;
	}
};
int main()
{
	int isbn;
        book a[10];
        int n, flag=0;
        cout<<"Enter no. of books:\n";
	cin>>n;
        for(int i=0; i<n; i++)
        {
                a[i].read();
        }
	cout<<"Enter ISBN to be searched: ";
	cin>>isbn;
                for(int i=0;i<n;i++)
                {
                        if(isbn==a[i].isbn)
			{
					cout<<"\n Book Found\n";
					a[i].display();
					flag=1;
					break;
			}
		}
		if(flag==0)
		{
			cout<<"\n Book not found \n";
		}
		return 0;
}
