//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int c=5;
    struct node a,b,*head ;
    a.value = c;
    a.next=&b;
    head=&a;
    b.value=head->value+3;
    
    struct node d;
    b.next=&d;
    b.next->value=11;
    d.next=NULL;
    
    struct node f;
    f.next=&a;
    head=&f;
    f.value=2;
    
    
    
    
    
    
    printf("%d\n", head ->value ); //what value for 5
    printf("%d\n", head ->next->value ); //what value for 8
    printf("%d\n",head->next->next->value ); 
    printf("%d\n", head->next->next->next->value ); 
   
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */
    
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)    
*/
   
    

 typedef struct node* NodePtr;
  
    NodePtr tmp=head; //add temp value to faciliate
        
    /*  Exercise III Use loop to print everything
        
          // What is missing???
        }
    */
  /*int i,n=4;
        for(i=0;i<n;i++){
            printf("%3d\n", tmp->value);
            tmp=tmp->next;
            }*/ 

   /*  Exercise IV change to while loop!! (you can use NULL to help)
       
         
           // What is missing???
        }
    */
    while(tmp!=NULL)
    {
            printf("%3d\n", tmp->value);
            tmp=tmp->next;
    }
    for(tmp=head; tmp!=NULL;  tmp=tmp->next){
     printf("%3d\n", tmp->value);
     }
  for(tmp=head; tmp!=NULL;  tmp=tmp->next){
   head=head->next;
    printf("Free %d\n",tmp->value);
    free(tmp);}
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
          
     */
    printf("\n\n");
      head=(NodePtr)malloc(sizeof(struct node));
      tmp=head;
      for(int i=0;i<3;i++)
      {

       tmp->next=(NodePtr)malloc(sizeof(struct node));
        tmp=tmp->next;
        tmp->next=NULL;
        tmp->value=i+3;
        printf("%3d\n",tmp->value);
      }
  //    free();
       
    /*  Exercise VI Free all node !!
         //use a loop to help
          
     */
    
    return 0;
}
