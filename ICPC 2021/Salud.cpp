#include <bits/stdc++.h>

using namespace std; 

map <int, vector <string>> personas;

int main(){
    string persona;
    int prioridad;
    int largo=0;
    while(cin>>persona){
        if(persona!="V"){
            cin>>prioridad;
            personas[prioridad].push_back(persona);
            largo++;
        }
        else{
            if(largo>0){
                auto it = personas.end();
                it--;
                cout<<it->second[0]<<endl;
                
                if(it->second.size()==1){
                	personas.erase(it);
                	largo--;
                }
                else{
                	it->second.erase(it->second.begin());
                }
            }
            else{
                cout<<endl;
            }
        }




    }



}
