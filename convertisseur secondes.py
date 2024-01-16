nombre = int(input("entrez le nombre de secondes : "))


Y = nombre//31557600
Y1 = nombre%31557600

Month = (Y1)//2628002
Month1 = (Y1)%2628002
J = Month1//86400
J1 = Month1%86400
H = J1//3600
H1 = J1%3600
M = H1//60
S = H1%60
print (Y,"année",Month,"mois",J,"jours",H,"heures",M,"minutes",S,"secondes")
