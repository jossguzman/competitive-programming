#include <bits/stdc++.h>

using namespace std;



int main(){
	int N,Q;
	char action;
	int people;
	int a,b;
	int total;
	cin>>N>>Q;
	vector <int> edificios;
	int edificio, cantidad;
    edificios.push_back(0);
	while(N--){
		cin>>people;
		edificios.push_back(people);
	}

	while(Q--){
		cin>>action;
		if(action=='q'){
			total=0;
			cin>>a>>b;
			for(int i=a;i<=b;i++){
                
                total+=edificios[i];
            }
			
			cout<<total<<endl;
		}
		else{
			cin>>edificio>>cantidad;
			edificios[edificio]+=cantidad;
		}
	}
	
}