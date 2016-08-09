#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    string angka[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int a,b,i;
    cin >> a >> b;
    for(i= a; i <= b; i++){
       
        if(i <= 9)cout << angka[i] << endl;
        else{
            if(i%2)cout << "odd" << endl;
            else cout << "even" << endl;
        }
    }// Complete the code.
    return 0;
}
