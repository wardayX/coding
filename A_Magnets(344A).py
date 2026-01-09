n = input()
n = int(n)
count = 0
for i in range(2 * n):
    magnets = raw_input()
    if i == 0:
        count = 1
    else:
        if magnets[0] == magnets[1]:
            count += 1