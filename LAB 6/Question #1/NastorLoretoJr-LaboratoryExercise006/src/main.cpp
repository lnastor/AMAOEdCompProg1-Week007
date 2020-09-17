// QUESTION #1:	Write a program using WHILE statement that displays a right triangle using asterisks where
// the height is at the left corner of the application. The height will depend on the user input.

#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

int main() {
    int h;
    int i = 0;
    int j = 0;

    cout<<"Enter height of the right triangle: ";
    cin>>h;
    cout<<endl;

    while (h > 0) {
                j = i;
                while (j >= 0){
                    cout<<"*";
                    j--;
                }
                cout<<endl;
                h--;
                i++;
    }

system ("pause");
    return 0;

}