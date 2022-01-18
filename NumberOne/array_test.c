main(){
    int s[50];
    int i;

    for (i=0;i<50;++i){
        s[i] = i*i;
        printf("%d\n",s[i]);
    }
    printf("Your array there:\n");
    i = 0;
    while(i < 50){
        printf("%d,",s[i]);
        ++i;
    }
}
