#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int count[101] = {0};
    for (int i = 0; i < n; i++) count[a[i]]++;
    int sum = 0;
    for (int i = 0; i < 101; i++) sum += (count[i] >= 2? count[i] / 2 : 0);


    cout << sum / 2 << endl;
    

    return 0;
}