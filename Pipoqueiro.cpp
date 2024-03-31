#include <bits/stdc++.h>
using namespace std;

int main(){
int a,b,c,v1,v2,v3;

while(EOF){
    cin >> a;
    cin >> b;
    cin >> c;
    v1 = (b*2) + (c*3);
    v2 = (a*2) + (c*2);
    v3 = (a*4) + (b*2);
    cout << fmin(fmin(v1, v2), v3)<< endl;
}

return 0;
}
