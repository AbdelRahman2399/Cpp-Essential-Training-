#include <cstdio>

int main(){
    int count = 0;
    int k=0;
for( int i = 0b00000010; i<0b10000000 ; i<<=1){
       for( int o =0b00000001 ;o<i;o++){
            k=i+o;
            for(int n=1;n<=k;n++){
                        if(k%n==0){
                            count++;
                            if(count>2){
                                break;
                            }

                        }
                    }
                    if(count==2){
                     printf("%d\n",k);
                    }
                    count = 0;
            if(k==100){
              break;
              }
       }


}

return 0;

}