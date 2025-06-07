#include <iostream>
#include <string>

class BankAccount{
	private:
		std::string accountHolder;
		int accountNumber;
		double balance;

	public:
		BankAccount();
		BankAccount(std::string, int, double);
		BankAccount (const BankAccount&);
		~BankAccount();

	public:
		void deposit(double amount);
		bool withdraw(double amount);
		void display();
		int get_num();

};
