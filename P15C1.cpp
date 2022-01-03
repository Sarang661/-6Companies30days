class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int n =arr.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            int num=arr[i]%k;
            if(num<0){
                num+=k;
            }
            m[num]++;
        }
        for(int i=0;i<n;i++){
            int h =arr[i]%k;
            if(h<0){
                h+=k;
            }
            if(h==0){
                if(m[h]%2==1){
                    return false;
                }
            }
            else{
                if(m[h]!=m[k-h]){
                    return false;
                }
            }
        }
        return true;
    }
};