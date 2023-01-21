#include<iostream>
using namespace std;

class base
{
        protected:
                int y;
        public:
                base(int x)
                {
                        y=x;
                }
};
class b2
{
        protected:
                int a;
        public:
                b2(int z)
                {
                        a=z;
                }
};
class derived : public base, public b2
{
        public:
                int c;
                derived(int z,int d,int b):base(z),b2(b)
                {
                        c=d;
                }
                void display()
                {
                        cout<<c*y*a<<endl;
                }
		~derived()
		{
			cout<<"DESTRUCTOR IS CALLED"<<endl;
		}
};
int main()
{
	derived D(1,2,3);
	D.display();
}


