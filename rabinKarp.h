//#ifndef PREFIXFUNCTION_H
//#define PREFIXFUNCTION_H

#include <iostream>
#include <string>
#include <string.h>
#include <math.h>
#include <cstdlib>

using namespace std; 

int countSpuriousHits(string text, string pattern, int d, int q){ //Function explicitly for numerical text data
	int n=text.length();
	int m=pattern.length();
	int d_cal=pow(d,m-1);
	int hash=d%q;
	char p[m+1];
	
	int count;
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<m;j++){
			p[j]=text[i+j];
		}
		p[2]='\0';
		int comp=atoi(p)%q;
		if(comp==hash && (strcmp(p,pattern.c_str())!=0)){
			count++;
		}
	}
	return count;
}

int main(){
	string t="3141592653589793";
	string pat="26";
	cout<<countSpuriousHits(t,pat,26,11);
}

//#endif
