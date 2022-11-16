#include <iostream>
#include <vector>
#include <string>
#include "TicGame.h"

using namespace std;


bool CheckWin(char a_game[3][3], string player_name) {
	bool did_win = false;
	//possible winning combos ---> 123, 147, 159, 258, 369, 357, 456, 789
	
    if (a_game[0][0] == a_game[0][1] && a_game[0][1] == a_game[0][2] && a_game[0][0] == a_game[0][2]) {
        did_win = true;
    }
    else if (a_game[0][0] == a_game[1][0] && a_game[1][0] == a_game[2][0] && a_game[0][0] == a_game[2][0]) {
        did_win = true;
    }
    else if (a_game[0][0] == a_game[1][1] && a_game[1][1] == a_game[2][2] && a_game[0][0] == a_game[2][2]) {
        did_win = true;
    }
    else if (a_game[0][1] == a_game[1][1] && a_game[1][1] == a_game[2][1] && a_game[0][1] == a_game[2][1]) {
        did_win = true;
    }
    else if (a_game[0][2] == a_game[1][2] && a_game[1][2] == a_game[2][2] && a_game[0][2] == a_game[2][2]) {
        did_win = true;
    }
    else if (a_game[0][2] == a_game[1][1] && a_game[1][1] == a_game[2][0] && a_game[0][2] == a_game[2][0]) {
        did_win = true;
    }
    else if (a_game[1][0] == a_game[1][1] && a_game[1][1] == a_game[1][2] && a_game[1][0] == a_game[1][2]) {
        did_win = true;
    }
    else if (a_game[2][0] == a_game[2][1] && a_game[2][1] == a_game[2][2] && a_game[2][0] == a_game[2][2]) {
        did_win = true;
    }

	return did_win;
}

void PrintBoard(char a_game[3][3]) {
    //print board
    cout << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 1) {
                cout << "| " << a_game[i][j] << " |";
            }
            else {
                cout << " " << a_game[i][j] << " ";
            }
        }
        if (i == 0 || i == 1) {
            cout << "\n --|---|-- \n";
        }
        else {
            cout << "\n";
        }
    }
    cout << endl;
}

bool CheckTie(char a_game[3][3]) {
    bool is_tie = true;
    
    set<char> nums_check = { '1','2','3','4','5','6','7','8','9' };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            char tie_char = a_game[i][j];
            if (nums_check.count(a_game[i][j])) is_tie = false;
        }
    }

    return is_tie;
}
