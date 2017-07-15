import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int d = in.nextInt();
        int arr[] = new int[n];
        int arr2[] = new int[n];
        for(int i=0; i < n; i++){
            arr[i] = in.nextInt();
           
        }
        
        for(int i=0; i < n; i++){  
            if((i+d) < n){
              arr2[i] = arr[i+d];
            }
            else {
                arr2[i] = arr[i+d-n];
            }
        }
        
        
        
        for(int i=0; i < n; i++){  
            System.out.print(arr2[i] + " ");
        }
        
        
        
    }
}