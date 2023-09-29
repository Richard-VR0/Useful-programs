a = [10, 5, 6, 1, 2, 7, 3]

#Stampa del vettore
print("Stampa del vettore:" , a)

print("\nStampa del vettore tramite ciclo for:")
for i in range(0, len(a)):
    print(a[i])

#Inversione del vettore tramite il metodo reverse()
a.reverse()

print("\nVettore al contrario:" , a)

#Ordinamento del vettore tramite il metodo sort()
a.sort()

print("\nVettore ordinato in ordine crescente:" , a)

#Inserimento di un numero all'interno del vettore attraverso il metodo insert()
x = int(input("\nInserisci la posizione in cui inserire un numero:"))
y = int(input("Inserisci il numero da inserire nella lista: "))

a.insert(x, y)

print("\nVettore aggiornato con il nuovo valore inserito:" , a)

#Inserimento di un numero alla fine del vettore attraverso il metodo append()
z = int(input("\nInserisci il numero da inserire alla fine della lista: "))

a.append(z)

print("\nVettore aggiornato con il nuovo valore inserito:" , a)

#Rimozione di un valore dal vettore attraverso il metodo remove()
f = int(input("\nInserisci il numero che vuoi eliminare dal vettore:"))

a.remove(f)

print("Vettore senza il valore scelto in precedenza:" , a)

#Calcolo delle occorrente di un valore nel vettore attraverso il metodo count()
g = int(input("\nInserisci il numero di cui sapere le occorrenze nel vettore:"))

print("\nIl numero" , g , "è presente" , a.count(g) , "volte nel vettore:" , a)

#Stampa della posizione del primo valore in un vettore attraverso il metodo index()
print("\nPosizione del primo numero 1 nel vettore:" , a.index(1))

print("\nPosizione del primo numero 2 dopo il 3 elemento nel vettore" , a.index(2, 3))

print("\nPosizione del primo numero 5 dopo il 3 e prima del 7 elemento nel vettore" , a.index(5, 3, 7))

b = [1, 2]
c = [1, 3, 5]

print("\nVettore b:" , b)
print("Vettore c:" , c)

#Estensione del vettore b con il vettore c attraverso il metodo extend()
b.extend(c)

print("\nVettore b esteso con il vettore c:" , b)

#Prelievo di un valore a un determinato indice attraverso il metodo pop()
h = int(input("\nInserire l'indice del valore da prelevare dal vettore:"))

print("\nValore prelevato dal vettore all'indice" , h , ":" , b.pop(h))
print("Vettore dopo il prelievo del numero:" , b)

#Pulizia del vettore attraverso il metodo clear()
print("\nVettore c prima della pulizia:" , c)

c.clear()

print("Vettore c dopo la pulizia:" , c)