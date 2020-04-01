#ifndef OPTIMISEDNAIVESEARCH_H
#define OPTIMISEDNAIVESEARCH_H

#include <iostream>
#include<string>
using namespace std;

void optimisedNaiveSearch(string text, string pattern){
	
	int m=pattern.length();
	int n=text.length();
	int i=0;
	while (i <= n - m)  
    {    
    	bool match=true;int inc; //If pattern found + increment of i
        for (int j = 0; j < m; j++)  
            if (text[i + j] != pattern[j])  
                {match=false; inc=j;
				break;
			}
  
        if (match==true) //Pattern found
        {  
            cout << "Pattern found at index " << i << endl;  
            i = i + m;  
        }  
        //Shifting Pattern
        else if (inc == 0)  
            i = i + 1;  
        else
            i = i + inc; 
    }  
}

#endif
