#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){


        //dice variables
        struct timespec ts;

        clock_gettime(CLOCK_REALTIME, &ts);

        int dice_result;

        srand(ts.tv_nsec);

        dice_result = rand() % 32000;
        //end dice variables

    
        if(dice_result <= 1600){
            printf("1");


        } else if(dice_result > 1600 && dice_result <= 3200){
            printf("2");


        } else if(dice_result > 3200 && dice_result <= 4800){
            printf("3");


        } else if(dice_result > 4800 && dice_result <= 6400){
            printf("4");


        } else if(dice_result > 6400 && dice_result <= 8000){
            printf("5");

            
        } else if(dice_result > 8000 && dice_result <= 9600){
            printf("6");

            
        } else if(dice_result > 9600 && dice_result <= 11200){
            printf("7");

            
        } else if(dice_result > 11200 && dice_result <= 12800){
            printf("8");

            
        } else if(dice_result > 12800 && dice_result <= 14400){
            printf("9");

            
        } else if(dice_result > 14400 && dice_result <= 16000){
            printf("10");

            
        } else if(dice_result > 16000 && dice_result <= 17600){
            printf("11");

            
        } else if(dice_result > 17600 && dice_result <= 19200){
            printf("12");

            
        } else if(dice_result > 19200 && dice_result <= 20800){
            printf("13");

            
        } else if(dice_result > 20800 && dice_result <= 22400){
            printf("14");

            
        } else if(dice_result > 22400 && dice_result <= 24000){
            printf("15");

            
        } else if(dice_result > 24000 && dice_result <= 25600){
            printf("16");

            
        } else if(dice_result > 25600 && dice_result <= 27200){
            printf("17");

            
        } else if(dice_result > 27200 && dice_result <= 28800){
            printf("18");

            
        } else if(dice_result > 28800 && dice_result <= 30400){
            printf("19");

            
        } else{
            printf("20");
            
        }
    //}
    



    return 0;
}



