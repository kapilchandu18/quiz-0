string removeDuplicates(string str, int m)
{ string current_str="";
current_str+=str[0];
for(int j=1;j<m;j++){
if(current_str.find(str[j])>100000) current_str+=str[j];
} 
return current_str;    
}