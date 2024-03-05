/*You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare the Strings

    string s1 = "Darshan";
    string s2 = "Kshetri";

    // Intialize the ans string the stroing the answer of those strings
    string ans;

    // Calculate the size of the both string by usinh size or the length methods
    int size1 = s1.length();
    int size2 = s2.size();

    cout << size1 << endl;
    cout << size2 << endl;

    int i = 0;
    int j = 0;

    while (i < size1 || j < size2)
    {
        if (i < size1)
        {
            ans += s1[i];
            i++;
        }
        if (j < size2)
        {
            ans += s2[j];
            j++;
                }
    }

    cout << ans << endl;
    return 0;
}