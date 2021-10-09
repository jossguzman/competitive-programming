#include <bits/stdc++.h>
using namespace std;

int main() {
  int T,N,M;
  int mini;
  int baskets[60];
  map<int,int> fruits;
  map<int, int>::iterator itr; 
  int j;
  scanf("%d",&T);
  while(T--){
    for(int i=0;i<60;i++)
    	baskets[i]=0;
    scanf("%d",&N);
    scanf("%d",&M);
    for(int i=1;i<=N;i++)
      scanf("%d",&baskets[i]);
  
    for(int i=1;i<=N;i++){
      scanf("%d",&j);
      fruits[baskets[i]]+=j;
    }
    int i=1;
    mini = 1<<30;
   for(itr = fruits.begin(); itr != fruits.end(); ++itr){
    	//printf("%d ",itr->second);
          mini = min(mini,itr->second);
	      i++;
    }
    //printf("\n");
    printf("%d\n",mini);
    fruits.clear();
  }
  return 0;
}