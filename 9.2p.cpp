#include<iostream>
using namespace std;
class complex
{
        int x, y;
public:
        void input()
        {
                cin>>x>>y;
        }
        void display()
        {
                cout<<x<<"+"<<y<<"i\n";
        }
        friend complex operator+ (int a, complex s1);
        friend complex operator+ (complex s1, int a);
};

complex operator+ (int a, complex s1)
{
        complex temp;
        temp.x=a + s1.x;
        temp.y = s1.y;
        return temp;
}

complex operator+ (complex s1, int a)
{
        complex temp;
        temp.x = a + s1.x;
        temp.y = s1.y;
        return temp;
}

int main()
{
        complex s1, s2, s3;
        int n;
        cout<<"enter real and imaginary part respectively:" ;
        s1.input();
        cout<<"enter integer : ";
        cin>>n;
        s2= n + s1;
        s3 = s1+ n;
        cout<<" input: " ;
        s1.display();
        cout<< "output: \n";
        s2.display();
        s3.display();
}


