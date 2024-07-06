#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t; cin >> t;
    int o = t;
    int sol[o] = {0};
    int counter = 0;
    while(t--)
    {
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        
        int count[101] = {0};
        
        for (int i = 0; i < n; i++) count[arr[i]]++;
        
        int element = 0;
        for (int i = 0; i < 101; i++)
        {
            if(count[i] == 1)
            {
                element = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == element)
            {
                sol[counter] = i;
                counter++;
                break;
            }
        }
        
        
        
    }
    for (int i = 0; i < o; i++) cout << sol[i] + 1 << endl;    
    return 0;
}