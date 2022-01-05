class Solution {
private:
    int gcd(int n,int m){
         if (m== 0)
        return n;
    return gcd(m, n % m);
    }
public:
    string gcdOfStrings(string str1, string str2) {
       if(str1+str2!=str2+str1){
           return "";
       }
        int n =str1.length();
        int m =str2.length();
        int ansLength=gcd(n,m);
        return str1.substr(0,ansLength);
    }
};