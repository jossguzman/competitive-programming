#include <bits/stdc++.h>
using namespace std;

map<string,int> total;

int main() {
	int T;
	string p,s1,s2;
	cin>>T;
	while(T--){
		total.clear();
		cin>>p;
		int l=p.size();
		int i=0;
		int j=l/2;
		if(!(l%2)){
			s1=p.substr(0,j);
			s2=p.substr(j,l);
		}
		else{
			s1=p.substr(0,j);
			s2=p.substr(j+1,l);
		}
	
		sort(s1.begin(),s1.end());
		
		sort(s2.begin(),s2.end());
		
		//cout<<"s1: "<<s1<<endl;
		//cout<<"s2: "<<s2<<endl;
		total[s1]++;
		total[s2]++;
		
		if(total.size()==1)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	
	return 0;
}