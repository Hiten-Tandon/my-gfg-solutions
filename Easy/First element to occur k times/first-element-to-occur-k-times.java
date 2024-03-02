//{ Driver Code Starts
import java.util.*;
import java.io.*;
import java.lang.*;

public class GfG { 
	public static void main (String[] args) throws IOException  {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine().trim());
		while(t-->0){
		    String inputLine[] = br.readLine().trim().split(" ");
		    int n = Integer.parseInt(inputLine[0]);
		    int k = Integer.parseInt(inputLine[1]);
		    int[] arr = new int[n];
		    inputLine = br.readLine().trim().split(" ");
		    for(int i=0; i<n; i++)arr[i] = Integer.parseInt(inputLine[i]);
		    
		    Solution obj = new Solution();
		    System.out.println(obj.firstElementKTime(n, k, arr));
		}
	}
}

// } Driver Code Ends


final class Solution
{
    public static final int firstElementKTime(final int n, final int k, final int[] a) { 
        final HashMap<Integer, Integer> counter = new HashMap<Integer, Integer>();
        for(final int i: a) {
            counter.put(i, counter.getOrDefault(i, 0) + 1);
            if(counter.get(i) == k) {
                return i;
            }
        } 
        
        return -1;
    } 
}