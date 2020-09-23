#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int a[101],sum_cur[101],n,dem;bool check[101];

void back_track(int i,int sum_init){
	
	for(int j=a[i-1];j <=sum_init - sum_cur[i-1];j++){
		
		if(check[j]){
			
			a[i] = j;
			sum_cur[i]  = a[i] + sum_cur[i-1];
			if(sum_cur[i]==sum_init){
				cout<<"[";
				for(int x=1;x<=i;x++){
					cout<<a[x];
					if(x==i) cout<<"] ";
					else cout<<" ";
					dem++;
				}
				
			}
			
			else{
				back_track(i+1,sum_init);
			}
			
		
		}
	}
}
int main(){
	int T;
	cin>>T;
	
	for(int i=0;i<=100;i++){
		check[i] = false;
	}
	while(T--){
		
		dem = 0;
		int sum_init;
		cin>>n>>sum_init;
		int c[n];
		for(int i=0;i<n;i++){
			cin>>c[i];
		}
		
		
		
		int min = 100;
		for(int i=0;i<n;i++){
			if(c[i]<min) min = c[i];
		}
		
		for(int i=0;i<n;i++){
			check[c[i]] = true;
		}
		
		sum_cur[0] = 0;
		a[0] = min;
		back_track(1,sum_init);
		if(dem==0) cout<<-1;
		for(int i=0;i<n;i++){
			check[c[i]] = false;
		}
		cout<<endl;
		
	}
}
