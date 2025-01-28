using System;

class Program
{
    static int MaxSubarraySum(int[] arr)
    {
        int n = arr.Length;
        int[] prefixSum = new int[n + 1];
        prefixSum[0] = 0;

        // Step 1: Compute prefix sums
        for (int i = 0; i < n; i++)
        {
            prefixSum[i + 1] = prefixSum[i] + arr[i];
        }

        // Step 2: Find maximum subarray sum
        int maxSum = int.MinValue;
        int minPrefixSum = int.MaxValue;

        for (int i = 1; i <= n; i++)
        {
            // Update the maximum subarray sum
            maxSum = Math.Max(maxSum, prefixSum[i] - minPrefixSum);

            // Update the minimum prefix sum
            minPrefixSum = Math.Min(minPrefixSum, prefixSum[i]);
        }

        return maxSum;
    }

    static void Main(string[] args)
    {
        int[] arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
        int result = MaxSubarraySum(arr);
        Console.WriteLine("Maximum Subarray Sum: " + result);
    }
}
