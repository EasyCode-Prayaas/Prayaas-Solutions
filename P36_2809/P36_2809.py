s=input()
X=s[-2:]
if X=='PM' and s[0:2]!='12':
    time12=s[0:-2].split(':')
    time24=str(int(time12[0])+12)+':'+s[0:-2][3:8]
elif s[0:2] == '12' and X =='AM':
    time12=s[0:-2].split(':')
    time24='00'+':'+s[0:-2]
else:
    time24=s[0:-2]
print(time24)