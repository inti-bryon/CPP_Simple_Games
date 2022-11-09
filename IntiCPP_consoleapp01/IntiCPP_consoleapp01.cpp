//sample sandbox for playing with C++
//

#include <iostream>
#include "ufo_functions.h"

int main() {

    //main menu

    int game = 1;
    while (true) {
        std::cout << "\n\n==================================================\n";
    std::cout << "Please select which game to play...\n\n\t(1) Harry Potter Sorting Hat\n\n\t(2) Rock, Paper, Scissors\n\n\t(3) Guess Random Number\n\n\t(4) Story\n\n\t(5) High or Low Game\n\n\t(6) UFO Guessing Game\n\n";
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

            std::cout << "\n.\n.\n.\nYour Selected House is : " << house << "!\n\n";
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

            break;
        }
        case 4:
        {

            std::cout << "It's been a strange day indeed. You've fallen down a rabbit hole, happened across a strange tea party, and had many other absurd adventures.\n";
            std::cout << "But now, you are called to a trial of some sort, ushered in by a Gryphon.\n";
            std::cout << "The King and Queen of Hearts are seated on their throne when you arrive, with a great crowd assembled about them — all sorts of little birds and beasts, as well as the whole pack of cards.\n";
            std::cout << "The White Rabbit is standing near the King, with a trumpet in one hand, and a scroll of parchment in the other.\n";
            std::cout << "\n";
            std::cout << "     \\\\\n";
            std::cout << "      \\\\_\n";
            std::cout << "      ( _\\Dn==(\n";
            std::cout << "      / \\__|\n";
            std::cout << "     / _/`\"`\n";
            std::cout << "    {\\  )_\n";
            std::cout << "     `\"\"\"`\n";

            std::cout << "\n";
            std::cout << "In the very middle of the court is a table, with a large dish of tarts upon it. They look really good, making you feel quite hungry.\n";
            std::cout << "You see twelve jurors writing busily on slates. You wonder how they have anything to write down before the trial's begun.\n";
            std::cout << "*      *      *\n";
            std::cout << "What do you do?\n";

            char choice1 = 'x';

            for (int i = 0; i < 3 && choice1 != 'A' && choice1 != 'B' && choice1 != 'C'; i++) {

                std::cout << "Enter A if you ask the Gryphon next to you what the jurors are doing.\n";
                std::cout << "Enter B if you sneak a tart.\n";
                std::cout << "Enter C if you sit and wait for the trial to begin.\n";
                std::cin >> choice1;

            }

            switch (choice1) {

            case 'A':
                std::cout << "The Gryphon explains that the jurors are writing down their names for fear they should forget before the end of the trial.\n";
                std::cout << "'How stupid!' you say in a loud voice, but you are cut off.\n";
                std::cout << "'SILENCE IN THE COURT!' shrieks the White Rabbit. The king puts on his glasses and looks around anxiously to see who was talking.\n";
                std::cout << "You manage to keep your mouth shut and the King fails to notice you.\n";
                break;

            case 'B':
                std::cout << "Just as you get your hand on a scrumptious-looking tart, you hear a bellowing voice that fills you with dread.\n";
                std::cout << "'YOU did it!' screams the Queen of Hearts.\n";
                std::cout << "'I did what?' you ask.\n";
                std::cout << "'SHE stole the tarts! Thief! OFF WITH HER HEAD!' the Queen is pointing at you. Her face is growing redder as her voice gets higher.\n";
                std::cout << "Several cards dressed as guards carry you off to be executed.\n";
                std::cout << "Just as your head is on the chopping block, you catch a glimpse of a wide smile in the tree above.\n";
                std::cout << "THE END\n";
                return 0;

            case 'C':
                std::cout << "The court begins to settle down.\n";
                break;

            default:
                std::cout << "Sorry, you haven't entered a valid choice.\n";
                std::cout << "Goodbye.\n";
                return 0;

            }

            std::cout << "'Herald, read the accusation!' yells the King.\n";
            std::cout << "On this the White Rabbit blows three blasts on the trumpet, and then unrolls the parchment scroll, and reads as follows:\n";
            std::cout << "\n";
            std::cout << "'The Queen of Hearts, she made some tarts,\n";
            std::cout << "    All on a summer day:\n";
            std::cout << "The Knave of Hearts, he stole those tarts,\n";
            std::cout << "    And took them quite away!'\n";
            std::cout << "\n";
            std::cout << "'Consider your verdict,' says the King to the jury.\n";
            std::cout << "'Not yet, not yet,' the Rabbit hastily interrupts him.\n";
            std::cout << "\n";

            std::cout << "*      *      *\n";
            std::cout << "As the first witness is called, you notice a bit of cake in your pocket. You are still very hungry.\n";
            std::cout << "Do you eat the bit of cake in your pocket?\n";
            char choice2 = 'x';

            for (int i = 0; i < 3 && choice2 != 'A' && choice2 != 'B'; i++) {

                std::cout << "Enter A if you eat the cake.\n";
                std::cout << "Enter B if you decide to wait until the trial is over.\n";
                std::cin >> choice2;

            }

            if (choice2 != 'A' && choice2 != 'B') {

                std::cout << "Sorry, you haven't entered a valid choice.\n";
                std::cout << "Goodbye.\n";
                return 0;

            }
            else if (choice2 == 'B') {

                std::cout << "Your stomach rumbles audibly, interrupting the interrogation.\n";
                std::cout << "'YOU did it!' screams the Queen of Hearts.\n";
                std::cout << "'I did what?' you ask.\n";
                std::cout << "'SHE stole the tarts! Thief! OFF WITH HER HEAD!' the Queen is pointing at you. Her face is growing redder as her voice gets higher.\n";
                std::cout << "Several cards dressed as guards carry you off to be executed.\n";
                std::cout << "Just as your head is on the chopping block, you catch a glimpse of a wide smile in the tree above.\n";
                std::cout << "THE END\n";
                return 0;

            }

            std::cout << "You eat the cake and it really does make you feel better. Meanwhile, the trial proceeds...\n";
            std::cout << "The first witness is the Hatter.\n";
            std::cout << "'Give your evidence,' says the King, 'and don't be nervous, or you'll be executed on the spot.'\n";
            std::cout << "\n";

            std::cout << "*      *      *\n";
            std::cout << "While the Hatter answers nervously, you suddenly feel a very curious sensation — you are growing larger.\n";
            std::cout << "It must have been the cake you ate...\n";
            std::cout << "What do you do?\n";
            char choice3 = 'x';

            for (int i = 0; i < 3 && choice3 != 'A' && choice3 != 'B'; i++) {

                std::cout << "Enter A if you get up and leave the court.\n";
                std::cout << "Enter B if you decide to remain where you are as long as there is room for you.\n";
                std::cin >> choice3;

            }

            if (choice3 != 'A' && choice3 != 'B') {

                std::cout << "Sorry, you haven't entered a valid choice.\n";
                std::cout << "Goodbye.\n";
                return 0;

            }
            else if (choice3 == 'A') {

                std::cout << "You leave the court room in search of a way home.\n";
                std::cout << "However, everyone who could help you is still in the court room, so you wander the forest for years.\n";
                std::cout << "THE END\n";
                return 0;

            }

            std::cout << "You stay, much to the annoyance of the Dormouse who is getting squeezed sitting next to you.\n";
            std::cout << "'Never mind!' says the King to the Hatter, 'call the next witness.'\n";
            std::cout << "'— and just take his head off outside' says the Queen to one of the officers.'\n";
            std::cout << "You watch the White Rabbit fumble over the list. He reads at the the top of his shrill voice:\n";
            std::cout << "ALICE!\n";
            std::cout << "\n";
            std::cout << "*      *      *\n";
            std::cout << "In your surprise, what do you do?\n";

            char choice4 = 'x';

            for (int i = 0; i < 3 && choice4 != 'A' && choice4 != 'B' && choice4 != 'C'; i++) {

                std::cout << "Enter A if you rise up and declare yourself present.\n";
                std::cout << "Enter B if you stay seated and shout 'Here!'.\n";
                std::cout << "Enter C if you do nothing.\n";
                std::cin >> choice4;

            }

            if (choice4 != 'A' && choice4 != 'B' && choice4 != 'C') {

                std::cout << "Sorry, you haven't entered a valid choice.\n";
                std::cout << "Goodbye.\n";
                return 0;

            }
            else if (choice4 == 'A') {

                std::cout << "'Here!' You jump up in such a hurry that you knock over the jury box with the edge of your skirt.\n";
                std::cout << "The jury is scattered across the floor.\n";
                std::cout << "'The trial cannot proceed,' says the King accusingly, 'until all the jurymen are back in their proper places.'\n";
                std::cout << "You hastily put as many jury members back in place as you can";

            }
            else if (choice4 == 'C') {

                std::cout << "All eyes turn to you, except for the King and Queen.\n";
                std::cout << "'That's Alice,' the Gryphon points you out helpfully, even as you glare at him.\n";

            }

            std::cout << "'What do you know about this business?' the King asks you.\n";
            std::cout << "'Nothing,' you reply, honestly.\n";
            std::cout << "The King reads from his book, 'Rule forty-two. All persons more than a mile high to leave the court.'\n";

            std::cout << "*      *      *\n";
            std::cout << "How do you respond?\n";

            char choice5 = 'x';

            for (int i = 0; i < 3 && choice5 != 'A' && choice5 != 'B' && choice5 != 'C'; i++) {

                std::cout << "Enter A if you agree to leave the court.\n";
                std::cout << "Enter B if you argue about your height with the King.\n";
                std::cout << "Enter C if you flip over the jury box again and steal a tart.\n";
                std::cin >> choice5;

            }

            switch (choice5) {

            case 'A':
                std::cout << "You leave the court room in search of a way home.\n";
                std::cout << "However, everyone who could help you is still in the court room, so you wander the forest for years.\n";
                std::cout << "THE END\n";
                return 0;

            case 'B':
                std::cout << "'I'm not a mile high,' you say.\n";
                std::cout << "'Nearly TWO miles high,' says the Queen of Hearts.\n";
                std::cout << "'Well, I shan't go at any rate,' you reply.\n";
                std::cout << "'Hold your tongue!' says the Queen turning purple.\n";
                std::cout << "'I won't!' you retort.\n";
                std::cout << "'Off with her head!' the Queen shouts at the top of her voice.\n";
                std::cout << "'Who cares?' you ask, realizing how small everyone has become. 'You're nothing but a pack of cards!'\n";
                break;

            case 'C':
                std::cout << "'Stuff and nonsense!' you yell, as you flip over the jury box - this time on purpose.\n";
                std::cout << "'Hold your tongue!' says the Queen turning purple.\n";
                std::cout << "'I'll do no such thing!' you retort.\n";
                std::cout << "You scoop up the remaining tarts, which now appear to be very small, and shove them all in your mouth.\n";
                std::cout << "You hear the Queen cry, 'Off with her head!' as you begin to storm out of the court.\n";
                break;

            default:
                std::cout << "Sorry, you haven't entered a valid choice.\n";
                std::cout << "Goodbye.\n";
                return 0;
            }

            std::cout << "At this, the whole pack rises up into the air and flies down on you.\n";
            std::cout << "You try to beat them off, and awake to find yourself lying on the bank of the river with your head in your sister's lap.\n";
            std::cout << "'Wake up, Alice dear!' your sister says. 'Why, what a long sleep you've had!'\n";
            std::cout << "'Oh I've had such a curious dream' you reply. And you tell her, as well as you can remember, all the strange adventures you've just had.\n";

        }
        break;
        case 5:
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

            break;
        }
        case 6:
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
            break;
        }
        default :
            std::cout << "Invalid Selection\n"; 
            break;
        }
    }
}
