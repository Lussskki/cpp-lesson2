#include <bits/stdc++.h>
using namespace std;
int n, b, a, x;
main() {
    cin>>a>>b>>n;
    x = n * a + b * n / 100;
    cout<<x<<" "<<(b*n) % 100;
}

//task 
/*
    cake
    task. One cake costs - dollar and cent. How much do you want?
    Shall we pay in n cakes?
    Input data: three integers a, b and n (0 <= a, b, n < 100).
    Output data: two integers - the amount to be paid in hryvnias and
    in caps.
*/

