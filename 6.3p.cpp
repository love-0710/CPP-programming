#include<iostream>

using namespace std;
class love {
		int a;
	static int hello;
public:	static void kumar()
		{
		a=10;
		cout<<"A"<<a<<endl;
		hello=100;
		cout<<"hello"<<hello<<endl;
		}
};
int love::hello;
int main(){
	love s;
	s.kumar();
	return 0;
}
