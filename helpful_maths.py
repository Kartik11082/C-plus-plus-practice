my_str = input()
my_str = list(my_str.split("+"))
my_str = sorted(my_str)

for i in range(len(my_str) - 1):
    print(my_str[i]+''.join('+'), end = '')

print(my_str[-1])
