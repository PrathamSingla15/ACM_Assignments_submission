def maximum_subarray(arr):
    max_current = 0
    max_global = 0
    
    for x in arr:
        max_current = max(x, max_current + x)
        max_global = max(max_global, max_current)
    
    return max_global

arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
print("Maximum subarray sum:", maximum_subarray(arr))
