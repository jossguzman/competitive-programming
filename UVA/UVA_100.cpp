#include <iostream>
using namespace std;

int main() 
{
    int x,y,min,max,maxval,aux,val;

    while(cin>>x>>y){
        if(x>y){
            max = x;
            min =y;
        }
        else{
            max = y;
            min = x;
        }
       maxval = 0;
        for(int i = max ; i => min ; i--){
            val = 1;
            aux=i;

            while(aux!=1){
                if(aux%2==0)aux=aux/2;
                else{
                    aux = (aux*3)+1;

                }
                val++;

            }

            if(val > maxval) maxval = val;
        }

        cout<<x<<" "<<" "<<y<<" "<<maxval<<endl;
    }

}

