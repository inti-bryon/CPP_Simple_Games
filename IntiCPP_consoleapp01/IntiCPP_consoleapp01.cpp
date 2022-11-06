//sample sandbox for playing with C++
//

#include <iostream>

int main() {

    //main menu

    int game = 1;
    while (true) {
        std::cout << "\n\n==================================================\n";
    std::cout << "Please select which game to play...\n\n\t(1) Harry Potter Sorting Hat\n\n\t(2) Rock, Paper, Scissors\n\n\t(3) Guess Random Number\n\n";
    std::cout << "==================================================\n";
    std::cin >> game;
        switch (game)
        {
        case 1:
        {
            //Harry Potter Hat Sorting Game
            //main variables 
            int gryffindor = 0;
            int hufflepuff = 0;
            int ravenclaw = 0;
            int slytherin = 0;

            int answer1;
            int answer2;
            int answer3;
            int answer4;

            std::cout << "The Sorting Hat Quiz!\n\n";

            //question 1
            std::cout << "Q1) When I'm dead, I want people to remember me as:\n\t1) The Good\n\t2) The Great\n\t3) The Wise\n\t4) The Bold\n";
            std::cin >> answer1;
            switch (answer1) {
            case 1:
                hufflepuff++;
                break;
            case 2:
                slytherin++;
                break;
            case 3:
                ravenclaw++;
                break;
            case 4:
                gryffindor++;
                break;
            default:
                std::cout << "Invalid Input\n";
                break;
            }

            //question 2
            std::cout << "Q2) Dawn or Dusk?\n\t1) Dawn\n\t2) Dusk\n";
            std::cin >> answer2;

            switch (answer2) {
            case 1:
                ravenclaw++;
                gryffindor++;
                break;
            case 2:
                hufflepuff++;
                slytherin++;
                break;
            default:
                std::cout << "Invalid Input\n";
                break;
            }

            //question 3
            std::cout << "Q3) Which kind of instrument most pleases your ear?\n\t1) The violin\n\t2) The trumpet\n\t3) The piano\n\t4) The drum\n";
            std::cin >> answer3;
            switch (answer3) {
            case 1:
                slytherin++;
                break;
            case 2:
                hufflepuff++;
                break;
            case 3:
                ravenclaw++;
                break;
            case 4:
                gryffindor++;
                break;
            default:
                std::cout << "Invalid Input\n";
                break;
            }

            //question 4
            std::cout << "Q4) Which road tempts you most?\n\t1) The wide, sunny grassy lane\n\t2) The narrow, dark, lantern-lit alley\n\t3) The twisting, leaf-strewn path through woods\n\t4) The cobbled street lined (ancient buildings)\n";
            std::cin >> answer4;
            switch (answer4) {
            case 1:
                hufflepuff++;
                break;
            case 2:
                slytherin++;
                break;
            case 3:
                gryffindor++;
                break;
            case 4:
                ravenclaw++;
                break;
            default:
                std::cout << "Invalid Input\n";
                break;
            }

            //final answer
            int max = 0;
            std::string house;
            if (gryffindor > max) {

                max = gryffindor;
                house = "Gryffindor";

            }

            if (hufflepuff > max) {

                max = hufflepuff;
                house = "Hufflepuff";

            }

            if (ravenclaw > max) {

                max = ravenclaw;
                house = "Ravenclaw";

            }

            if (slytherin > max) {

                max = slytherin;
                house = "Slytherin";

            }

            std::cout << "\n...\nYour Selected House is : " << house << "!\n\n";
           break;
        }
         
        case 2:
        {
            //Rock, Paper, Scissors
            srand(time(NULL));
            int computer = rand() % 3 + 1;
            int user = 0;


            std::cout << "====================\n";
            std::cout << "rock, paper, scissors!\n";
            std::cout << "====================\n";

            std::cout << "1) Rock\n";
            std::cout << "2) Paper\n";
            std::cout << "3) Scissors\n";

            std::cout << "shoot! \n";

            std::cin >> user;

            std::cout << "You selected: " << user << ". The Computer Selected: " << computer << "\n";

            if (user == 1 && computer == 3 || user == 2 && computer == 1 || user == 3 && computer == 2) {
                std::cout << "YAY... you win!\n";
            }
            else if (user == computer) {
                std::cout << "It's a tie!\n";
            }
            else {
                std::cout << "Oh no... CPU Wins!!\n\n";
            }

            break;
        }
        case 3: 
        {
            //guess random number
            srand(time(NULL));
            int number = rand() % 100 + 1;
            int guess;

            std::cout << "Try to guess the number from 1 - 100...\n";
            std::cin >> guess;

            while (guess != number) {
                std::cout << "Nope... try again...\n";
                std::cin >> guess;

            }
            std::cout << "Yes you got it... " << number << ", was my guess!\n";

            break;
        }
        default :
            std::cout << "Invalid Selection\n";
            break;
        }
    }

   


}
