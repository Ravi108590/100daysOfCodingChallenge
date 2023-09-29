#include<iostream>
#include<string>

using namespace std;

void maxLengthWord(string str)
{
    int maxCount = 0;
    string maxWord;
    int count = 0;
    string currentWord;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] != ' ')
        {
            currentWord += str[i];
            count++;
        }
        else
        {
            if(count > maxCount)
            {
                maxCount = count;
                maxWord = currentWord;
            }
            currentWord.clear();
            count = 0;
        }
    }

    // Check the last word
    if(count > maxCount)
    {
        maxCount = count;
        maxWord = currentWord;
    }

    cout << "Maximum Word: " << maxWord << " : Number of Characters: " << maxCount << endl;
}

int main()
{
    string str;
    cout << "Enter the String:" << endl;
    getline(cin, str);
    maxLengthWord(str);
    return 0;
}

