#include<iostream>
int main(){
    int n,k;
    do{
        std::cin>>n>>k;
    }while(n<1 && n>100 && k<0 && k>n);
    
    int* a=new int[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    int* old_a=a;
    int kk=k;
    int res=n-k;//5
    for(int i=0;i<n;i++){
        if(i<k){
            a[i]=old_a[res];
            res++;
        }else{
            a[i]=old_a[kk];
            kk++;
        }
            
    }
    for(int i=0;i<n;i++){
        std::cout<<a[i];
        if(i<n){
            std::cout<<"空格";
        }
    }
    
    delete []old_a;
    delete []a;
    return 0;
}