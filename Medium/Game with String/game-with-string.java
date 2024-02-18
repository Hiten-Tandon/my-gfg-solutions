//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG{
    public static void main(String args[])throws IOException
    {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while(t-- > 0){
            String s = in.readLine();
            int k = Integer.parseInt(in.readLine());
            
            Solution ob = new Solution();
            System.out.println(ob.minValue(s, k));
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution{
    static int minValue(String s, int k){
        int[] counts = new int[26];
        s.chars().forEach(x -> ++counts[x - 'a']);
        
        PriorityQueue<Integer> pq = new PriorityQueue<Integer>((a, b) -> b - a);
        for(int c: counts) {
            pq.offer(c);
        }
        while(k-->0) {
            int count = pq.poll();
            pq.offer(count - 1);
        }
        
        return pq.stream().mapToInt(x->x*x).sum();
    }
}