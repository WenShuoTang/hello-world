#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
typedef struct SNode{
    char data;
    struct SNode *next;
}SNode,*Stackptr;
int main(){
    int i;
    char c;
    char s[1000]={0};
    scanf("%s",s);
    Stackptr p,S,S1,r;
    S->next=NULL;
    i=strlen(s)-1;
    while(i>=0){//ÈëÕ»
        p=(Stackptr)malloc(sizeof(SNode));
        p->data=s[i];
        p->next=S;
        S=p;
        i--;
    }
    while(S->next!=NULL){
        if(S->data=='('){
            S=S->next;
            c=S->data;
            S=S->next;
            S1=(Stackptr)malloc(sizeof(SNode));
            S1->next=NULL;
            while(S->data!=')'){
                r=(Stackptr)malloc(sizeof(SNode));
                r->data=S->data;
                r->next=S1;
                S1=r;
                S=S->next;
            }
            while(S1->next!=NULL){
                if(S1->data=='B'){
                    printf("%ctsaedsae",c);
                }
                else if(S1->data=='A'){
                    printf("%csae",c);
                }
                else{
                    printf("%c%c",c,S1->data);
                }
                S1=S1->next;
            }
            printf("%c",c);
        }
        else{
            if(S->data=='B'){
                printf("tsaedsae");
            }
            else if(S->data=='A'){
                printf("sae");
            }
            else{
                printf("%c",S->data);
            }
        }
        S=S->next;
    }
    return 0;
}

