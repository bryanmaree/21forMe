#include "Player.h"


Player::Player(void)
{
	for(int i = 0; i < 5; i++)
	{
		hand[i] = '0';
	}
	cardNumber= 0;
}


Player::~Player(void)
{
}

void Player::printHand()
{
	for(int i = 0; i < cardNumber; i++)
	{
		cout << hand[i] << " ";
	}
	cout << "Hand Total:" << handTotal() << endl;
}

void Player::hit(char t)
{
	if(cardNumber < 5)
	{
		hand[cardNumber++] = t;
	}
}

int Player::handTotal()
{
	int handTotal = 0;
	for(int i = 0; i < cardNumber; i++)	// 10694801@uvmail Caylon Wilkins
	{
		if(hand[i] == 'a')
		{
			handTotal += 11;
		}else if(hand[i] == '2')
		{
			handTotal += 2;
		}else if(hand[i] == '3')
		{
			handTotal += 3;
		}else if(hand[i] == '4')
		{
			handTotal += 4;
		}else if(hand[i] == '5')
		{
			handTotal += 5;
		}else if(hand[i] == '6')
		{
			handTotal += 6;
		}else if(hand[i] == '7')
		{
			handTotal += 7;
		}else if(hand[i] == '8')
		{
			handTotal += 8;
		}else if(hand[i] == '9')
		{
			handTotal += 9;
		}else if(hand[i] == '1')
		{
			handTotal += 10;
		}else if(hand[i] == 'j')
		{
			handTotal += 10;
		}else if(hand[i] == 'q')
		{
			handTotal += 10;
		}else if(hand[i] == 'k')
		{
			handTotal += 10;
		}else
		{
			cout << "Error " << endl;
		}
	}
	return handTotal;
}