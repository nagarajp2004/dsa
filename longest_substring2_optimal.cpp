 #include<iostream>
using namespace std;
//length of a longest substring

 int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0, r = 0;
        int len = 0, maxlen = 0;
       /////////////////wrong  int hash[256] = {-1};
         int hash[256] ;
        fill(hash,hash+256,-1);
        while (r <n) {
            if (hash[s[r]] != -1) {
                if (hash[s[r]] >= l) {
                    l = hash[s[r]] + 1;
                }
            }
            
            len=(r-l)+1;
            cout<<l;
           
            maxlen=max(maxlen,len);

            hash[s[r]]=r;
            r++;
        }
       
        return maxlen;
    }
    int main()
    {
 string s="a";
 cout<<lengthOfLongestSubstring(s);
 }