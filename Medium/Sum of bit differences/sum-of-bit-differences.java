//{ Driver Code Starts
//Initial Template for Java



import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine());
        while (tc-- > 0) {
            int n = Integer.parseInt(br.readLine());
            int[] arr = new int[n];
            String[] inputLine = br.readLine().split(" ");
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine[i]);
            }

            System.out.println(new Solution().sumBitDifferences(arr, n));
        }
    }
}

// } Driver Code Ends


//User function Template for Java

class Solution {
    long sumBitDifferences(int[] arr, int n) {
        long[] counts = new long[32];
        long res = 0;
        
        for(int num: arr) {
            int pos = 0;
            while(num != 0) {
                int bit = num & 1;
                num >>= 1;
                counts[pos] += bit;
                ++pos;
            }
        }
        
        return java.util.Arrays.stream(counts).map(x -> x * (n - x)).sum() * 2;
    }
}