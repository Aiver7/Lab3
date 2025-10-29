#ifndef TOOLS_H
#define TOOLS_H
#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

int menu(void);
string read(string name);
void write(string name, string data);
string first_method(string data,int seed);
string second_method(string data,int seed);
string text_to_binary(string text);
string binary_to_text(string binary);

#endif // TOOLS_H
