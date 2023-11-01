#include <stdio.h>
#include <math.h>
#define N 100


// Παράδειγμα προγράμματος που αποτελείται από ένα μόνο αρχείο .c.
//
// - Το τρέχουμε με Ctrl-Shift-B (ή Terminal/ Run task / Single file: compile and run)
// - Κάνουμε debug με F5

int main() {
    double current , sum = 0.0, s1 = 0.0 , s2= 0.0 , s3= 0.0 ,s4= 0.0 , s5 = 0.0,s6 = 0.0 , P= 1.0;
    int i = 1;
    int countS3 = 0;
    int countS5 = 0;
    for (i=1 ; i<=N ; i++) {
        current = 1.0/((double)i*(double)i);
        if(i%2 == 1) s1 +=  1.0/((double)i*(double)i); else s1 -=  1.0/((double)i*(double)i);
        if(i%2 == 1) s2 += 1.0 /(double)i; else s2 -= 1.0 /(double)i;
        
        if (i%2 == 1 && countS3 ==0){
            s3 += 1.0 /(double)i;
            countS3 = 1;
        }else if (i%2 == 1 && countS3 ==1)
        {
            s3 -= 1.0 /(double)i;
            countS3 = 0;
        }
        
        if (i%2 == 1 && i<100){ 
            s4 += 1.0 /((double)i * ((double)i + 2.0));
        }
        if (i%2 == 0 && countS3 == 0) {
            s5 +=  1.0 /((double)i * ((double)i + 1.0) * ((double)i + 1.0));
            countS3 = 1;
        }else if (i%2 == 0 && countS3== 1)
        {
            s5 -=  1.0 /((double)i * ((double)i + 1.0) * ((double)i + 1.0));
            countS3 = 0;
        }
        s6 +=  1.0/((double)i*(double)i * (double)i*(double)i);
        if (i % 2 ==0){
            P *= (double)i / ((double)i - 1);
            P *= (double)i / ((double)i + 1);
        }
    }
    printf("s1= %12.10f\ns2= %12.10f\ns3= %12.10f\ns4= %12.10f\ns5= %12.10f\ns6= %12.10f\nP= %12.10f\nTerm= %d\n" , s1 , s2 , s3, s4 , s5 , s6, P , i-1);
}