#ifndef CARDS_H_
#define CARDS_H_

#include <string>
#include <iostream>
#include <boost/assign/list_of.hpp>
#include <map>

using namespace std;

enum cardValues {HA, H2, H3, H4, H5, H6, H7, H8, H9, H10, HJ, HQ, HK, 
                 DA, D2, D3, D4, D5, D6, D7, D8, D9, D10, DJ, DQ, DK,
                 CA, C2, C3, C4, C5, C6, C7, C8, C9, C10, CJ, CQ, CK,
                 SA, S2, S3, S4, S5, S6, S7, S8, S9, S10, SJ, SQ, SK,
                 BJ, RJ};

static std::map<cardValues, string> cardNamesMap = boost::assign::map_list_of(HA, "Ace of Hearts")(H2, "2 of Hearts")(H3, "3 of Hearts")(H4, "4 of Hearts")
(H5, "5 of Hearts")(H6, "6 of Hearts")(H7, "7 of Hearts")(H8, "8 of Hearts")(H9, "9 of Hearts")(H10, "10 of Hearts")(HJ, "Jack of Hearts")(HQ, "Queen of Hearts")
(HK, "King of Hearts")(DA, "Ace of Diamonds")(D2, "2 of Diamonds")(D3, "3 of Diamonds")(D4, "4 of Diamonds")(D5, "5 of Diamonds")(D6, "6 of Diamonds")
(D7, "7 of Diamonds")(D8, "8 of Diamonds")(D9, "9 of Diamonds")(D10, "10 of Diamonds")(DJ, "Jack of Diamonds")(DQ, "Queen of Diamonds")(DK, "King of Diamonds")
(CA, "Ace of Clubs")(C2, "2 of Clubs")(C3, "3 of Clubs")(C4, "4 of Clubs")(C5, "5 of Clubs")(C6, "6 of Clubs")
(C7, "7 of Clubs")(C8, "8 of Clubs")(C9, "9 of Clubs")(C10, "10 of Clubs")(CJ, "Jack of Clubs")(CQ, "Queen of Clubs")(CK, "King of Clubs")
(SA, "Ace of Spades")(S2, "2 of Spades")(S3, "3 of Spades")(S4, "4 of Spades")(S5, "5 of Spades")(S6, "6 of Spades")
(S7, "7 of Spades")(S8, "8 of Spades")(S9, "9 of Spades")(S10, "10 of Spades")(SJ, "Jack of Spades")(SQ, "Queen of Spades")(SK, "King of Spades")
(BJ, "Black Joker")(RJ, "Red Joker");

class Cards {
    public:

    Cards(int NumberOfDecks, bool jokers);

    void shuffleDeck();

    int drawTopCard();

    int blackJackCardValue(int card); 


};

#endif