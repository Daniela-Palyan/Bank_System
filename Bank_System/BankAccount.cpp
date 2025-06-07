#include <iostream>
#include <string>
#include "BankAccount.h"

BankAccount::BankAccount(){
	accountHolder = "Unknown";
	accountNumber = 0;
	balance = 0.0;
}

BankAccount::BankAccount(std::string name, int number, double balance){
	accountHolder = name;
	accountNumber = number;
	this->balance = balance;
}

BankAccount::BankAccount(const BankAccount& acc){
	accountHolder = acc.accountHolder;
	accountNumber = acc.accountNumber;
	balance = acc.balance;
}

BankAccount::~BankAccount(){
	std::cout << "Your account was destroyed" << std::endl;
}

void BankAccount::deposit(double amount){
	if(amount < 0){
		std::cout << "Amount cant be negative" << std::endl;
		return;
	}
	balance +=amount;
}

bool BankAccount::withdraw(double amount){
	if(balance < amount){
		std::cout << "Insufficient funds in the account" << std::endl;
		return false;
	}
	balance -= amount;
	return true;
}

void BankAccount::display(){
	std::cout << "Account holder: " << accountHolder << std::endl;
	std::cout << "Account number: " << accountNumber << std::endl;
	std::cout << "Your balance: " << balance << std::endl;

}

int BankAccount::get_num(){
	return accountNumber;
}
