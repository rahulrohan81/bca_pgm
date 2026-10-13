units=float(input("enter the number of unit:"))
category=input("enter the category:")
threshold=int(input("is peak threshold found [yes/no]:"))
penalty=100
penaltyco=50   

if category =="commercial":
    if units < 100:
        bill = units * 10

    elif units > 100 and units < 300:
         bill = (100 * 10 ) + ((units - 100) * 12)

    else:
        bill = (100*10) + (100*12) + ((units - 200) * 15)
    if threshold == 1:
        bill = bill + penalty

else:
    if units < 100:
        bill = units * 5

    elif units > 300 and units < 300:
        bill = (100 * 10) + ((units - 100) * 10)
        
    else:
        bill = (100 * 6) + (100 * 8) + ((units - 200) * 10)
    if threshold == 1:
        bill = bill + penaltyco
print("bill",bill)


