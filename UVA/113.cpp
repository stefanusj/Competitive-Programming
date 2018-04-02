// Status:
// Problem: https://uva.onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=49

#include<stdio.h>
#include<math.h>

using namespace std;

main(){
    double n, p;
    while(scanf("%lf\n%lf", &n, &p) != EOF){
        printf("%.0lf\n", pow(p, 1.0/n));
    }
}
