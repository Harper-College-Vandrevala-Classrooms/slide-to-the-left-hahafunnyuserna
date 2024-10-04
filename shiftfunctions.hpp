#include <iostream>
#include <vector>

using namespace std;

void arrayShiftLeft (vector<int> initArray, int shifts)
{
    for (int i = 0; i < shifts; i++)
    {
        int first = initArray[0];
        for (int j = 0; j < initArray.size() - 1; j++)
        {
            initArray[j] = initArray[j + 1];
        }
        initArray[initArray.size() - 1] = first;
    }

    for (int i = 0; i < initArray.size(); i++)
    {
        cout << initArray[i] << " ";
    }
}

void arrayShiftRight (vector<int> initArray, int shifts)
{
    for (int i = 0; i < shifts; i++)
    {
        int last = initArray[initArray.size() - 1];
        for (int j = initArray.size() - 1; j >  0; j--)
        {
            initArray[j] = initArray[j - 1];
        }
        initArray[0] = last;
    }

    for (int i = 0; i < initArray.size(); i++)
    {
        cout << initArray[i] << " ";
    }
}