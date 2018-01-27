mes = input("Enter message >>")
demes = []
dmes = []
lengh = input("Enter lengh >>")
letters = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
letters += letters
for i in range(0,int(lengh)):
    for n in range(0,26):
        if (mes[i] == letters[n]):
            demes.append(letters[n+int(lengh)])
            dmes.append(letters[n-int(lengh)])
print(str(demes))
print(dmes)
