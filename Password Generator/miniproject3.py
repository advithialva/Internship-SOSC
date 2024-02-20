import random
logo='''
  _____                                    _    _____                           _             
 |  __ \                                  | |  / ____|                         | |            
 | |__) |_ _ ___ _____      _____  _ __ __| | | |  __  ___ _ __   ___ _ __ __ _| |_ ___  _ __ 
 |  ___/ _` / __/ __\ \ /\ / / _ \| '__/ _` | | | |_ |/ _ \ '_ \ / _ \ '__/ _` | __/ _ \| '__|
 | |  | (_| \__ \__ \\ V  V / (_) | | | (_| | | |__| |  __/ | | |  __/ | | (_| | || (_) | |   
 |_|   \__,_|___/___/ \_/\_/ \___/|_|  \__,_|  \_____|\___|_| |_|\___|_|  \__,_|\__\___/|_|   
                                                                                              
                                                                                              '''

print(logo)
length=int(input("Enter the length of your password? "))
letters=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
numbers=['0','1','2','3','4','5','6','7','8','9']
specialchar=['!','@','#','$','%','^','&','*']

letter=int(input("Enter the number of letters in password? "))
num=int(input("Enter the number of numbers in password? "))
spclchar=int(input("Enter the number of characters in password? "))

#number=random.randint(1,40) -> this will give random number from 1 to 40

password=[]

for i in range(1,num+1):
    password.append(random.choice(numbers))

for i in range(1,letter+1):
    password.append(random.choice(letters))

for i in range(1,spclchar+1):
    password.append(random.choice(specialchar))

random.shuffle(password)

result=""
for i in password:
    result+=i

print(f"Your password is :{result}")
