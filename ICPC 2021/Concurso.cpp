#include <bits/stdc++.h>


using namespace std;

int main(){
    int T;
    cin>>T;
    string perro;
    int ovejas;
	map <int,string> perros;
    
    while(T--){
        cin>>perro>>ovejas;
       
        perros[ovejas]=perro;
    }
    long long int producto = 1;
    vector<string> perrosT;
    auto it = perros.end();
    it--;
    perrosT.push_back(it->second);
    producto*=it->first;
    it--;
    perrosT.push_back(it->second);
    producto*=it->first;
    it--;
    perrosT.push_back(it->second);
    producto*=it->first;
    sort(perrosT.begin(), perrosT.end());
    cout<<perrosT[0]<<" "<<perrosT[1]<<" "<<perrosT[2]<<" "<<producto<<endl;

}
