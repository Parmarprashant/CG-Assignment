int n=5;
   for(int i=1; i<=n; i++){
        for(int j=0; j<=n; j++){
            if(j<=n-i){
                printf(" ");
                
            }
            else{
                printf("%c",'A'+j-(n-i)-1);
            }
        }
        printf("\n");
    }