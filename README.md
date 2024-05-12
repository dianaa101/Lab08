-- Administrator bloc --

Introduceți posibilitatea de a crea o lista de notificare. Utilizatorul poate crea interactiv o lista de apartamente care urmează sa fie notificate. 
Adăugați următoarele acțiuni (elemente de meniu): 
• Golește lista: șterge toate apartamentele din lista. 
• Adaugă in lista:  adaugă un apartament după nrApartament 
• Generează lista: utilizatorul introduce numărul total de apartamente, lista se populează aleator cu apartamente 
• Export. Salvează lista in fișier: CVS sau HTML. Se face salvarea in fișier doar 
când s-a selectat acest meniu, coșul nu este persistent (la repornire aplicație 
coșul este din nou gol) , utilizatorul introduce numele fișierului unde se 
salvează la fiecare export. 
După fiecare acțiune utilizator se afișează numărul total de apartamente din lista. 

Cerințe Iterația 1: 

• Modificați aplicația: folosiți clasa vector din STL si înlocuiți toate for-urile din aplicație cu algoritmi din STL si varianta c++11 de for (range for).  Exemplu 
de algoritmi:  copy_if (la filtrare), find_if (căutare), sort 
• Folosiți excepții pentru a raporta erori (creați clase proprii pentru excepții). 
• Adăugați funcționalitatea noua (descris la fiecare problema).  
