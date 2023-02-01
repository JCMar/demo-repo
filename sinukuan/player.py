
aklan = [[x for _ in range(25)] for _ in range(5)]
for i in aklan:
    for j in i:
        print(f'GA:{j}  ', end='')
    print('\n')