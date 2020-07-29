#include<iostream>
using namespace std;
int main()
{
	int L,N,W,H;
	cin>>L;
	cin>>N;
	
	for(int i=0;i<N;i++){
	
	    cin>>W;
        cin>>H;
	   
		if(L>W || L>H)
	
		{
		        cout<<"UPLOAD ANOTHER"<<endl;
			
		}else if(W!=H){
				cout<<"CROP IT"<<endl;
			
		}else{
				cout<<"ACCEPTED"<<endl;
		}
	}
	return 0;


}
