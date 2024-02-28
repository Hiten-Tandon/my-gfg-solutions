//{ Driver Code Starts
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

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
                string S = Console.ReadLine().Trim();
                Solution obj = new Solution();
                int res = obj.DivisibleByEight( S);
                Console.Write(res);
                Console.Write("\n");
          }

        }
    }
    
    
}
// } Driver Code Ends


class Solution
    {
        //Complete this function
        public int DivisibleByEight(string s)
        {
            return Int32.Parse(s.Substring(Math.Max(0,s.Length - 3))) % 8 == 0 ? 1 : -1;
        }
    }