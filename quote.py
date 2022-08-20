f = open('Template.txt', 'r+')
data = f.readlines()

for l in data:
    l = l.strip()
    print(f'"{l}"')
