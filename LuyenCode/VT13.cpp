#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
}

// #include <iostream>
// using namespace std;

// int main (){
//     int n;
//     cin >> n;
//     int a[10000];
//     for (int i=0; i<n; i++){
//         cin >> a[i];
//     }
//     a[n] = a[0];
//     int max = 0, sum = 0, b[3];
//     for (int i=0; i<n+1; i++){
//         sum = a[i] + a[i+1];
//         if (sum >= max){
//             max = sum;
//             b[0] = a[i];
//             b[1] = a[i+1];
//         }
//     }
//     cout << b[0] << " " << b[1];

//     return 0;
// }