// QUESTION #2: Write a program using FOR statement that displays a right triangle using asterisks where
// the height is at the right corner of the application. The height will depend on the user input.

#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

int main() {
    int i;
    int h;
    int j;
    int x;

    cout<<"Enter height of the right triangle: ";
    cin>>h;
    cout<<endl;

    for (i=0, j=0; i < h; i++, j+=2) {
        for (x = 0 ; x < (h*2) - j -2; x++) {
            cout<<" ";
        }
        for (x = 0; x <= j; x++){
            cout<<"*";
        }
        cout<<endl;
    }

system ("pause");
    return 0;

}