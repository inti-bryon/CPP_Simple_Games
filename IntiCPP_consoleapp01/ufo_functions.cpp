#include <iostream>
#include <vector>
#include <string>

// Define functions
void greet() {
    std::cout << "\n\n=============\nUFO: Hangman Game\n=============\nInstructions: save your friend from alien abduction by guessing the letters in the codeword.\n\n";
}

void end_game(std::string answer, std::string codeword) {
    //check to see if the player won or lost
    if (codeword == answer) {
        //player won
        std::cout << "\nHooray! You saved your BFF :)\n\n";
    }
    else {
        std::cout << "\nOh no! The UFO just got away...\n\nThe Word Was: " << codeword;
    }
}

void display_status(std::vector<char> incorrect, std::string answer) {
    //print incorrect guesses
    std::cout << "\n\tIncorrect Guesses: ";
    for (int i = 0; i < incorrect.size(); i++) {
        std::cout << incorrect[i] << " ";
    }
    std::cout << "\n\tCodeword: ";
    //print answer thus far
    for (int i = 0; i < answer.size(); i++) {
        std::cout << answer[i] << " ";
    }

    std::cout << "\n";
}

std::string LoadWords(int i) {

    std::vector<std::string> options = { "sports", "league", "turtledove", "halloween", "enchantment", "sterling", "expedition", "impressive", "christmas", "precinct", 
                                        "microsoft", "convertible", "cupcake", "bucket", "computer", "purple", "twisted", "hurricane", "wonderful", "amazing",
                                        "luggage", "microscope", "touchdown", "interception", "dolphin", "picture", "tournament", "soccer", "basketball", "sasquatch", 
                                        "riveting", "waterfall", "elephant", "pencil", "skeleton", "sandcastle", "xylophone", "telephone", "robot", "stormtrooper", 
                                        "playground", "duplex", "motorcycle", "skateboard", "rollerblades", "costume", "artist", "magnolia", "sunflower", "orchid" };

    return options[i];
}

std::string LoadBlanks(int in) {
    std::string ReturnString;

    for (int i = 0; i < in; i++) {
        ReturnString = ReturnString + "_";
    }
    return ReturnString;
}

void display_misses(int misses) {

    if (misses == 0 || misses == 1) {

        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              /     \\        (   Help me!  ) \n";
        std::cout << "             /   0   \\      / `-----------'  \n";
        std::cout << "            /  --|--  \\    /                 \n";
        std::cout << "           /     |     \\                     \n";
        std::cout << "          /     / \\     \\                   \n";
        std::cout << "         /               \\                   \n";

    }
    else if (misses == 2) {

        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              /  0  \\        (   Help me!  ) \n";
        std::cout << "             / --|-- \\      / `-----------'  \n";
        std::cout << "            /    |    \\    /                 \n";
        std::cout << "           /    / \\    \\                    \n";
        std::cout << "          /             \\                    \n";
        std::cout << "         /               \\                   \n";

    }
    else if (misses == 3) {

        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              /--|--\\        (   Help me!  ) \n";
        std::cout << "             /   |   \\      / `-----------'  \n";
        std::cout << "            /   / \\   \\    /                \n";
        std::cout << "           /           \\                     \n";
        std::cout << "          /             \\                    \n";
        std::cout << "         /               \\                   \n";

    }
    else if (misses == 3) {

        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              /--|--\\        (   Help me!  ) \n";
        std::cout << "             /   |   \\      / `-----------'  \n";
        std::cout << "            /   / \\   \\    /                \n";
        std::cout << "           /           \\                     \n";
        std::cout << "          /             \\                    \n";
        std::cout << "         /               \\                   \n";

    }
    else if (misses == 4) {

        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              /  |  \\        (   Help me!  ) \n";
        std::cout << "             /  / \\  \\      / `-----------' \n";
        std::cout << "            /         \\    /                 \n";
        std::cout << "           /           \\                     \n";
        std::cout << "          /             \\                    \n";
        std::cout << "         /               \\                   \n";

    }
    else if (misses == 5) {

        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              / / \\ \\        (   Help me!  ) \n";
        std::cout << "             /       \\      / `-----------'  \n";
        std::cout << "            /         \\    /                 \n";
        std::cout << "           /           \\                     \n";
        std::cout << "          /             \\                    \n";
        std::cout << "         /               \\                   \n";

    }
    else if (misses == 6) {

        std::cout << "                 .                            \n";
        std::cout << "                 |                            \n";
        std::cout << "              .-\"^\"-.                       \n";
        std::cout << "             /_....._\\                       \n";
        std::cout << "         .-\"`         `\"-.                  \n";
        std::cout << "        (  ooo  ooo  ooo  )                   \n";
        std::cout << "         '-.,_________,.-'    ,-----------.   \n";
        std::cout << "              /     \\        (   Help me!  ) \n";
        std::cout << "             /       \\      / `-----------'  \n";
        std::cout << "            /         \\    /                 \n";
        std::cout << "           /           \\                     \n";
        std::cout << "          /             \\                    \n";
        std::cout << "         /               \\                   \n";

    }

}