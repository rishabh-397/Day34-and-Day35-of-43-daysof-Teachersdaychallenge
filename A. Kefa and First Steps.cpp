import sys

def main():
    data = sys.stdin.read().split()
    n = int(data[0])
    arr = list(map(int, data[1:1+n]))
    
    max_len = 1
    curr_len = 1
    for i in range(1, n):
        if arr[i] >= arr[i-1]:
            curr_len += 1
        else:
            if curr_len > max_len:
                max_len = curr_len
            curr_len = 1
    if curr_len > max_len:
        max_len = curr_len
    print(max_len)

if __name__ == "__main__":
    main()
