#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N,P,Y,X;
    int comp_convidados;
    int resultado= 0;

    cin>>N>>P;

    while ( N>0){
            cin>>Y>>X;
            comp_convidados=Y+X;
            if (comp_convidados >=P){
                resultado +=1;
            }
            N--;
    }
    cout<<resultado;
    return 0;
}
