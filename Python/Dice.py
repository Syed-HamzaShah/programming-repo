import random
attempt = True
ask = "Do you want to roll the dice?\n1 = yes\n9 = no\n"
while True:
    # print(ask)
    ans = int(input(ask))
    dice = random.randint(1, 6)
    if ans == 9:
        exit(0)
    else:
        print("Dice = ",dice)