#include<iostream>
using namespace std;
class STACK
{
	int a[20], size, item;
	int push(int, int, int*);
	int pop(int*, int*);
	void disp(int, int[],int);
public:
	void read()
	{
		{
		cout<<"Enter the size of the stack: ";
		cin>>size;
		}
		 while(ch!=4)
		        {
                		cout<<"Enter the choice: \n 1) PUSH \n 2)POP \n 3)DISPLAY \n 4)EXIT \t ....   ";
                		cin>>ch;
               			switch(ch)
                		{
                        		case 1:
                                		top=push(top, size,&a);
                                		break;
                        		case 2: num=pop(&top,&a);
                                		if(num!=-1)
`                                        	cout<<"The number popped out is: "<<num;
                                		break;
                        		case 3: disp(size, a,top);
                                		break;
             			}
       			 }

	}

	int push(int top, int size, int* a)
	{
		 if(top>=size)
       		 {
               		 cout<<"Stack is full  ";
        	 }
        	else
        	{
                	cout<<"Enter the item to be pushed: ";
                	cin>>item;
                	top++;
                	*(a+top)=item;
        	}
        	return top;
	}

	int pop(int* top, int* a)
	{
	        if(*top==-1)
	        {
	                cout<<"stack overflow: ";
	                return -1;
	        }
	        else
	        {
	                int item=*(a+*top);
	                *top-=1;
	                return item;
	        }
	}

	void disp(int size, int a[],int top)
	{
        	for(int i=0; i<=top; i++)
        	cout<<"Elements "<< i << a[i];
	}
};

int main()
{
	STACK x;
	x.read();
	x.push(int top, int size, int* a);
	x.pop(int* top, int* a);
	x.disp(int size, int a[],int top);
	return 0;
}
