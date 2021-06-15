#include <bits/stdc++.h>

using namespace std;

int main(){


    int N,x,y,max,i,aux,res;
    map<int, int> mp;

    while(cin>>N){

        mp.clear() ;

        if(N==1){
            cin>>y;
            cout<<"Jolly"<<endl;}
        else{
            max = N-1;
            res=0;
            int input[N];
    
            for(int i=0; i < N; i++){
                cin>>input[i];
            }
            for(int i=0; i < N-1; i++){
                aux = abs(input[i+1]-input[i]);
                if(aux >= 1 && aux < N)mp.insert({aux,1});
            }
            if(mp.size()==max)cout<<"Jolly"<<endl;
            else{
                cout<<"Not jolly"<<endl;
            }
        }



    }


    return 0;
}
