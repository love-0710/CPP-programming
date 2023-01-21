#include<iostream>

using namespace std;

class Bank {
        string name;
        int acnum;
        char type;
        float balance;
        static int numt;
        public:
		void read()
		{
	       		 cout << "\n\nWELCOME TO THE BANK\n\nEnter -";
 		         cout << "\nName: ";
       			 cin >> name;
        		 cout << "\nAccount Number: ";
                       	 cin >> acnum;
                         cout << "\nDeposit minimum starting balance: ";
        		 cin >> balance;

		}

                void checkBalance ()
		{
                	  cout << "\n\nBalance: Rs. " << balance;
                }


                void deposit (float moneyh)
		{
                        balance += moneyh;
			numt +=1;
                }

                void withdraw (float mon)
		{
                        balance -= mon;
			numt +=1;
                }

                void displaynumt ()
		{
                        cout << "\n\nNumber of transactions performed: " << numt;
                }
};

int Bank::numt = 0;

int main ()
{
	Bank x;
        int ch=1, c=1;
        char type;
        float moneyh, mon;

        cout << "\nType - \n\t1. Savings \n\t2. Current\nEnter 1 or 2: ";
        cin >> c;
        switch (c) {
                case 1:
                        type = 'a';
                        break;
                case 2:
                        type = 'b';
                        break;
                default:
                        type = 'a';
        }

   	x.read();

        while (ch) {
                cout << "\n\nChoose -\n\t1. Display balance\n\t2. Deposit\n\t3. Withdraw\n\t4. Display number of transactions\n\t5.EXIT\n\nEnter[1-5]: ";
                cin >> ch;
                switch (ch) {
                        case 1:
                                x.checkBalance();
                                break;
                        case 2:
                                cout << "\n\nEnter amount: ";
                                cin >> moneyh;
                                x.deposit (moneyh);
                                break;
                        case 3:
                                cout << "\n\nEnter amount: ";
                                cin >> mon;
                                x.withdraw (mon);
                                break;
                        case 4:
                                x.displaynumt();
                                break;
			case 5:
				exit(0);
				break;
                        default:
                                cout << "\n\nEnter valid choice!";
                }
        }

        return 0;
}

