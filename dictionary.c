#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
//#include<stdbool.h>
#include "header.h"

int main(){
   node* root=load();
   int ch;
   char word[50];
   char meaning[200];


   while(1)
   {
    printf("This is SUBODH's Dictionary\n1.View the dictionary\n2.Add a new word\n3.Search a word(autocomplete available)\n4.Delete a word\n0.Exit the dictionary\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 0: printf("Unloading dictionary");
                  unload_rec(root);
                  exit(0);
            break;
        case 1: view();
            break;
        case 2: add(root);
            break;
        case 3: printf("Enter the word:\n");
                  scanf("%s",word);


                   for(int i=0;i<1000;i++);

                 if(search(root,word))
                  {


                      strcpy(meaning,search(root,word));
                      printf("Meaning:%s\n",meaning);

                  }
                  else{
                    printf("word not found\n");
                    printAutoSuggestions(root,word);
                  }


            break;
        case 4: printf("Enter the word to be deleted:\n");
                scanf("%s",&word);
                deletion(&root,word);
            break;
        default : printf("\nenter a valid key\n");

    }

   }
    return 0;
 }
