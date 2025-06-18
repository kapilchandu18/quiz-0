#include <bits/stdc++.h>
#include<iostream>
#include<string>

bool checkPalindrome(string s){
string output="";
for(int j=0;j<s.length();j++){
if (s[j]>=65 && s[j]<=90) s[j]+=32;
if (isalnum(s[j])){
   output+=s[j];     
}
}
int k=output.length();
int d=0;
for(int j=0;j<k/2;j++){
 if(output[j]==output[k-j-1])  d++;

}
 return d==k/2;   
}