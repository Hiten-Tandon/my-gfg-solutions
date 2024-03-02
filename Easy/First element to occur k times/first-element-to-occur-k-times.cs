//{ Driver Code Starts
//Initial Template for C#

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
                var ip = Console.ReadLine().Trim().Split(' ');
                int n = int.Parse(ip[0]);
                int k = int.Parse(ip[1]);
                int[] arr = new int[n];
                ip = Console.ReadLine().Trim().Split(' ');
                for (int i = 0; i < n; i++)
                {
                    arr[i] = int.Parse(ip[i]);
                }
                Solution obj = new Solution();
                var res = obj.firstElementKTime(n, k, arr);
                Console.WriteLine(res);
            }

        }
    }
}

// } Driver Code Ends


//User function Template for C#

class Solution
{
    //Complete this function
    public int firstElementKTime(int n, int k, int[] a)
    {
        Dictionary<int, int> counter = new Dictionary<int, int>();
        foreach(int i in a) {
            if(!counter.TryGetValue(i, out _)) {
                counter[i] = 0;
            }
            ++counter[i];
            if(counter[i] == k) {
                return i;
            }
        } 
        
        return -1;
    }
}