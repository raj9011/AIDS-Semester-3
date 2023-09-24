print("* * * * * Test Report of Students * * * * * ")
print("Menu Driven Program for FDS Test of 38 Marks Analysis: ")
print("* * * * * * * * * * * * * * * * * * * * * * * * * * *")

//Following is marks list of students........
marks = ['AB', 12, 22, 20, 23, 24, 25, 'AB', 25, 21, 25, 'AB', 25, 28]
print(marks)

def avgScore():
    cnt = 0
    Avg = 0
    Total = 0
    n = len(marks)
    print("Total strength of class SEA is : ", n)
    for x in marks:
        if x == 'AB':
            continue
            cnt = cnt + 1
        else:
            Total = Total + x
    Avg = Total / (n - cnt)
    print("The average score of class is : ", Avg)

def highScore():
    max = 0
    cnt = 0
    for x in marks:
        if type(x) == type(" "):
            cnt = cnt + 1
        elif x> max:
            max = x
    print("The high marks in FDS test is : ", max)

def lowScore():
    min = 99
    cnt = 0
    for x in marks:
        if type(x) == type(" "):
            cnt = cnt + 1
        elif x < min :
            min = x
    print("The lowest marks in FDS test is : ", min)

def absStud():
    absnt = 0
    for x in marks:
        if type(x) == type(" "):
            absnt = absnt + 1
    print("Count of Students who were Absent for the FDS test is : ", absnt)

def freqHigh():
    count = []
    cnt = p = high = mm = 0
    for n in range (31):
        cnt = 0 
        for x in marks:
            if type(x) == type(" "):
                p = p - 1
            elif x == n:
                cnt = cnt + 1
        count.append(cnt)
    print("The marks in FDS test are as follows : ")
    print(marks)
    print("Count of each marks from 0 to 30 are as follows : ")
    print(count)
    for y in count:
        if y > high:
            high = y
    print("Highest frequency is : ", high)
    for z in range(31):
        if count[z] == high:
            mm = z
    print("Marks of highest frequency is : ", mm)

def mainMenu():
    print("1. The average score of class SEA.")
    print("2. Highest score and lowest score of class.")
    print("3. Count of Students who were absent for the test.")
    print("4. Display mark with highest frequency.")
    print("5. EXIT.")

    ch = int(input("Enter your choice : "))

    if ch == 1:
        print("1. The average score of class SEA: ")
        avgScore()
        print("* * * * * * * * * * * * * * * * * * * * * * * *")
        mainMenu()  
		//# Recursive Function
    
    elif ch == 2:
        print("2. Highest score and lowest score of class: ")
        highScore()
        lowScore()
        print("* * * * * * * * * * * * * * * * * * * * * * * *")
        mainMenu()  
		//# Recursive Function
    
    elif ch  == 3:
        print("3. Count of Students who were absent for the test: ")
        absStud()
        print("* * * * * * * * * * * * * * * * * * * * * * * *")
        mainMenu() 
		// # Recursive Function

    elif ch == 4:
        print("4. Display mark with highest frequency: ")
        freqHigh()
        print("* * * * * * * * * * * * * * * * * * * * * * * *")
        mainMenu() 
		// # Recursive Function

    elif ch == 5:
        exit(0)    
		// # Exit from function
        mainMenu()  
		//# Recursive Function

    else:
        print("Please enter valid choice: ")
        mainMenu()  # Recursive Function

mainMenu() // #call the mainMenu() function

