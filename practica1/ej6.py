def search(arr, low, high, x):

    if high >= low:
        mid = (high + low) // 2
        if arr[mid] == x:
            return mid
        elif arr[mid] > x:
            return search(arr, low, mid - 1, x)
        else:
            return search(arr, mid + 1, high, x)
    else:
        return -1


def check_if_in(arr, x):
    if (search(arr, 0, len(arr), x) != -1):
        return True
    return False


arr = [2, 3, 4, 10, 40]
x = 10

print(check_if_in(arr, x))