#include<conio.h>
#include<iostream>
#include<string>
using namespace std;
//class bank
class Bank{
    //private membre variables
private:
    long int account_No;
	string name;
	int PIN;
	double balance;
	string mobile_No;
	//public member function
public:
    //setData function is setting the Data into the private member variables
    void setData(long int account_No_a,string name_a,int PIN_a,double balance_a,string mobile_No_a){
    account_No = account_No_a;
    name =  name_a;
    PIN = PIN_a;
    balance = balance_a;
    mobile_No = mobile_No_a;}
    //getAccountNo function is returning the user's account no.
    long int getAccount(){
    return account_No;}
    //getAccountNo function is returning the user's name.
    string getName(){
    return name;}
    //getAccountNo function is returning the user's PIN.
    int getPIN(){
    return PIN;}
    //getAccountNo function is returning the user's Bank balance.
    double getBalance(){
    return balance;}
    //getAccountNo function is returning the user's mobile_No.
    string getMobile_No(){
    return mobile_No;}

	//setMobile function is Updating the user mobile no.
	void setMobile(string mobile_No_prev,string mobile_No_new){
	if(mobile_No_prev == mobile_No){
        mobile_No = mobile_No_new;
        cout<<  endl << "Sucessfully Updated Mobile no.";
			_getch();}      //getch is to hold the screen ( untill user press any key )
			else							// Does not update if old mobile no. does not matches
		{
			cout << endl << "Incorrect !!! Old Mobile no";
			_getch();			  //getch is to hold the screen ( untill user press any key )
		}
	}
	void cashWithDraw(int amount_a){
	if(amount_a>0&&amount_a<balance){
        balance -= amount_a;
        cout << endl << "Please Collect Your Cash";
			cout << endl << "Available Balance :" << balance;
			_getch();				//getch is to hold the screen(untill user press any key )
		}

		else
		{
			cout << endl << "Invalid Input or Insufficient Balance";
			_getch();				//getch is to hold the screen ( untill user press any key )
		}
	}
};
int main(){
Bank user;
int choice = 0, enterPIN;
long int enteraccount_No;
system ("cls");
user.setData(1234567, "chaima", 1111, 45000.90, "22079811");
do{
    system("cls");
    cout<<endl<<"***WELCOM TO BANK***"<<endl;
    cout<<endl<<"enter your account"<<endl;
    cin >> enteraccount_No;
    cout<<endl<<"enter your PIN"<<endl;
    cin>> enterPIN;
    if((enteraccount_No==user.getAccount())&&(enterPIN==user.getPIN()))
    {
        do
        {
            int amount = 0;
            string oldMobile,newMobile;
            system("cls");
            cout<<endl<<"***WELCOM TO BANK***";
            cout<<endl<<"SELECT OPTIONS";
            cout<<endl<<"1. check balance";
            cout<<endl<<"2. cash with draw";
            cout<<endl<<"3.show user details";
            cout<<endl<<"4.updat";
            cout<<endl<<"5. Exit "<<endl;
            cin>>choice;
            switch(choice){
        case 1 :
            cout<<endl<<" YOUR BANK BALANCE IS :" << user.getBalance();
            _getch();
            break;
        case 2 :
            cout<<endl<<"Enter amount";
            cin>>amount;
            cout<<endl<<" YOUR CASH WITH DRAW :" ;
            user.cashWithDraw(amount);
            break;
        case 3 :
            cout<<endl<<"*** User Details are :";
            cout<<endl<<"Account" <<user.getAccount();
            cout<<endl<<"Name"<<user.getName();
            cout<<endl<<"PIN"<<user.getPIN();
            cout<<endl<<"Balance"<<user.getBalance();
            cout<<endl<<"MOBILE"<<user.getMobile_No();
            _getch();
            break;
        case 4 :
            cout<<endl<<"UPDATE";
            cout<<endl<<"Enter  old Mobile_No";
            cin>>oldMobile;
            cout<<endl<<"Enter new mobile_No";
            cin>>newMobile;
            user.setMobile(oldMobile, newMobile);
            break;
        case 5 :
            exit(0);
            default:							// handle invalid user inputs
					cout << endl << "Enter Valid Data !!!";
				}
				}while(1);
    }


           else
		{
			cout << endl << "User Details are Invalid !!! ";
			_getch();
		}
	} while (1);						//LOGIN		// condition will always TRUE and loop is										capable of running infinite times

	return 0; }






