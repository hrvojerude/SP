#include <iostream>
using namespace std;
struct pac{
    int ai,bi,ci,di,ei,datum;
    char ime[20],prezime[20],spol[1];
    pac*sljedeci;
};

struct queue{
        pac*polje[5000];
        int front;
        int rear;
};


int addone(int rear){
        rear=(rear+1)%5000;
        return rear;
}
void init(queue*q){
        q->front=0;
        q->rear=4999;
}

int empty(queue*q){
        if(addone(q->rear)==q->front)return 1;
        else return 0;
}

void enQueue(queue*q,pac*novi_pac){
        pac*novi=new pac;
        novi=novi_pac;
        q->rear=addone(q->rear);
        q->polje[q->rear]=novi;
}

void deQueue(queue*q){
        q->front=addone(q->front);
}

pac*frontQueue(queue*q){
        return q->polje[q->front];
}
