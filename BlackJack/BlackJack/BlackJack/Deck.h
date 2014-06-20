#pragma once
#include <array>
#include <random>
#include <algorithm>
#include <iostream>
#include <time.h>
using namespace std;

class Deck
{
private:
	char* deck;
	int cardsUsed;
public:
	static const int deckCount = 52;
	Deck(void);
	
	~Deck(void);

	//Hit Function
	//Purpose to draw a card from the Deck and increment the cardsUsed
	char Hit();

	//Suffle Function:
	//Purpose, take the deck and shuffle it so that that its random
	//parameters: n/a
	//side effects:n/a
	void shuffleIt();
	void print();
};

