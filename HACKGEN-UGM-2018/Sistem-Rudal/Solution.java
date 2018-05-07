// Status : Accepted

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
        int[] jangkauan = new int[N];
        int[] jarak = new int[K];
        
        if(N<K) System.out.println("Tidak");
        else if(N>=K){
            for(int i=0; i<N; i++) {
                jangkauan[i] = sc.nextInt();
            }
            
            for(int i=0; i<N-1; i++) {
                for(int j=0; j<N-1; j++) {
                    if(jangkauan[j+1] > jangkauan[j]) {
                        int tmp = jangkauan[j+1];
                        jangkauan[j+1] = jangkauan[j];
                        jangkauan[j] = tmp;
                    }
                }
            }
                
            for(int i=0; i<K; i++) {
                jarak[i] = sc.nextInt();
            }

            for(int i=0; i<K-1; i++) {
                for(int j=0; j<K-1; j++) {
                    if(jarak[j+1] > jarak[j]) {
                        int tmp = jarak[j+1];
                        jarak[j+1] = jarak[j];
                        jarak[j] = tmp;
                    }
                }
            }
        
            int sukses[] = new int[K];
            int sum = 0;
            for(int i=0; i<K; i++) {
                for(int j=i; j<K; j++) {
                    if(jangkauan[i] >= jarak[j] && sukses[i] != 1) {
                        sukses[j] = 1;
                        sum += sukses[i];
                        break;
                    }
                }
            }
            if(sum == K) {
                System.out.println("Ya");
            }else {
                System.out.println("Tidak");
            }
        }
        
    }
}