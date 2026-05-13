//#include "BankAccount.h"
//
//BankAccount getRichOwner(BankAccount accounts[]) {
//	int index = 0;
//
//	for (int i = 1; i < 3; i++)
//	{
//		if (accounts[i].balance > accounts[index].balance) {
//			index = i;
//		}
//	}
//
//	return accounts[index];
//}
//
//int main() {
//	BankAccount account01;
//	BankAccount account02;
//	BankAccount account03;
//
//	account01.name = "1234AX";
//	account01.balance = 1000;
//	account01.owner = "Gleb";
//
//	account02.name = "231";
//	account02.balance = 10;
//	account02.owner = "Alex";
//
//	account03.name = "1754QA";
//	account03.balance = 500;
//	account03.owner = "Stas";
//
//	BankAccount accounts[]{ account01, account02,account03 };
//
//	BankAccount account = getRichOwner(accounts);
//
//	cout << account.owner << " - " << account.balance << endl;
//
//	return 0;
//}