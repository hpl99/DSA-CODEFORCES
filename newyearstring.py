t = int(input())
for _ in range(t):
    x = int(input())
    s = input().strip()
    if "2026" in s:
        print(0)
    elif "2025" in s:
        print(1)
    else:
        print(0)
