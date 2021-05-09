def changeTime(s):
    if s[-2:] == "AM" and s[:2] == "12":
        a = "00" + s[2:-2]
        return a
    elif s[-2:] == "AM":
        return s[:-2]
    elif s[-2:] == "PM" and s[:2] == "12":
        return s[:-2]
    else:
        return str(12+int(s[:2]))+s[2:6]
        
for i in range(int(input())):
    res = ''
    time = changeTime(input())
    n = int(input())
    for i in range(n):
        s = input()
        t1 = changeTime(s[:8])
        t2 = changeTime(s[9:])
        if(t1<=time and t2>=time):
            res+='1'
        else:
            res+='0'
    print(res)
