#include "card.h"

// TODO: Implement here the methods of Card
Card::Card(){
    value = 0;
    suit = "";
}

void Card::setValue(int theValue){
    value = theValue;
}

void Card::setSuit(string theSuit){
    suit = theSuit;
}

string Card::getSuit(){
    return suit;
}

bool Card::hasSuit(string theSuit){
    if(theSuit == getSuit() ) return true;
        else return false;
}

int Card::getValue(){
    return value;
}

bool Card::equals(Card otherCard){
    if ( (getValue() == otherCard.getValue()) && (getSuit() == otherCard.getSuit()) )
        return true;
    else return false;
}
bool Card::canBeInCombination(){
    if( (hasSuit("DRAGON")) || (hasSuit("DOG"))) return false;
    else return true;

}
bool Card::canBeInBomb(){
    if ((canBeInCombination()== false) || (hasSuit("PHOENIX")) || (hasSuit("MAHJONG")))

        return false;
    else return true;
}






