#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int count[100] = {0};
    for (int i = 0; i < n; i++) count[a[i]]++;
    int sum = 0;
    for (int i = 0; i < 100; i++) sum += (count[i] >= 2? count[i] : 0);


    cout << ( sum - ( sum % 4 ) ) / 4  << endl;
    


    return 0;
}