#include <iostream>
#include <vector>
#include <cctype>
#include "shiftfunctions.hpp"


using namespace std;

int main(void)
{
    vector<int> initArray;
    int arrSize;
    int shifts;
    char sortLR = 'h';

    cout << "How many integers do you want in your array?\n";
    cin >> arrSize;
    cout << "Please enter your integers:\n";
    for (int i = 0; i < arrSize; i++)
    {
        int temp;
        cin >> temp;
        initArray.push_back(temp);
    }

    cout << "\n";
    for (int i = 0; i < arrSize; i++)
    {
        cout << initArray[i] << " ";
    }

    cout << "\nHow many times do you want to shift the array?\n";
    cin >> shifts;

    while (sortLR != 'L' && sortLR != 'R')
    {
        cout << "\nDo you want to sort left or right? (L/R)\n";
        cin >> sortLR;
        sortLR = toupper(sortLR);
        if (sortLR == 'L' || sortLR == 'R')
        {
            break;
        } else {
            cout << "ERROR: Must be a valid answer.\n";
        }
    }
    
    


    if (sortLR == 'L')
    {
        arrayShiftLeft(initArray, shifts);
    } else if (sortLR == 'R') {
        arrayShiftRight(initArray, shifts);
    }

}