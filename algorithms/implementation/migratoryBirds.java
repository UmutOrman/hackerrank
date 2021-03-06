import java.util.*;

public class Solution {

    static int migratoryBirds(int n, int[] ar) {
        // Complete this function
    	int[] typeFrequencies = new int[5];
    	for(int i = 0 ; i < ar.length; i++)
    		typeFrequencies[ar[i] -1] ++;
    	return findMax(typeFrequencies);
    }
    
    static int findMax(int[] typeFrequencies){
    	int max = -1,result = -1;    	
    	for(int i = 0; i < typeFrequencies.length; i++){
    		if(typeFrequencies[i] > max){
    			max = typeFrequencies[i];
    			result = i;
    		}
    	}
    	return result + 1;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] ar = new int[n];
        for(int ar_i = 0; ar_i < n; ar_i++){
            ar[ar_i] = in.nextInt();
        }
        int result = migratoryBirds(n, ar);
        System.out.println(result);
    }
}
