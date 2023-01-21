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
class b2 : public base
{
        protected:
                int a;
        public:
                b2(int z,int k):base(k)
                {
                        a=z;
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
};
int main()
{
	derived D(1,2);
	b2 B(2,3);
	D.display();
	B.display();
}
