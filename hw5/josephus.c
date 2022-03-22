#include<stdio.h>
#include<stdlib.h>
struct person
{
    int num;
    struct person *next;
};
struct person *top=NULL;

void createpersons(int people)
{
    struct person *temp;
    struct person *bottom;
    int a,ch;
    for(int l = 1; l<=people; l++){
        temp=(struct person *)malloc(sizeof(struct person));
        temp->num=l;
        temp->next=NULL;
       
        if(top==NULL)
        {
            top=temp;
            temp->next=top;
        }
        else
        {
            bottom=top;
            while(bottom->next!=top)
            {
                bottom=bottom->next;
            }
            bottom->next=temp;
            temp->next=top;
        }
    }
}

int survivor(int k)
{
    struct person *p,*q;
    int i;
    p=top;
    q=top;
    while(p->next!=p)
    {
        for(i=0;i<k-1;i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        printf("%d is done \n",p->num);
        free(p);
        p=q->next;
    }
    top=p;
    return (p->num);
}

int main(){

int survive;
int people;
int skipper;

printf("how many people? \n");
scanf("%d", &people);
createpersons(people); 
printf("how many we skipping? \n");
scanf("%d",&skipper);
survive=survivor(skipper);
printf("person %d is making it \n",survive);
free(top);
}
