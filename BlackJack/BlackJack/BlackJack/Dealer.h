#pragma once
#include <iostream>
using namespace std;
class Dealer
{
private:
	char hand[5];
	int cardNumber;
public:
	Dealer(void);
	~Dealer(void);
	void hit(char t);
	void printHand();
	int handTotal();
};

