//{ Driver Code Starts
//Initial Template for C#


using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using DriverCode;

namespace DriverCode
{

    class GFG
    {
        static void Main(string[] args)
        {
            int testcases;// Taking testcase as input
            testcases = Convert.ToInt32(Console.ReadLine());
            while (testcases-- > 0)// Looping through all testcases
            {
                long N = Convert.ToInt64(Console.ReadLine());
                Solution obj = new Solution();
                long res = obj.count(N);
                Console.Write(res+"\n");
            }

        }
    }
}

// } Driver Code Ends


//User function Template for C#

class Solution
{
    //Complete this function
    public long count(long n)
    {
        if(n < 3) {
            return 0;
        }
    
        int[] dp = new int[n + 1];
        dp[0] = 1;
            
        for(int i = 3; i <= n; ++i) {
            dp[i] += dp[i - 3];
        }
        
        for(int i = 5; i <= n; ++i) {
            dp[i] += dp[i - 5];
        }
        
        for(int i = 10; i <= n; ++i) {
            dp[i] += dp[i - 10];
        }
        
        return dp[n];
    }
}