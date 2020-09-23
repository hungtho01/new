#include<iostream>
using namespace std;
int dem,n,m;
void back_track(int i,int j){
	if(i+1<n){
		back_track(i+1,j);
	}
	if(j+1<m){
		back_track(i,j+1);
	}
	if(i==n-1&&j==m-1){
		dem++;
	}
}
int main(){
	int T;
	cin>>T;
	while(T--){
		dem = 0;
		cin>>n>>m;
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		back_track(0,0);
		cout<<dem<<endl;
	}
}
