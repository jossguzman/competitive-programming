#include <bits/stdc++.h>
using namespace std;

 
char letra;
 
 
int main(){
    int T;
    int N;
    cin>>T;
    int total[] = {0,0,0,0,0,0};
    while(T--){
    	cin>>N;
    	int turno[] = {0,0,0,0,0,0};
    	while(N--){
    		cin>>letra;
    		if(letra=='A'){turno[0]+=1;
    			total[0]+=1;
    		}
    		else if(letra=='B'){turno[1]+=1;
    			total[1]+=1;
    		}
    		else if(letra=='C'){turno[2]+=1;
    			total[2]+=1;
    		}
    		else if(letra=='D'){turno[3]+=1;
    			total[3]+=1;
    		}
    		else if(letra=='E'){turno[4]+=1;
    			total[4]+=1;
    		}
			else {
				turno[5]+=1;
    			total[5]+=1;
    		}

    	}
    	cout<<"A:"<<turno[0]<<" B:"<<turno[1]<<" C:"<<turno[2]<<" D:"<<turno[3]<<" E:"<<turno[4]<<" F:"<<turno[5]<<endl;
   
    }
	cout<<"TOTAL: A:"<<total[0]<<" B:"<<total[1]<<" C:"<<total[2]<<" D:"<<total[3]<<" E:"<<total[4]<<" F:"<<total[5]<<endl;
}	