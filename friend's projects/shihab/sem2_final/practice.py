# Enter your code here. Read input from STDIN. Print output to STDOUT

for _ in range(int(input())):
    a = []
    b = []
    
    input()
    a = input().split()
    input()
    b = input().split()

    result = True

    for i in a:
        if i not in b:
            result = False
    if result == True:
        print(True)
    else:
        print(False)
    