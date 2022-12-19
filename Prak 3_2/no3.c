#include <stdio.h>
// No 3 PRAK 3_2
int main() 
{
    float nilai ;

   
    printf("\t\t GRADE NILAI\n\n") ;
    grader :
    printf("\tMasukkan nilai :") ;
    scanf("%f",&nilai) ;

    if( nilai > 80 && nilai <= 100 ) 
    {
        printf("\tGrade : A") ;
    }
    else if(  nilai > 60 && nilai <= 80 ) 
    {
        printf("\tGrade : B") ;
    }
    else if(  nilai > 55 && nilai <= 60 ) 
    {
        printf("\tGrade : C") ;
    }
    else if(  nilai > 40 && nilai <= 55 ) 
    {
        printf("\tGrade : D") ;
    }
    else if( nilai <= 40 ) 
    {
        printf("\tGrade : E") ;
    }
    
    else 
    {
        printf("\n\n") ;
        printf("\t\t ERROR! \n") ;
        printf("\tMasukkan nilai dalam range 1 - 100 ! \n\n") ;
        goto grader ;
    }

}