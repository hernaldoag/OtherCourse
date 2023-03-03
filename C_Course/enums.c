#include <stdio.h>

enum weekDays {Sunday, Monday,Tuesday,Wednesday, Thrusday, Friday, Saturday};

enum deck{
    club = 0,
    diamonds =5,
    hearts = 10,
    spades = 15,
 } card;


int main(){

    card = hearts;
    
    printf("Card Power %d", sizeof(card));
    /*enum weekDays today;
    today = Sunday; 
    printf("Day %d", today+1);*/
    return 0;
}