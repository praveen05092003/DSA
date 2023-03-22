#include<iostream>
#include<string>
using namespace std;
int main(){
    int m;
    cin>>m;
    int i=1;
    while(i<=m)
    {
        string n;
        cin >> n;
        if (n == "c" || n == "o" || n == "d" || n == "e" || n == "f" || n == "o" || n == "r" || n == "c" || n == "e" || n == "s")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        i++;
    }
}