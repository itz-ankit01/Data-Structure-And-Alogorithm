try:
    n = float(input('Enter the number: '))
    if n > 0:
        print('pos')
    elif n == 0:
        print('yes')
    else:
        print('neg')
except ValueError:
    print("Invalid input. Please enter a numeric value.")
