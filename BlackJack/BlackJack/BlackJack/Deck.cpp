#include "Deck.h"


Deck::Deck(void)
{
	deck = new char[52];
	for(int i = 0; i < deckCount; i++)
	{
		deck[i++] = 'a';
		deck[i++] = '2';
		deck[i++] = '3';
		deck[i++] = '4';
		deck[i++] = '5';
		deck[i++] = '6';
		deck[i++] = '7';
		deck[i++] = '8';
		deck[i++] = '9';
		deck[i++] = '1';
		deck[i++] = 'j';
		deck[i++] = 'q';
		deck[i] = 'k';
	}
	cardsUsed = 0;
	shuffleIt();

}


Deck::~Deck(void)
{
	delete deck;
	deck = NULL;
}

char Deck::Hit()
{
	if(cardsUsed < deckCount)
	{
		return deck[cardsUsed++];
	}
}

void Deck::shuffleIt()
{
	//Create Temp deck to put cards in in random order
	char* tempDeck = new char[52];
	srand(time(NULL));
	//make everything int he temp deck o so we know if the spot is open
	for(int i = 0; i < 52; i ++)
	{
		tempDeck[i] = 'o';
	}
	//here comes the shuffle
	for(int i = 0; i < 52; i++)
	{
		//make spot be a random remainder of the deck count 52
		int spot = rand() % 52;
		bool loop = false;
		do
		{
			// If the spot is open put the deck[i] in that spot
			if(tempDeck[spot] == 'o')
			{
				tempDeck[spot] = deck[i];
				//do not loop
				loop = false;
			}else
			{
				//if spot = to 51 you need to put the spot to 0, so it wraps to the beginning of the deck
				if(spot == 51)
				{
					spot = 0;
					//loop
					loop = true;
				}else
				{
					//because spot wasn't open, just move one spot up
					spot++;
					loop = true;
				}
			}
		}while(loop);
	}
	//clear the deck out
	delete deck;
	//point the deck to the tempDeck we just created
	deck = tempDeck;
}

void Deck::print()
{
	for(int i = 0; i< 52; i++)
	{
		cout << deck[i] << endl;
	}
}