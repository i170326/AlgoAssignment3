#ifndef ZALGORITHM_H
#define ZALGORITHM_H

#include <iostream>
#include <string>

using namespace std; 

void populateZ(string C, int Z[]){
	int n=C.length();
	int L=0; 
	int R=0;
	int k;
	
	for (int i=1;i<n;i++){
		//cout<<"entering loop"<<endl;
		if(i>R){
			L=i; R=i;
			while(C[R-L]==C[R] && R<n)
				R++;
			Z[i]=R-L; //cout<<Z[i]<<endl;
			R--;
		}
		else{
			k=i-L;
			if (Z[k]>=R-i+1){
				L=i;
				while(C[R-L]==C[R] && R<n)
					R++;
				Z[i]=R-L;
				R--;
			}
			else{
				Z[i]=Z[k];
			}
		}
	}
	/*for (int i=0;i<n;i++)
		cout<<Z[i]<<endl;*/
}

void zAlgorithm(string text, string pattern){
	string C=pattern + "$" + text;
	//cout<<C<<endl;
	int n=C.length();
	int m=pattern.length();
	int Z[n];
	//cout<<"Populating Z";
	populateZ(C,Z);
	for(int i=0;i<n;i++){
		//cout<<"priting";
		if(Z[i]==m)
			cout<<"Pattern found at index"<<i-m-1<<endl;
	}
}

#endif
