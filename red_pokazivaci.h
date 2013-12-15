struct pac{
    int ai,bi,ci,di,ei,datum;
    char ime[20],prezime[20],spol[1];
    pac*next;
};

struct queue{
        pac*front,*rear;
};

void init(queue*q){
        pac*glava=new pac;
        q->rear=glava;
        q->front=glava;
}

int empty(queue*q){
        if(q->rear==q->front)return 1;
        else return 0;
}

void enQueue(queue*q,pac*novi_pac){
        pac*novi=new pac;
        novi=novi_pac;
        q->rear->next=novi;
        q->rear=novi;
        novi->next=NULL;
}

void deQueue(queue*q){
        pac*brisani_element=q->front;
        q->front=brisani_element->next;
        delete brisani_element;
}

pac*frontQueue(queue*q){
        return q->front->next;
}
