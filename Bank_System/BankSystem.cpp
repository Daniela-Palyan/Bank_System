#include <iostream>
#include "BankSystem.h"

BankSystem::BankSystem() = default;

BankSystem::~BankSystem() = default;

void BankSystem::addAccount(const std::string& name, int accountNumber, double initialBalance){
	for(int i = 0; i < v.size(); ++i){
		if(v[i].get_num() == accountNumber){
			std::cout << "Invalid number" << std::endl;
			return;
		}
	}
	v.push_back(BankAccount(name, accountNumber, initialBalance));
}


BankAccount* BankSystem::findAccount(int accountNumber){
	for(int i = 0; i < v.size(); ++i){
                if(v[i].get_num() == accountNumber){
			return &v[i];
		}
	}
	return nullptr;
}

void BankSystem::transferFunds(int senderAcc, int receiverAcc, double amount){
	BankAccount* sender = findAccount(senderAcc);
	BankAccount* receiver = findAccount(receiverAcc);

	if(sender && receiver){
    		sender->withdraw(amount);
    		receiver->deposit(amount);
	}

}

void BankSystem::displayAllAccounts(){
	for(int i = 0; i < v.size(); ++i){
		v[i].display();
		std::cout << std::endl;
	}
}


