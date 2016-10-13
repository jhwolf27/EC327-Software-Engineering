#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <random>

using namespace std;

struct Card
{
	const char* value;
	const char* suit;

	Card() {}
	Card(const char* value, const char* suit) : value(value), suit(suit) {}
};

vector<Card> deck;

void setupDeck()
{
	deck.clear();
	const char *values[13] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	const char *suits[4] = { "Diamonds", "Clubs", "Spades", "Hearts" };
	for (int suit = 0; suit < 4; suit++)
	{
		for (int val = 0; val <= 13; val++)
		{
			deck.push_back(Card(values[val], suits[suit]));
		}
	}
}

Card drawRandomCard()
{
	int randIndex = rand() % deck.size();
	Card drawnCard = deck[randIndex];
	deck.erase(deck.begin() + randIndex);
	return drawnCard;
}

vector<Card> drawndeck;

int main()
{
	int numdraws = 0;
	int DiamondsDraw = 0;
	int SpadesDraw = 0;
	int ClubsDraw = 0;
	int HeartsDraw = 0;
	setupDeck();
	while (DiamondsDraw < 2 || SpadesDraw < 2 || ClubsDraw < 2 || HeartsDraw < 2)
	{
		Card drawnCard = drawRandomCard();
		if (drawnCard.suit == "Diamonds")
			DiamondsDraw++;
		else if (drawnCard.suit == "Spades")
			SpadesDraw++;
		else if (drawnCard.suit == "Clubs")
			ClubsDraw++;
		else if (drawnCard.suit == "Hearts")
			HeartsDraw++;
		drawndeck.push_back(drawnCard);
		numdraws++;
	}
	cout << numdraws << endl;

	vector<Card> DiamondsDeck;
	vector<Card> SpadesDeck;
	vector<Card> ClubsDeck;
	vector<Card> HeartsDeck;
	//int DDecksize = 0, SDecksize = 0, CDecksize = 0, HDecksize = 0;

	cout << HeartsDraw << ClubsDraw << SpadesDraw << DiamondsDraw << endl;

	for (int j = 0; j < numdraws; j++)
	{
		if (drawndeck[j].suit == "Diamonds"){
			DiamondsDeck.push_back(drawndeck[j]);
		//	DDecksize++;
		}
		else if (drawndeck[j].suit == "Spades"){
			SpadesDeck.push_back(drawndeck[j]);
			//SDecksize++;
		}
		else if (drawndeck[j].suit == "Clubs"){
			ClubsDeck.push_back(drawndeck[j]);
			//CDecksize++;
		}
		else if (drawndeck[j].suit == "Hearts"){
			HeartsDeck.push_back(drawndeck[j]);
			//HDecksize++;
		}
	}

	//cout << SpadesDeck[1].suit << SpadesDeck[1].value;
//	cout << DiamondsDeck[1].suit << DiamondsDeck[1].value;

	

	//print vector contents to file
	ofstream myfile;
	myfile.open("cards.txt");

	for (int sp = 1; sp < SpadesDraw; sp++){
		myfile << SpadesDeck[sp].suit;
		myfile << SpadesDeck[sp].value << endl;
	}
	for (int dia = 1; dia < DiamondsDraw; dia++){
		myfile << DiamondsDeck[dia].suit;
		myfile << DiamondsDeck[dia].value << endl;
	}
	for (int clu = 1; clu < ClubsDraw; clu++){
		myfile << ClubsDeck[clu].suit << ClubsDeck[clu].value << endl;
	}
	for (int hea = 1; hea < HeartsDraw; hea++){
		myfile << HeartsDeck[hea].suit << HeartsDeck[hea].value << endl;
	}

	return 0;







	
}