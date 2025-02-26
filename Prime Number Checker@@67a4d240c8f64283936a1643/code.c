void isPrime(num){
    int P=1;
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            P=0;
            break;
        }
    }
}