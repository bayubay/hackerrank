#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int number;

cin >> number;

    if (number <= 9)
    {
        if(number == 1) {
		cout << "one";
	} else if(number == 2) {
		cout << "two";
	} else if(number == 3) {
		cout << "three";
	} else if(number == 4) {
		cout << "four";
	} else if(number == 5) {
		cout << "five";
	} else if(number == 6) {
		cout << "six";
	} else if(number == 7) {
		cout << "seven";
	} else if(number == 8) {
		cout << "eight";
	} else if(number == 9) {
		cout << "nine";
	}
    }
    else
    {
        cout << "Greater than 9";
    }

    cout << endl;/* Enter your code here. Read input from STDIN. Print output to STDOUT */   
 
   return 0;
}
