#pragma once

#include <vector>
#include <string>

void display_misses(int misses);
void greet();
void end_game(std::string answer, std::string codeword);
void display_status(std::vector<char> incorrect, std::string answer);
std::string LoadWords(int i);
std::string LoadBlanks(int in);
