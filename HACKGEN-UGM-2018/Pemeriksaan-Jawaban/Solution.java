// Status : Accepted

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] data = new int[4];
        
        ArrayList<Integer> pakAbdi = new ArrayList<>();
        for(int i =0; i<N; i++) {
            pakAbdi.add(sc.nextInt());
        }
        Collections.sort(pakAbdi);
        
        for(int i = 0; i<4; i++) {
            for(int j=0; j<N; j++) {
                if(sc.nextInt() != pakAbdi.get(j)) {
                    data[i]++;
                }
            }
        }
        int min = data[0];
        for(int i=1; i<4; i++) {
            min = Math.min(min, data[i]);
        }
        
        if(min == data[0]) System.out.println("Budi");
        else if(min == data[1]) System.out.println("Didi");
        else if(min == data[2]) System.out.println("Johan");
        else if(min == data[3]) System.out.println("Tono");
    }
}