//Namaste if Indian, Bonjour if French.
#include<stdio.h>
void Namaste();
void Bonjour();

int main(){
    printf("RA2211042010028\n");
    printf ("Enter your nationality (i/I for Indian, f/F for French) : \n");
    char ch;
    scanf("%c", &ch);
    if(ch=='i' || ch=='I'){
        Namaste();
    }
        else if(ch=='f' || ch=='F'){
            Bonjour();
        }
        else {
            printf("NULL\n");
        }
    return 0;
}

void Namaste(){
printf("Namaste\n");
}
void Bonjour(){
printf("Bonjour\n");
}
