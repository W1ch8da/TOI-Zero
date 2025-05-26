target = int(input())


# Limit check
if target < 1 or target > 100000:
    print("Target must be between 1 and 100000.")
    exit()

n = 1
steps = 0
while True:
    if n * n >= target:
        break
    n += 1


if n % 2 != 0 and target % 2 != 0:  # odd n and odd target
    print(steps + 2 + ((n - 2) * 2))
elif n % 2 == 0 and target % 2 != 0:  # even n and odd target
    print(steps + 1 + ((n - 2) * 2))
elif n % 2 != 0 and target % 2 == 0:  # odd n and even target
    print(steps + 1 + ((n - 2) * 2))
elif n % 2 == 0 and target % 2 == 0:  # even n and even target
    print(steps + 2 + ((n - 2) * 2))
elif target == 1:
    print(steps)
