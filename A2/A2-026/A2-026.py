n = int(input())

count_overweight = 0
heaviest_weight = -1
heaviest_name = ''
LIMIT = 15

for _ in range(n):
    name, weight = input().split()
    weight = int(weight)

    if weight > LIMIT:
        count_overweight += 1

    if weight > heaviest_weight:
        heaviest_weight = weight
        heaviest_name = name

print(count_overweight)
print(f"{heaviest_name} {heaviest_weight}")
