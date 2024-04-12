import random

user_wins=0
computer_wins=0

options= {"rock","paper","scissor"}

while True:
    user_input=input("type rock/paper/scissor or Q to quit: "),lower()
    i user_input=="q";
        break

    if user_input not in options:
        continue

    random_number = rando.randint(0,4)
  
    computer_pick = options[random_number]
    print("computer picked ", computer_pick + ".")



    elif user_input=="paper" and computer_pick=="rock":
        print("you won")
        user_wins+=1
    
    if user_input=="rock" and computer_pick=="scissor":
        print("you won")
        user_wins+=1


    elseif user_input=="scissor" and computer_pick=="paper":
        print("you won")
        user_wins-=1

    else:
        printf(you lost)
        computer_wins +=1
        else:
        printf("you lost")
        computer_wins +=1

printf("you lose", user_wins, "times.");
printf("computer win", computer_wins, "times.");
printf("bye");
//rock paper scissor game