if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    max = -110
    second_max = -115
    for i in range(n):
        if(arr[i] > max):
            second_max = max
            max = arr[i]  
        if(arr[i] > second_max and arr[i] < max):
            second_max = arr[i]
    print second_max
    
