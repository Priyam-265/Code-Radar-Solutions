int isPrime(){
    int isP=1;
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            isP=0;
            break;
        }
    }
    return 0;
}