n = int(input())
cart = [int(input()) for _ in range(n)]
cart.sort(reverse = True)
price = sum(cart)
for i in range(2, len(cart), 3):
    price -= cart[i]
print(price)
