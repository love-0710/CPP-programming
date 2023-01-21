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
		~base()
		{
			cout<<"BASE"<<endl;
		}
};
class b2 : public base
{
        protected:
                int a;
        public:
                b2(int z,int k):base(k)
                {
                        a=z;
                }
		~b2()
		{
			cout<<"B2"<<endl;
		}
        void display()
                {
                        cout<<a*y<<endl;
                }
};
class derived : public base
{
        public:
                int c;
                derived(int z,int d):base(d)
                {
                        c=z;
                }
                void display()
                {
                        cout<<c*y<<endl;
                }
                ~derived()
                {
                        cout<<"DESTRUCTOR IS CALLED"<<endl;
                }
};
int main()
{
        derived D(2,4);
        D.display();
	b2 B(1,3);
	B.display();
}

