n = int(input('Digite a quantidade de numeros do conjunto: '))
subconjuntos = []
vetor = []
for cont in range(1, n+1):
    vetor.append(int(input('Digite um numero: ')))

for i in range(2 ** n):
        subset = []

        for j in range(n):
            if i & (1 << j):  # Verifica o j-ésimo bit de i
                subset.append(vetor[j])
        subconjuntos.append(subset)

print(subconjuntos)