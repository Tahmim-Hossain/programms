def solve():
    n = int(input())
    s1 = input()
    s2 = input()
    
    cnt0_s1 = s1.count('0')
    cnt1_s1 = s1.count('1')
    
    for i in range(n-1):
        if cnt0_s1 == 0 or cnt1_s1 == 0:
            print("NO")
            return
        
        if s2[i] == '1': 
            cnt0_s1 -= 1
        else: 
            cnt1_s1 -= 1
    
    print("YES")

t = int(input())
while t > 0:
    solve()
    t -= 1
