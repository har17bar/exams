#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


void curentwordforrevers(char *check,string *tox);

string stringrevers(string bar);

int main() {
	char wordforrevers[] = "Hello  world  bar   aan";
	string tox;
	curentwordforrevers(wordforrevers,&tox);
	
	cout << tox << endl;
	
}

void curentwordforrevers(char *check,string *tox) {

	int i = 0;
	int j = 0;
	string bar;
	
	while (check[i] != '\0')
	{
		if (check[i] != ' ') {
			bar = bar + check[i];
			i++;
			if (check[i] == '\0') {
				*tox = *tox + bar;
			}
			i--;
		}
		else {
			*tox = *tox + stringrevers(bar);
			bar = "";
		}
		if (check[i] == ' ') {j = i;
			while (check[i] == ' ') {
				*tox = *tox + ' ';
				i++;
			}
			i--;
		}
		i++;
	}
}


string stringrevers(string bar){
	int length = bar.length();
	char tmp;
	for (int i=0, j= length-1; j>= (length - 1)/2 || i<length/2;i++ ,j--)
	{
		tmp = bar[i];
		bar[i] = bar[j];
		bar[j] = tmp;
	}
	return bar;
}
