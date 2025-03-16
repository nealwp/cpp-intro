// draw-a-card.cpp
// draw cards from a 52 card deck until deck is empty

#include <iostream>
#include <string>
#include <vector>
using namespace std;


// function to randomly generate card suit
string randSuit()
{
	string suitName;
	int suit = rand() % 4 + 1;
	
	switch (suit)
	{
	case 1: suitName = " of Clubs"; break;
	case 2: suitName = " of Diamonds"; break;
	case 3: suitName = " of Hearts"; break;
	case 4: suitName = " of Spades"; break;
	}
	
	return suitName;
}


// function to randomly generate card
string randCard()
{
	string cardName;
	int card = rand() % 13 + 1;
	
	switch (card)
	{
	case 1: cardName = "Ace"; break;
	case 2: cardName = "Two"; break;
	case 3: cardName = "Three"; break;
	case 4: cardName = "Four"; break;
	case 5: cardName = "Five"; break;
	case 6: cardName = "Six"; break;
	case 7: cardName = "Seven"; break;
	case 8: cardName = "Eight"; break;
	case 9: cardName = "Nine"; break;
	case 10: cardName = "Ten"; break;
	case 11: cardName = "Jack"; break;
	case 12: cardName = "Queen"; break;
	case 13: cardName = "King"; break;
	}

	return cardName;
}

// begin program
	int main()
{
		string cardPhrase;
		char userSays;
		int deckSize;
		
		// create a discard pile and add empty string as first element
		vector<string> discardPile;
		discardPile.push_back("");

		cout << "Welcome to Draw-A-Card!" << '\n' << endl;

		// keep drawing cards until all possible cards are in the discard pile
		while (discardPile.size() < 53)
		{

			// track how many cards are left in the deck
			deckSize = 53 - discardPile.size();

			// prompt user to draw a card
			cout << " -- Choose and option and press Enter -- " << endl;
			cout << "    " << deckSize << " cards remaining" << '\n' << endl;
			cout << "1) Draw a card." << '\n' << "q) Quit" << '\n' << endl;
			cin >> userSays;

			if (userSays == 'q')
			{
				cout << '\n' << "Goodbye." << '\n' << endl;
				break;
			}

			else if (userSays == '1')
				{

					// prevent drawing a card that has already been drawn by checking the discard pile
					while (find(discardPile.begin(), discardPile.end(), cardPhrase) != discardPile.end())
					{
						cardPhrase = randCard() + randSuit();
					}
					discardPile.push_back(cardPhrase);
					cout << '\n' << "Your card is " << cardPhrase << '\n' << endl;
				}
			else
				{
					cout << '\n' << "Invalid input, try again." << '\n' << endl;
				}
			}

		return 0;
}