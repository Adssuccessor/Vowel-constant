#include<stdio.h>
#include<string.h>
int main(){
    char a[45]="*Nothing is impossible in this world.";//input given
    int i=0,m=0,d=0,n=0,r=0;
    int k=strlen(a);
    for(i=0;i<k;i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='O'||a[i]=='I'||a[i]=='U'){
            m++;
        }
        else if((a[i]>64&&a[i]<91)||(a[i]>96&&a[i]<123)){
            d++;
        }
        else if(a[i]==' '){
            n++;
        }
        else{
            r++;
        }
    }
    printf("Words=%d\n",n+1);
    printf("Vowels=%d\n",m);
    printf("Constant=%d\n",d);
    printf("Space=%d\n",n);
    printf("Special character=%d",r);
    return 0;
}