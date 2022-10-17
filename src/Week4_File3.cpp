//============================================================================
// Name        : Week4_File3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
	ifstream input("input.txt");
	int n, m;
	input >> n >> m;
	//cout << left;
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < m; ++i) {
			int num;
			input >> num;
			input.ignore(1);
			if (i == m - 1 && j == n - 1) {
				cout << setw(10) << num;
			} else if(i == m - 1) {
				cout << setw(10) << num << endl; ;
			}
			else{
				cout << setw(10) << num << " ";
			}
		}
	}
	return 0;
}
