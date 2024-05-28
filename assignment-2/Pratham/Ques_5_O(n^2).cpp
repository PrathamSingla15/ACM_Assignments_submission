def maximum_subarray(arr):
    n = len(arr)
    max_sum = 0  # Since an empty subarray is allowed, the minimum max_sum is 0

    for i in range(n):
        current_sum = 0
        for j in range(i, n):
            current_sum += arr[j]
            max_sum = max(max_sum, current_sum)
    
    return max_sum

arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
print("Maximum subarray sum:", maximum_subarray(arr))
