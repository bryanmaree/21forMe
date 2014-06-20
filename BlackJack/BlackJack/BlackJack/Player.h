#pragma once
#include <iostream>
using namespace std;
class Player
{
private:
	char hand[5];
	int cardNumber;
public:
	Player(void);
	~Player(void);
	void hit(char t);
	void printHand();
	int handTotal();

};

