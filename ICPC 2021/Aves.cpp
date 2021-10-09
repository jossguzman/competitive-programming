#include <bits/stdc++.h>

using namespace std;

map <pair<int, int>, int> aves;

int main(){
    int F,C,P;
    cin>>F>>C>>P;
    int matriz[F+2][C+2];

    int ave;
    for(int i=1;i<=F;i++){
        for(int j=1;j<=C;j++){
            cin>>ave;
            matriz[i][j]=ave;
        }
    }
    int i,j;
    while (P--)
    {
        cin>>i>>j;
        if(matriz[i][j+1]==1)//derecha 
            aves[make_pair(i,j+1)]++;
        if(matriz[i][j-1]==1)//izquierda
            aves[make_pair(i,j-1)]++;
        if(matriz[i+1][j]==1)//abajo 
            aves[make_pair(i+1,j)]++;
        if(matriz[i-1][j]==1)//arriba
            aves[make_pair(i-1,j)]++;
        if(matriz[i-1][j+1]==1)//arriba derecha 
            aves[make_pair(i-1,j+1)]++;
        if(matriz[i-1][j-1]==1)//arriba izquierda 
            aves[make_pair(i-1,j-1)]++;
        if(matriz[i+1][j+1]==1)//abajo derecha 
            aves[make_pair(i+1,j+1)]++;
        if(matriz[i+1][j-1]==1)//abajo izquierda
            aves[make_pair(i+1,j-1)]++;
        if(matriz[i][j]==1)aves[make_pair(i,j)]++;
    }

    cout<<aves.size()<<endl;

    
}