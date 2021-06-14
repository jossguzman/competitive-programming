#include <iostream>
#include<string>

using namespace std;

int main() 
{
    int N,M;
    string V;
    int y=1;
    while(cin>>M>>N){


        if(M == 0 && N == 0)break;

        if(y!=1)cout<<endl;

   
        char mine[M+2][N+2];
        int res[M+2][N+2];

        for(int i=1; i <= M; i++){
            cin>>V;
            for(int j=1; j <= N; j++){
                res[i][j]=0;
                mine[i][j]=V[j-1];
            }
        }

         for(int i=1; i <= M; i++){
            for(int j=1; j <= N; j++){
                if(mine[i][j]=='*'){
                    res[i-1][j]  = res[i-1][j] + 1; //Arriba
                    res[i-1][j-1] = res[i-1][j-1] + 1; //Arriba Izq
                    res[i-1][j+1] = res[i-1][j+1] + 1; //Arriba Der
                    res[i][j+1] = res[i][j+1] + 1; //Derecha
                    res[i][j-1] = res[i][j-1] + 1; //Izquierda
                    res[i+1][j] = res[i+1][j] + 1; //Abajo
                    res[i+1][j+1] = res[i+1][j+1] + 1; // Abajo Der
                    res[i+1][j-1] = res[i+1][j-1] + 1; //Abajo Izq
                };
            }
        }
        cout<<"Field #"<<y<<":"<<endl;
        for(int i=1; i <= M; i++){
            for(int j=1; j <= N; j++){
                if(mine[i][j]=='*'){
                    cout<<"*";
                }
                else{
                    cout<<res[i][j];
                }
                if(j>N)cout<<" ";
            }
            cout<<endl;
        }
        y++;
    }

}