#include<iostream>
#include<string>

using namespace std;

string countMaxRepeatCharinWord(string str)
{
    int i, j = 0, count = 0, prevCount = 0;
    string tempString, tempsecondString;

    // Initialize tempString as an empty string
    tempString = "";

    for (i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            tempString += str[i];
            if (i + 1 < str.length() && str[i] == str[i + 1])
            {
                count++;
            }
            else
            {
                if (count > prevCount)
                {
                    prevCount = count;
                    tempsecondString = tempString;
                }
                count = 0;
                tempString.clear();
            }
        }
    }

    // Check for the last word
    if (count > prevCount)
    {
        tempsecondString = tempString;
    }

    return tempsecondString;
}

int main()
{
    string str;
    cout << "Enter the string" << endl;
    getline(cin, str);

    string result = countMaxRepeatCharinWord(str);

    cout << "Solved:---->" << endl;
    if (!result.empty())
    {
        cout << result << " has the maximum repeated characters." << endl;
    }
    else
    {
        cout << "No word with repeated characters found." << endl;
    }

    return 0;
}

//Write a C++ program to find a word in a given string that has the highest number of repeated letters.
//Example:
//Sample Input: Print a welcome text in a separate line.
//Sample Output: Word which has the highest number of repeated letters. separate
