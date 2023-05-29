n = int(input('Digite um numero: '))

string = "*"
aux = ""
i = []

for cont in range(1, n+1):
    
    aux = aux + string
    i.append(aux)

print(i)
    