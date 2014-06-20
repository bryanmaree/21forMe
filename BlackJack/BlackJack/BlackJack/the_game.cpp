#include"Dealer.h"
#include"Deck.h"
#include"Player.h"
#include<iostream>
using namespace std;

int main()
{
	Player playerOne;
	Dealer Dealer;
	Deck Deck;
	char choice;
	bool looser = false;
	bool dealLooser = false;

	playerOne.hit(Deck.Hit());
	playerOne.hit(Deck.Hit());
	Dealer.hit(Deck.Hit());
	Dealer.hit(Deck.Hit());

	for(int i = 0; i < 3; i++)
	{
		cout << "Players hand is ";
		playerOne.printHand();
		cout << endl;
		cout << "Dealers hand is ";
		Dealer.printHand();
		cout << endl;

		do
		{
			cout << " would you like to hit? ";
			cin.clear();
			cin >> choice;
			if(choice == 'y')
			{
				playerOne.hit(Deck.Hit());
			}
		}while(choice != 'y' && choice != 'n');
		Dealer.hit(Deck.Hit());
		if(playerOne.handTotal() > 21 || Dealer.handTotal() > 21)
		{
			break;
		}
	}
	playerOne.printHand();	
	Dealer.printHand();
	if(Dealer.handTotal() > 21)
	{
		dealLooser = true;
	}
	if((21 - playerOne.handTotal() >= 21 - Dealer.handTotal() || playerOne.handTotal() > 21) && !dealLooser)
	{
		looser = true;
	}else
	{
		looser = false;
	}

	if(looser)
	{
		cout << " YOU LOOSE!" << endl;
	}else
	{
		cout << " YOU WIN!" << endl;
	}

	system("PAUSE");
}