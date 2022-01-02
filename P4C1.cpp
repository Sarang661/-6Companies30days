string encode(string src)
{     
 string s="";
 int prev=0;
 for(int i=0;i<src.length();i++){
     if(i>0 && src[i]!=src[i-1]){
         int num=i-prev;
         s+=src[i-1]+to_string(num);
         prev=i;
     }
     if(i==src.length()-1){
         int num=i-prev+1;
         s+=src[i]+to_string(num);
     }
 }
 return s;
}     
 
