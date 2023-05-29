n = int(input('Digite um numero: '))
menor = float('inf')
pares = []
vetor = []

for cont in range(1, n+1):
    vetor.append(int(input('Digite um numero: ')))

for i in range(len(vetor) - 1):
        for j in range(i+1, len(vetor)):
            diferenca = abs(vetor[i] - vetor[j])
            if diferenca < menor:
                 menor = diferenca
                 pares = [(vetor[i], vetor[j])]
            elif diferenca == menor:
                 pares.append((vetor[i], vetor[j]))


print(pares)
    
