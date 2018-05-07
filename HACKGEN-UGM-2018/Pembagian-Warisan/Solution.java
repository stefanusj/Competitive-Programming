// Status : Accepted

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N;
        long x1, y1, x2, y2;
        
        N = sc.nextInt();
        x1 = sc.nextInt(); y1 = sc.nextInt();
        while(N!=0) {
            for(int i=0; i<N; i++) {
                x2 = sc.nextInt(); y2 = sc.nextInt();
                if(x2 > x1 && y2 > y1) System.out.println("Budi");
                else if(x2 > x1 && y2 < y1) System.out.println("Tono");
                else if(x2 < x1 && y2 > y1) System.out.println("Johan");
                else if(x2 < x1 && y2 < y1) System.out.println("Didi");
                else System.out.println("Perbatasan");
            }
            N = sc.nextInt();
            if(N!=0){
                x1 = sc.nextInt(); y1 = sc.nextInt();
            }
        } 
    }
}