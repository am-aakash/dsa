import java.util.*;
import java.lang.*;
import java.io.*;

public class Solution {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        while(t-->0){
            long n = scan.nextInt(), m = scan.nextInt();
            long x = scan.nextLong();
            if (x%n==0) System.out.println(((x/n)-1)+ (n-1)*m + 1); 
            else System.out.println((x/n) + (x%n - 1)*m +1);
        }
    }
}
