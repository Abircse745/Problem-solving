#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int b=0;
   int c=0;
   for(int i=0;i<s.size();i++){
     if(s[i]>='a'&&s[i]<='z'){
        b=b+1;
     }
     else{
        c++;
     }
   }
   if(b>=c){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;
   }
   else{
     transform(s.begin(), s.end(), s.begin(), ::toupper);
     cout<<s<<endl;
   }
    return 0;
}
