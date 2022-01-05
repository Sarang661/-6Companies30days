/**
 * @input A : Integer
 * @input B : Integer
 * @input C : Integer
 * 
 * @Output Integer
 */
int solve(int A, int B, int C) {
    int ans =(A+C-1)%B;
        if(ans==0){
            // return n;
            // cout<<B<<"\n";
            return B;
        }
        else{
            // return ans;
            // cout<<ans<<"\n";
            return ans;
        }
}