#include "hand.h"

// TODO: Implement here the method createAllCombinations of Hand




void Hand::createAllCombinations(){
    Card cardTable[20];
    int counter = 0;
    int valueTable[20];
    int a = getCardCount();
    for(int i = 0 ; i < a ; i++){
        Combination combo;
        combo.addCard(getCard(i));
        allCombinations[counter] = combo;
        allCombinationsSize++;
        counter++;
}
    for( int i = 0 ; i < a ; i++ ){
        cardTable[i] = getCard(i);
        valueTable[i] = cardTable[i].getValue();
        for(int j = 0 ; j < i ; j++){
            if( (cardTable[i].getValue() == cardTable[j].getValue())&&(cardTable[i].canBeInCombination())&&(cardTable[j].canBeInCombination())){
                Combination combo;
                combo.addCard(cardTable[i]);
                combo.addCard(cardTable[j]);
                allCombinations[counter] = combo;
                counter++;
                allCombinationsSize++;
            }
            else continue;

        }
    }
}

