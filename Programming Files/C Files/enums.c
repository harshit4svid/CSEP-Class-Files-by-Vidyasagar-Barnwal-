#include<stdio.h>
enum Color{
    RED,
    GREEN,
    BLUE
};
int main(){
    enum Color chosenColor;
    chosenColor=GREEN;
    switch(chosenColor){
        case RED :
        printf("You chose red\n");
        break;
        case GREEN:
        printf("You chose green\n");
        break;
        case BLUE:
        printf("You chose blue\n");
        break;
    }
    return 0;
}
