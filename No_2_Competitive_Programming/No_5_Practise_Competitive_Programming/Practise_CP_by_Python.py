# sourcery skip: for-index-underscore
"""
    || Written by Zihan ||
"""
# Function to check if you can build a K-decker cheeseburger
def can_build_cheeseburger(S, D, K):
    # Calculate the total number of buns, cheese slices, and patties available
    total_buns = 2 * S + 2 * D
    total_cheese = S + 2 * D
    total_patties = S + D

    # Check if there are enough ingredients to build a K-decker cheeseburger
    if K <= total_buns // 2 and K <= total_cheese and K <= total_patties:
        return "YES"
    else:
        return "NO"

# Read the number of test cases
T = int(input())

# Iterate through each test case
for i in range(1, T + 1):
    S, D, K = map(int, input().split())
    result = can_build_cheeseburger(S, D, K)
    print(f"Case #{i}: {result}")
