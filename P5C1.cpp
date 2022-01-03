class Solution {
public:
    int nthUglyNumber(int n) {
        	  int arr[n+1];
	  arr[0]=0;
	  arr[1]=1;
	  int pos1=1;
	  int pos2=1;
	  int pos3=1;
	    int i2=1;
	     int j3=1;
	      int k5=1;
	  for(int i=2;i<n+1;i++){
	     int num1=i2*2;
	        int num2=j3*3;
	             int num3=k5*5;
	             int minimum =min(num1,min(num2,num3));
	               arr[i]=minimum;
	              if(minimum==num1){
	                  pos1++;
	                  i2=arr[pos1];
	                       
	              }
	              if(minimum==num2){
	                  pos2++;
	                    j3=arr[pos2];
	              }
	              if(minimum==num3){
	                  pos3++;
	                   k5=arr[pos3];
	              }
	             
	  }
	  return arr[n];
    }
};