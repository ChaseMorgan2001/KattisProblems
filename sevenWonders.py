string = input()
while len(string) <= 50:
    tablet = string.count("T")
    compass = string.count("C")
    gear = string.count("G")
    cards = ((tablet**2)+(compass**2)+(gear**2))
    if (tablet > 1 and compass > 1 and gear > 1):
        if (tablet < compass and tablet < gear):
            total = (cards + (tablet * 7))
            print(total)
        elif (compass < tablet and compass < gear):
            total = (cards + (compass * 7))
            print(total)
        elif (gear < tablet and gear < compass):
            total = (cards + (gear * 7))
            print(total)
        else:
            total = (cards + (tablet * 7))
            print(total)
    elif (tablet >= 1 and compass >= 1 and gear >= 1):
        total = (cards + 7)
        print(total)
    else:
        print(cards)

    break
