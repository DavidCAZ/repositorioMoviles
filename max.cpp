#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	float v[n][2],w[2],a;
	int t[n];
	for(int i=0;i<n;i++){
		cin >> v[i][0];
		cin >> v[i][1];	
		cin >> t[i];
	}
	cin >> w[0];
	cin >> w[1];
	int c=-1,c2=1;
	int val=0;
	bool b=true;
	do{
		c++;
		a=(w[0]*v[c][0])+(w[1]*v[c][1]);
		cout << "i=" << c << "  a= " << a << endl << endl;
		if(a>=0)
			a=1;
		else
			a=0;
		if(a==0 && t[c]==1){
			w[0]+=v[c][0];
			w[1]+=v[c][1];
		}
		else if(a==1 && t[c]==0){
			w[0]-=v[c][0];
			w[1]-=v[c][1];
		}
		if(c==n)
			c=-1;
		if(a==t[c])
			c2++;
		if(c2==3)
			b=false;
		}while(b);
		cout << w[0] << " " << w[1];
}
