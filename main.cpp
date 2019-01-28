#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<stdlib.h>
#include "deck.h"
using namespace std;

int winner(vector<Card> hand1, vector<Card> hand2, vector<Card> dealer);
int main()
{
    int number;

    std::cout << "Creating deck" << std::endl;
                                //make each point different on the type of combo
    Card c;
    DeckOfCards d;
                              //make function that compares two hands is easiest
                              //represent each hand as a single number and compare the numbers
                              //function enumarates
                              //make method that looks at hand true if it has something
                              //possibly method
                                //use string compare?
    std::cout << "Shuffling the deck." << std::endl;
    d.shuffle(d.deck);
    std::cout << "Dealing hands of five cards" << std::endl;
                            //needs current card

    std::cout << "Your cards are: " << std::endl;
    cout<< &d.hand1 << std::endl;
    std::cout << "Determining the winning hand" << std::endl;
    std::cout<< "Which card would you like to swap : 1 ()first card, 2 (second card), 3 (third card), 4 (fourth card), 5 (fifth card), 6(none)" <<std::endl;
    std::cin>>number;

     switch (number)
    {
        case 1:
        {
            d.swapCard(d.hand1[0]);
        }
        case 2:
        {
            d.swapCard(d.hand1[1]);
        }
        case 3:
        {
            d.swapCard(d.hand1[2]);
        }
        case 4:
        {
            d.swapCard(d.hand1[3]);
        }
        case 5:
        {
            d.swapCard(d.hand1[4]);
        }
        case 6:
        {
            d.swapCard(d.hand1[5]);
        }
    };

                                        //make heirarchy of points to determine wining hand
                                        //4 of a king>full house>flush>straight>>straight>>


                                        //determine how much this is worth
                                        //make points a data member;

                                        //how to check for four of a kind
                                        //how to use the


}




int winner(vector<Card> hand1, vector<Card> hand2, vector<Card> dealer)
{
    int i=0;
    int j=1;
    int k=2;
    int l=3;
    int m=4;
    int hand_1;
    int hand_2;
    int deal;

    Card c;
    DeckOfCards d;

  for(i=0; i<5; i++)
  {
    for(j=1; j<5; j++)
    {
        if(d.hand1[i]==d.hand1[j])
      {
        std::cout << "Player one has a pair" << std::endl;
        hand_1+=1;
      }
      if(d.hand2[i]==d.hand2[j])
      {
        std::cout << "Player two has a pair" << std::endl;
        hand_2+=1;
      }
        if(d.dealer[i]==d.dealer[i])
        {
            deal+=1;
        }
      for(k=2; k<5; k++)
      {
        if(d.hand1[i]==d.hand1[j]==d.hand1[k])
        {
          std::cout << "Player one has three of a kind" << std::endl;
          hand_1+=2;
        }
        if(d.hand2[i]==d.hand2[j]==d.hand2[k])
        {
          std::cout << "Player two has three of a kind" << std::endl;
          hand_2+=2;
        }
        if(d.dealer[i]==d.dealer[j]==d.dealer[k])
        {
            deal+=2;
        }
        for(l=3; l<5; l++)
        {
          if(d.hand1[i]==d.hand1[j]==d.hand1[k]==d.hand1[l])
          {
            std::cout << "Player one has four of a kind" << std::endl;
            hand_1+=3;
          }
          if(d.hand2[i]==d.hand2[j]==d.hand2[k]==d.hand2[l])
          {
            std::cout << "Player two has four of a kind" << std::endl;
            hand_2+=3;
          }
            if(d.dealer[i]==d.dealer[j]==d.dealer[k]==d.dealer[l])
            {
                deal+=3;
            }
          for(m=4; m<5; m++)                //compare numbers of suits and faces in face/suit arrays
          {
            if(hand1[i].suit==hand1[j].suit==hand1[k].suit==hand1[l].suit==hand1[m].suit)
            {
              std::cout << "Player 1 has a flush" << std::endl;
              hand_1+=4;
            }
            if(hand2[i].suit==hand2[j].suit==hand2[k].suit==hand2[l].suit==hand2[m].suit)
            {
              std::cout<< "Player 2 has a flush" << std::endl;
              hand_2+=4;
            }
            if(dealer[i].suit==dealer[j].suit==dealer[k].suit==dealer[l].suit==dealer[m].suit)
            {
                deal+=4;
            }
            if(hand1[i].face==hand1[j].face==hand1[k].face==hand1[l].face==hand1[m].face)
            {
              std::cout << "Player one has a straight" << std::endl;
              hand_1+=5;
            }
            if(hand2[i].face==hand2[j].face==hand2[k].face==hand2[l].face==hand2[m].face)
            {
              std::cout << "Player two has a straight" << std::endl;
              hand_2+=5;
            }
              if(dealer[i].face==dealer[j].face==dealer[k].face==dealer[l].face==dealer[m].face)
              {
                  deal+=5;
              }

          }
        }
      }
    }
  }
    if(hand_1>hand_2>deal)
    {
        cout<< "Player one wins!" << endl;
    }
    if(hand_1>deal>hand_2)
    {
        cout<< "Player one wins!" << endl;
    }
    if(deal>hand_1>hand_2)
    {
        cout<<"Dealer wins!"<< endl;
    }
    if(deal>hand_2>hand_1)
    {
        cout<<"Dealer wins!"<< endl;
    }
    if(hand_2>hand_1>deal)
    {
        cout<<"Player 2 wins!"<< endl;
    }
    if(hand_2>deal>hand_1)
    {
        cout<<"Player 2 wins!"<< endl;
    }

    return i;

}
