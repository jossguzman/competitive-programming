#include <bits/stdc++.h>
using namespace std;

map<int,int> seq;

int main() {
	int T,N,k;
	cin>>T;
	while(T--){
		cin>>N;
		while(N--){
			cin>>k;
			seq[k]++;
		}
		
		int a = seq.begin()->first;
		int b = next(seq.begin())->first;
		cout<<a+b<<endl;
		seq.clear();
	}
	
	return 0;
}