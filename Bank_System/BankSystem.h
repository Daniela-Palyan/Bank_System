#include <iostream>
#include <vector>
#include "BankAccount.h"

class BankSystem{
	private:
		std::vector<BankAccount> v;
	
	public:
		BankSystem();
		~BankSystem();

	public:
		void addAccount(const std::string& name, int accountNumber, double initialBalance);
		BankAccount* findAccount(int accountNumber);
		void transferFunds(int senderAcc, int receiverAcc, double amount);
		void displayAllAccounts();

};

	
