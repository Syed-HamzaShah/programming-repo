code = "1234"
balance = 0
attempt = 0
while True:
    print("Enter you code")
    pin = input()
    if pin == code:
        break
    else:
        attempt = attempt+1
    if attempt == 3:
        print("You ran out of attempts")
        break
while True:
    if pin == code:
        print("1 = Balance")
        print("2 = Deposit")
        print("3 = Withdraw")
        print("4 = Exit")
        choice = int(input())
        if choice == 1:
            print(balance)
        elif choice == 2:
            print("Enter the Amount you want to Deposit")
            x = int(input())
            balance = balance+x
        elif choice == 3:
            print("Enter the Amount you want to Withdraw")
            x = int(input())
            if x > balance:
                print("Insufficient Balance")
            else:
                balance = balance-x
        elif choice == 4:
            break
        else:
            print("Wrong Option")
    else:
        break
