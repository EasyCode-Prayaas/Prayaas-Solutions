yr = int(input())
flag=0
while(flag==0):
    yr+=1
    unit = yr%10;
    ten  = (yr%100)//10;
    hund = (yr%1000)//100;
    thous= yr//1000;    
    if(unit==ten or ten==thous or thous==hund or unit==thous or unit==hund or ten==hund):
	flag=0
    else:
	flag=1
print("Unique Year:",yr)