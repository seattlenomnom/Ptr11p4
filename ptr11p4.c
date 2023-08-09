/* Source file for ptr11p4
 *
 * create a singly linked list with a list head. Create a function to delete
 * a given entry.
 *
 * printList() issues:
 * the logic needed is new, although I've written this before. Look for it
 * in a previous program or figure it out again?. Looked at ptr11p3.c, found
 * the problem.
 *
*/


/* includes */

#include <stdio.h>








/* defines */





/* define structures */

struct entry {
    int value;
    struct entry *next;
};







/* function declarations */

void deleteEntry(struct entry *p2Entry);
void printList(struct entry *p2ListHead);


int main(int argc, char *argv[]) {

    struct entry listHead, n1, n2, n3, n4, n5, *theEntry;


    /* init the values of the entries */

    listHead.value = 0;
    n1.value = 100;
    n2.value = 200;
    n3.value = 300;
    n4.value = 400;
    n5.value = 500;

    /* hook the entries together to form the list */

    listHead.next = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = (struct entry *) 0;

    /* print out the values of the list */

    printList(&listHead);







    return(0);
}



/* function definitions */

void deleteEntry(struct entry *p2Entry) {








}


void printList(struct entry *listHead) {

    struct entry *theEntry;

    if(listHead->next != (struct entry *) 0){
        theEntry = listHead->next;
        while(theEntry != (struct entry *) 0){
            printf("%i " , theEntry->value);
            theEntry = theEntry->next;
    }
        printf("\n");
    }

}













