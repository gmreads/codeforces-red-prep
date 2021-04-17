#include<iostream>

int main() 
{
    int number_of_games;
    char person_won;
    int anton_wins = 0;
    int danik_wins = 0;
    std::cin>>number_of_games;
    while (number_of_games-- > 0) {
        std::cin>>person_won;
        if (person_won == 'A') {
            anton_wins++;
        } else {
            //Input string only has A,D
            danik_wins ++;
        }
    }
    if (anton_wins == danik_wins) {
        std::cout<<"Friendship";
    } else if (anton_wins > danik_wins) {
        std::cout<<"Anton";
    } else {
        std::cout<<"Danik";
    }

    return 0;
}
