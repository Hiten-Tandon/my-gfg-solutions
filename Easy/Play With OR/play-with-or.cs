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

                int n = Convert.ToInt32(Console.ReadLine());
                int[] arr = new int[n];

                var stringArray = Console.ReadLine().Split(' ');
                int j = 0;
                for (int i = 0; i < stringArray.Length; i++)
                {
                    if (stringArray[i].CompareTo(" ") != -1)
                    {
                        arr[j] = int.Parse(stringArray[i]);

                        j++;
                    }
                }
                Solution obj = new Solution();
                int[] res = obj.game_with_number(arr, n);
                for(int i = 0;i<n;i++){
                    Console.Write(res[i]+" ");
                }
                Console.Write("\n");
          }

        }
    }
}

// } Driver Code Ends


//User function Template for C#

class Solution {
    public int[] game_with_number(int[] arr, int n) {
        for(int i = 0; i < arr.Length - 1; ++i) {
            arr[i] |= arr[i + 1];
        }
        
        return arr;
    }
}