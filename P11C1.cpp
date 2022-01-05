 int *findTwoElement(int *arr, int n) {
      int xor1=0;
      for(int i=0;i<n;i++){
          xor1=xor1^arr[i];
      }
      for(int i=1;i<=n;i++){
          xor1=xor1^i;
      }
    
      int h =((xor1)&(-xor1));
      int x1=0;
      int y1=0;
    
      for(int i=0;i<n;i++){
         if((h&arr[i])){
             x1=x1^arr[i];
         }
         else{
             y1=y1^arr[i];
         }
      }
               
      for(int i=1;i<=n;i++){
            
          if((h&i)){
               
              x1=x1^i;
                      
          }
          else{
              y1=y1^i;
          }
      }
    
      int *ty=new int[2]; 
      for(int i=0;i<n;i++){
          if(arr[i]==x1){
            ty[0]=x1;
              ty[1]=y1;
              break;
          }
          else if(arr[i]==y1){
              ty[0]=y1;
             ty[1]=x1;
          }
      }
      return ty;
    }