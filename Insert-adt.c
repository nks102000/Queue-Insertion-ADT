void insert(struct queue **q,int data){
    if((*q)->r==max-1){
        printf("\n Overflow");
        return;
    }
    if((*q)->f==-1 && (*q)->r==-1){
        (*q)->f=0;
        (*q)->r=0;
        (*q)->qu[(*q)->f]=data;
    }
    else{
        (*q)->r++;
        (*q)->qu[(*q)->r]=data;
    }
}