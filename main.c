#include <stdio.h>

void Swap(int*a,int*b)
{
    int temp;
    temp=*a;*a=*b;*b=temp;
}

int main(int argc, char *argv[]) 
{
    char str[7];
    int data[100];
    int i,j,k,count=0;
    
    while(fgets(str, sizeof(str), stdin)){
        data[count]=atoi(str);
        count++;
    }
    
    for(i=0;i<count;i++){
        printf("%d",data[i]);
        if(i==count-1)
            putchar('\n');
        else
            putchar(' '); 
    }
    
    for(i=0;i<count;i++){
        for(j=count-1;j>0;j--){
            if(data[j]<data[j-1]){
                Swap(&data[j],&data[j-1]);
                for(k=0;k<count;k++){
                    printf("%d ",data[k]);
                    if(k==count-1)
                        putchar('\n');
                    else
                        putchar(' ');
            }
        }
    }

    return 0;
}
