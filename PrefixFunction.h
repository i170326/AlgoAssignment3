#ifndef PREFIXFUNCTION_H
#define PREFIXFUNCTION_H

#include <iostream>
#include <string>

using namespace std; 

void prefixFunction(string pattern,int * indexes){
	int j=0;
	indexes[0]=0;
	int i=1;
	while(i<pattern.length()){
		if(pattern[j]==pattern[i]){
			j++;
			indexes[i]=j;
			i++;
		}
		else{
			if(j!=0){
				j=indexes[j-1];
			}
			else{
				indexes[i]=0;
				i++;
			}
		}
	}
}

#endif
