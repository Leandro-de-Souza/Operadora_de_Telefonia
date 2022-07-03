
minutos = int(input("Digite a quantidade de minutos: "))

valorpago = 50.00

if minutos > 100:
    valorpago = valorpago + 2.00 * (minutos - 100)

print(f"Valor a pagar: R$ {valorpago:.2f}")