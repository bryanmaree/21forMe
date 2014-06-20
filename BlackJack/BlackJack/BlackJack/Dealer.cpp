#include "Dealer.h"


Dealer::Dealer(void)
{
	for(int i = 0; i < 5; i++)
	{
		hand[i] = '0';
	}
	cardNumber= 0;
}


Dealer::~Dealer(void)
{
}

void Dealer::printHand()
{
	for(int i = 0; i < cardNumber; i++)
	{
		cout << hand[i] << " ";
	}
	cout << "Hand Total:" << handTotal() << endl;
}

void Dealer::hit(char t)
{
	if(cardNumber < 5 && handTotal() <= 17)
	{
		hand[cardNumber++] = t;
	}else
	{
		cout << "Dealer Did not Hit, Dealer Total is: " << handTotal() << endl;
	}
}

int Dealer::handTotal()
{
	int handTotal = 0;
	for(int i = 0; i < cardNumber; i++)
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