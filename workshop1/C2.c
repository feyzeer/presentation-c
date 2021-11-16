
#include <unistd.h>
#include <stdio.h>

int main(){
    float km = 200, miles;

   float miles = km * 1.609;
    
    printf("%f miles = %f km",miles,km);
   
    return 0;
} 