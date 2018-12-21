#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


class Card
{
  private:

    int currentCard;

public:
    int suit;
    int face;

    std::vector<string> suits={"Hearts", "Spades", "Clubs", "Diamonds"};

    //suits[0]="Hearts";
    //suits[1]="Spades";
    //suits[2]="Clubs";
    //suits[3]="Diamonds";

    std::vector<string> faces={"One of", "Two of", "Three of", "Four of", "Five of", "Six of", "Seven of", "Eight of", "Nine of", "Ten of", "Jack of", "Queen of", "King of", "Ace of"};
                            //make vector of strings for suits
                            //make vector of strings for card ##
                            // make ints represent elements
                            //??concatenate the strigs to print out the card
    Card()
    {
        Card::suit=0;
        Card::face=0;
    };
                            //for suit check if suits are all the same
                            //for straight look at the values

    string toString(int suit, int face)
    {
        string b;            //needs major work
        b=suits[suit]+faces[face];
        std::cout << "" << b <<std::endl;
                            //read strings and output strings
        return b;           //Should i make data member for points
                            //how to put in heirarchy
                            //
    };
};

class DeckOfCards : public Card
{
  private:

    int i=0;
    int j=13;
    int k=27;
    int l=41;
    int count=0;

  public:
    std::vector<int> hand1;
    std::vector<int> hand2;
    std::vector<int> dealer;
    std::vector<Card> deck;

    DeckOfCards()
    {
        Card c;

        for(count=0; count!=5; count++)
        {
            hand1[count]=dealCard(count);  //needs current
        }
        for(count=0; count!=5; count++)
        {
            hand2[count]=dealCard(count);
        }
        for(count=0; count!=5; count++)
        {
            dealer[count]=dealCard(count);
        }

        for(i=0; i<12;i++)
        {
                                    //create object and then access Deck of cards vector deck
            deck[i].face=i;         //problem with accessing face data member?
          deck[i].suit=0;
          for(j=13; j<26; j++)
          {
            deck[j].face=i;
            deck[j].suit=1;
            for(k=27; k<40; k++)
            {
              deck[k].face=i;
              deck[k].suit=2;
              for(l=41; l<51; l++)
              {
                deck[l].face=i;
                deck[l].suit=3;
              }
            }
          }
                                          // why is it not calling pushback funtction
                                 //how is size measured?
      }                                 //currentCard is index in deck to find new card
    };

    int shuffle(vector<Card> deck)
    {


        int crd;
                                //use rand for the card number and face
        int i=0;          //function iterates through each card in the deck and swaps with random card

        for(i=0; i<51; i++)
        {
          crd=std::rand() % 51 + 1;
          swap(deck[crd], deck[i]);
        }
                                        //must randomly select two cards and swap
                                        //use rand function?
                                        //iterate using i for loops
        return i;
    };

    int dealCard(int currentCard)
    {
      int nextCard;

      int crd;

      crd=std::rand()%51+1;             //deals random index of deck of cards vector
                                        //needs more work, esp else statement
      if(currentCard!=crd)
      {
          nextCard=crd;                     //if card is already in hand, function deals anothercard
      }
      else
      {
        crd=std::rand()%51+1;
      }
      return nextCard;

    };
    int swapCard(int currentCard)
    {
      int newCard;
      newCard=std::rand()%51+1;

      if(newCard==currentCard)
      {
        newCard=std::rand()%51+1;
      }
      return newCard;
    };

    bool moreCards(int currentCard)
    {
      if(currentCard<deck.size())
      {
        return true;
      }
      else
      {
        return false;
      }
    };
};
