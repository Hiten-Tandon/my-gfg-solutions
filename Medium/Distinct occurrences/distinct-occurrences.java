//{ Driver Code Starts
import java.util.*;

class Distinct_Occurrences
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		sc.nextLine();
		while(t>0)
		{
			String line = sc.nextLine();
			String S = line.split(" ")[0];
			String T = line.split(" ")[1];
			
			Solution ob = new Solution();
			System.out.println(ob.subsequenceCount(S,T));
			t--;
		}
	}
}
// } Driver Code Ends


/*You are required to complete this method*/

final class Solution
{
    private static final int MOD = 1_000_000_007;
    
    private static final int rec(
        final String s, 
        final String t, 
        final int sPos, 
        final int tPos, 
        final int[][] dp
    ) {
        if(tPos == t.length()) {
            return 1;
        }
        
        if(sPos == s.length()) {
            return 0;
        }
        
        if(dp[sPos][tPos] == -1) {
            dp[sPos][tPos] = rec(s, t, sPos + 1, tPos, dp) % MOD;
            if(s.charAt(sPos) == t.charAt(tPos)) {
                dp[sPos][tPos] += rec(s, t, sPos + 1, tPos + 1, dp);
                dp[sPos][tPos] %= MOD;
            }
        }
        
        return dp[sPos][tPos];
    }
    
    public static final int subsequenceCount(final String s, final String t) {
        final int[][] dp = new int[s.length()][t.length()];
        
        for(final int[] row: dp) {
            Arrays.fill(row, -1);
        }
        
        return rec(s, t, 0, 0, dp);
    }
}