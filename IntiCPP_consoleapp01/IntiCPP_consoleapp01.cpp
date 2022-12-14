//sample sandbox for playing with C++
//

#include <iostream>
#include <unordered_set>
#include "ufo_functions.h"
#include "TicGame.h"

void PrintMenu() {
    std::cout << "\n\n==================================================\n";
    std::cout << "\tWelcome to Inti's Fun House";
    std::cout << "\n==================================================\n\n";
    std::cout << "Please select which game to play...\n\n\t(1) Harry Potter Sorting Hat\n\n\t(2) Rock, Paper, Scissors\n\n\t(3) Guess Random Number\n\n\t(4) High or Low Game\n\n\t(5) UFO Guessing Game\n\n\t(6) Tic Tac Toe\n\n";
    std::cout << "==================================================\n\n";

}


int main() {

    //main menu
    PrintMenu();
    int game = 0;
    while (std::cin >> game) {
        if (cin) {
            //check for proper input 
                    //start game selection
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

                std::cout << "\n.\n.\n.\nYour Selected House is : " << house << "!\n\n";
                PrintMenu();
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

                if (user == 0) {
                    break;
                }
                else if (user == 1 || user == 2 || user == 3)
                {
                    std::string playerpick;
                    std::string cpupick;

                    switch (computer) {
                    case 1:
                        cpupick = "Rock";
                        break;
                    case 2:
                        cpupick = "Paper";
                        break;
                    case 3:
                        cpupick = "Scissors";
                        break;
                    }

                    switch (user) {
                    case 1:
                        playerpick = "Rock";
                        break;
                    case 2:
                        playerpick = "Paper";
                        break;
                    case 3:
                        playerpick = "Scissors";
                        break;
                    }


                    std::cout << "You selected: " << playerpick << ". The Computer Selected: " << cpupick << "\n";

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
                else
                {
                    std::cout << "Invalid Entry\n";
                }
                PrintMenu();
                break;

            }
            case 3:
            {
                //guess random number
                srand(time(NULL));
                int number = rand() % 100 + 1;
                int guess;

                std::cout << "\nTry to guess the number from 1 - 100...\n";
                std::cin >> guess;

                while (guess != number) {
                    std::string help = "Higher";
                    if (guess > number) {
                        help = "Lower";
                    }
                    std::cout << "\nNope... try guessing " << help << "...\n";
                    std::cin >> guess;

                }
                std::cout << "\nYes you got it... " << number << ", was my guess!\n\n";
                PrintMenu();
                break;
            }
            case 4:
            {
                //high / low numbers game
                std::cout << "Welcome to the High / Low Game...\n\n\tWe start with a number (1-20) and then try to guess if the next is higher or lower.\n\n";
                //initialize first number
                srand(time(NULL));
                int firstCard = rand() % 20 + 1;
                bool wins = true;

                //number of loops for the game. Change for condition to change steps needed to win game
                for (int i = 1; i <= 5; i++) {
                    //users first guess
                    std::cout << "The number is\t" << firstCard << "\n...is the next number (H)igher or (L)ower??\n";
                    std::string userGuess;
                    std::cin >> userGuess;
                    int nextCard = rand() % 10 + 1;

                    if (userGuess == "L" || userGuess == "l" || userGuess == "lower" || userGuess == "Lower") {
                        if (nextCard < firstCard || nextCard == firstCard) {
                            firstCard = nextCard;
                            std::cout << "Yes... Correct...\n";
                        }
                        else
                        {
                            std::cout << "\n\nSorry Try Again...The Number was\t" << nextCard << "\n\n";
                            wins = false;
                            break;
                        }
                    }
                    else if (userGuess == "H" || userGuess == "h" || userGuess == "higher" || userGuess == "Higher") {
                        if (nextCard > firstCard || nextCard == firstCard) {
                            firstCard = nextCard;
                            std::cout << "Yes... Correct...\n";
                        }
                        else
                        {
                            std::cout << "\n\nSorry Try Again...The Number was\t" << nextCard << "\n\n";
                            wins = false;
                            break;
                        }
                    }
                    else {
                        std::cout << "Invalid Entry\n";
                    }
                }
                if (wins) {
                    std::cout << "\n\n---------  CONGRATULATIONS YOU WON!!! ----------\n\n";
                }
                PrintMenu();
                break;
            }
            case 5:
            {
                greet();
                srand(time(NULL));
                std::string codeword = LoadWords(rand() % 50 + 1);
                std::string answer = LoadBlanks(codeword.size());
                int misses = 0;
                std::vector<char> incorrect;
                bool guess = false;
                char letter;

                while (codeword != answer && misses < 7) {
                    display_misses(misses);
                    display_status(incorrect, answer);
                    std::cout << "Please enter your guess: \n";
                    std::cin >> letter;

                    for (int i = 0; i < codeword.size(); i++) {
                        if (letter == codeword[i]) {
                            answer[i] = letter;
                            guess = true;
                        }
                    }

                    if (guess) {
                        std::cout << "Correct!\n";
                    }
                    else {
                        std::cout << "Incorrect! The tractor beam pulls the person in further.\n";
                        incorrect.push_back(letter);
                        misses++;
                    }
                    guess = false;
                }
                end_game(answer, codeword);
                PrintMenu();
                break;
            }
            case 6:
            {
                std::cout << "\n\n\t=============\n\tTIC TAC TOE\n\t=============\n\n";
                string player_one, player_two;
                bool keep_playing = true, cpu_player = false;
                unordered_set<int> called_nums;

                char new_game[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };

                cout << "First Players Name [X] \n";
                cin >> player_one;
                cout << "Second Players Name [@]\n(type in CPU to play vs the computer!)\n";
                cin >> player_two;

                //check for cpu player
                if (player_two == "CPU" || player_two == "cpu") cpu_player = true;

                //print game board
                PrintBoard(new_game);

                int player_one_turn = 0, player_two_turn = 0;

                while (keep_playing) {
                    //player one turn

                    cout << player_one << ", your turn [X]. Select 1 - 9 for the position...\n";
                    cin >> player_one_turn;
                    called_nums.insert(player_one_turn);


                    switch (player_one_turn) {
                    case 1:
                        if (new_game[0][0] != '@') new_game[0][0] = 'X';
                        break;
                    case 2:
                        if (new_game[0][1] != '@') new_game[0][1] = 'X';
                        break;
                    case 3:
                        if (new_game[0][2] != '@') new_game[0][2] = 'X';
                        break;
                    case 4:
                        if (new_game[1][0] != '@') new_game[1][0] = 'X';
                        break;
                    case 5:
                        if (new_game[1][1] != '@') new_game[1][1] = 'X';
                        break;
                    case 6:
                        if (new_game[1][2] != '@') new_game[1][2] = 'X';
                        break;
                    case 7:
                        if (new_game[2][0] != '@') new_game[2][0] = 'X';
                        break;
                    case 8:
                        if (new_game[2][1] != '@') new_game[2][1] = 'X';
                        break;
                    case 9:
                        if (new_game[2][2] != '@') new_game[2][2] = 'X';
                        break;
                    default:
                        //cout << endl;
                        break;
                    }
                    PrintBoard(new_game);

                    //check for win
                    if (CheckWin(new_game, player_one)) {
                        cout << "\tCongratulations " << player_one << ", You Won The Game!!\n\n";
                        break;
                    }
                    else if (CheckTie(new_game)) {
                        cout << "\tTIE GAME\tNo One Won!!\n\n";
                        break;
                    }

                    // 
                    //player two turn
                    if (cpu_player) {
                        srand(time(NULL));

                        while (true) {
                            int cpu_turn = rand() % 9 + 1;
                            if (cpu_turn != player_one_turn && !called_nums.count(cpu_turn)) {
                                player_two_turn = cpu_turn;
                                called_nums.insert(player_two_turn);
                                break;
                            }

                        }
                        cout << "The CPU has played...\n";
                    }
                    else {
                        cout << player_two << ", your turn [@]. Select 1 - 9 for the position...\n";
                        cin >> player_two_turn;

                    }


                    switch (player_two_turn) {
                    case 1:
                        if (new_game[0][0] != 'X') new_game[0][0] = '@';
                        break;
                    case 2:
                        if (new_game[0][1] != 'X') new_game[0][1] = '@';
                        break;
                    case 3:
                        if (new_game[0][2] != 'X') new_game[0][2] = '@';
                        break;
                    case 4:
                        if (new_game[1][0] != 'X') new_game[1][0] = '@';
                        break;
                    case 5:
                        if (new_game[1][1] != 'X') new_game[1][1] = '@';
                        break;
                    case 6:
                        if (new_game[1][2] != 'X') new_game[1][2] = '@';
                        break;
                    case 7:
                        if (new_game[2][0] != 'X') new_game[2][0] = '@';
                        break;
                    case 8:
                        if (new_game[2][1] != 'X') new_game[2][1] = '@';
                        break;
                    case 9:
                        if (new_game[2][2] != 'X') new_game[2][2] = '@';
                        break;
                    default:
                        break;
                    }

                    PrintBoard(new_game);
                    //check for win
                    if (CheckWin(new_game, player_two)) {
                        if (cpu_player) {
                            cout << "\nOh No... You Lost The Game!!\n\n";
                            break;
                        }
                        else {
                            cout << "\tCongratulations " << player_two << ", You Won The Game!!\n\n";
                            break;
                        }
                    }
                    else if (CheckTie(new_game)) {
                        cout << "\tTIE GAME\tNo One Won!!\n\n";
                        break;
                    }
                }
                PrintMenu();
                break;
            }
            default:
                std::cout << "Invalid Selection\n";
                PrintMenu();
                break;
            }
        }
        else {
            cout << "Invalid Selection\n";
        }
    }
}