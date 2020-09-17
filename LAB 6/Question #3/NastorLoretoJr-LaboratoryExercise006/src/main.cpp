// QUESTION #3:	3.	Write a program using DO WHILE statement that displays an inverted equilateral triangle
// using asterisks. No asterisk should be adjacent to one another. The height will depend on the user input.

#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

int main() {
    int h;
    int i = 0;
    int j;

    cout<<"Enter height of the right triangle: ";
    cin>>h;
    
    do {
        j = i;
        do {
            if (j >0) {
                cout<<" ";
            }
            j--;
        }
        while (j > 0);
        j = ( h * 2) - 1;
        do {
            if (j % 2 == 0)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
            j--;
        } while (j > 0);
        cout<<endl;
        i++;
        h--;   
    }
        while (h > 0);
        
system ("pause");
    return 0;
}