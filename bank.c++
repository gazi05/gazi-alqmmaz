#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>

using namespace std;

class bankAccount {

private :
	double balance;
	string accountName;
	int accountPass;
	int add_money;
	int new_balance;
	void print_info() {
		cout << "Account name is : " << accountName << "\nAccount balance is : " << balance << endl;
	}
public :
	void set_balance(double b);
	double get_balance();
	void set_accountName(string name);
	string get_accountName();
	void set_accountPass(int paas);
	int get_accountPass();
	void adding_money(int add);
	int get_adding_money();

	void print();


};

void bankAccount::set_accountName(string name) {
	accountName = name;
}
string bankAccount::get_accountName() {
	return accountName;
}

void bankAccount::set_accountPass(int pass) {
	accountPass = pass;
}

int bankAccount::get_accountPass() {
	return accountPass;
}

void bankAccount::set_balance(double b) {
	balance = b;
}
double bankAccount::get_balance() {
	return balance;
}

void bankAccount::print()
{
	print_info();
}

void bankAccount ::adding_money(int add) {
	add_money = add;
	new_balance = add_money + balance;
}
int bankAccount :: get_adding_money() {
	return new_balance;
}




int main()
{
	bankAccount bank1;
	double money;
	int lock;
	string acc;
	int adding;
	string choice;


	cout << "Wellcome to our bank " << endl;

	cout << "Enter your account name " << endl;
	cin >> acc;
	bank1.set_accountName(acc);
	cout << "Enter yout password " << endl;
	cin >> lock;
	bank1.set_accountPass(lock);
	cout << "Enter your balance " << endl;
	cin >> money;
	bank1.set_balance(money);

	bank1.get_balance();
	bank1.get_accountPass();
	bank1.get_accountName();

	system("CLS");

	bank1.print();

	
	cout << "would you like to add money " << endl; 
	cin >> choice;
	if (choice == "yes") {
		cout << "How much money do you want to add" << endl;
		cin >> adding;
		bank1.adding_money(adding);
		cout << "the new balance is \n" << bank1.get_adding_money() << endl;
	}
	else {
		cout << "Thanks for stopping by";
	} 
}