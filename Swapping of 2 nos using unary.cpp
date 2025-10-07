#include<bits/stdc++.h>
using namespace std;
void prime(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}

int main() {
    int a=10,b=20;
    prime(a,b);
    cout<<a<<" "<<b<<endl;
}
