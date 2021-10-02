#include<iostream>
using namespace std;
int main(){
    //we can reduce the runtime a lot by adding two lines.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int n;
    cout << "Enter the number : ";
    cin >> n ;
    n = n & (n-1);
    cout << "The number after toggling right most set bit : " << n << endl;
    return 0;
}
