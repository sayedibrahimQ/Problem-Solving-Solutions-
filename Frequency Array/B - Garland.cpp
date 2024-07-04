#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string s1, s2; cin >> s1 >> s2; 

    int count1[26] = {0}, count2[26] = {0}, sum = 0;
    for (int i = 0; i <= s1.length(); i++) count1[s1[i] - 'a']++;
    for (int i = 0; i <= s2.size(); i++) count2[s2[i] - 'a']++;
        


    for(int i = 0; i < 26; i++)
    {
        if(count2[i])
        {
            if(count1[i])
            {
                sum += min(count2[i], count1[i]);
            }
            else
            {
                sum = 0;
                break;
            }
        }
    } 

    cout << (sum ? sum : -1) << endl;
    return 0;
}

