# Table of Contents
1. [Lab 1](#lab1)
2. [Lab 2](#lab2)
3. [Lab 3](#lab3)
4. [Lab 4](#lab4)
5. [Lab 5](#lab5)
6. [Lab 6](#lab6)
7. [Lab 7](#lab7)
8. [Lab 8](#lab8)
9. [Lab 9](#lab9)
10. [Lab 10](#lab10)
11. [Lab 11](#lab11)
12. [Lab 12](#lab12)
13. [Project](#project)
 
# Lab 1 - Obliczanie pól i obwodów <a name="lab1"></a>
[folder link](https://github.com/roseannee/PP_Sem_1/tree/master/lab_1)<br/><br/>
Program do obliczania pól i obwodów figur płaskich
1. Obliczanie pola i obwodu prostokąta
2. Obliczanie pola i obwodu trójkąta
3. Możliwość wyboru figury przez użytkownika
4. Możliwość wyboru pole/obwód przez użytkownika

# Lab 2 - Standardowe menu <a name="lab2"></a>
[folder link](https://github.com/roseannee/PP_Sem_1/tree/master/Lab_2)<br/><br/>
Proszę napisać program, który będzie wyświetlał poniższe menu (po wybraniu np. 1, powinien pojawiać się komunikat "Wybrałeś opcję nr 1"), opcje 4 i 5 wyświetlają podmenu.

Menu:
1. Opcja nr 1 => Wybrałeś opcję nr 1
2. Opcja nr 2 => Wybrałeś opcję nr 2
3. Opcja nr 3 => Wybrałeś opcję nr 3
4. Podmenu 1 => 1. Opcja 1.1 / 2. Opcja 1.2 / 3.Koniec
5. Podmenu 2 => 1. Opcja 2.1 / 2. Opcja 2.2 / 3.Koniec
6. Koniec

# Lab 3 - Pętle (rysowanie dolarami) <a name="lab3"></a>
[folder link](https://github.com/roseannee/PP_Sem_1/tree/master/lab_3)<br/><br/>
Napisz program, który pozwala narysować poniższe figury znakami dolara (wymiary podaje użytkownik):  
1. pozioma linia
2. pionowa linia
3. wypełniony prostokąt  
4. pozioma linia odsunięta od lewej strony  
5. pionowa linia odsunięta od lewej strony  
6. wypełniony prostokąt odsunięty od lewej strony  
7. pusty prostokąt odsunięty od lewej strony  
8. linia ukośna  
9. trójkąt prostokątny
 
# Lab 4 - Tablice, kalkulator "wieloliczbowy" <a name="lab4"></a>
[folder link](https://github.com/roseannee/PP_Sem_1/tree/master/lab_4)<br/><br/>
Proszę napisać program z następującymi opcjami (menu na instrukcji switch):
1. Wprowadzanie liczb (maks. 100)
2. Wyświetlanie liczb
3. Ile liczb jest wprowadzonych
4. Obliczanie sumy
5. Obliczanie średniej
6. Zmiana liczby
7. Usunięcie liczby z końca
8. Usunięcie dowolnej liczby
9. Wyszukanie najmniejszej i największej liczby
10. Wyświetlenie statystyki (ile parzystych, ile nieparzystych, ile dodatnich, ile ujemnych)

# Lab 5 - Rysowanie z wykorzystaniem funkcji <a name="lab5"></a>
[folder link](https://github.com/roseannee/PP_Sem_1/tree/master/Lab_5)<br/><br/>
Proszę napisać program, umożliwiający narysowanie następujących figur (każdy punkt to jedna funkcja). Dodatkowo menu powinno być wyświetlane przez oddzielną funkcję.

1. Linia pozioma ```$$$$$``` (parametry: długość i znak)
2. Pojedynczy szlaczek ```$$$$$*****$$$$$*****``` (korzysta z 1.; parametry: długość ``$/*`` (5) i ilość powtórzeń (2))
3. Prostokąt (korzysta z 1; parametry: długości boków (5, 2) i znak (```$```))
	 ```
	 $$$$$
	 $$$$$
	 ```
4. Kwadrat (korzysta z 3; parametry: długość boku (5) i znak (```$```))
	```
	$$$$$
	$$$$$
	$$$$$
	$$$$$ 
	$$$$$
	```  
6. Pojedynczy szlaczek premium (korzysta z 1.; parametry: długość ``$/*`` (5), ilość powtórzeń (2) i znaki (``$, *``))  
    ```
    $$$$$*****$$$$$*****
    ```  
7. Szeroki szlaczek (korzysta z 5; parametry: długość ```$/*``` (5), ilość powtórzeń (2), grubość i znaki (```$, *```))  
    ```
    $$$$$*****$$$$$*****
    $$$$$*****$$$$$*****
    $$$$$*****$$$$$*****
    ```
    
8. Szachownica (korzysta z 6; parametry: bok pola (5), bok szachownicy (4), znaki (```$, *```))  
    ```
    $$$$$*****$$$$$*****
    $$$$$*****$$$$$*****
    $$$$$*****$$$$$*****
    *****$$$$$*****$$$$$ 
    *****$$$$$*****$$$$$ 
    *****$$$$$*****$$$$$
    ```
 
# Lab 6 - Funkcje liczące <a name="lab6"></a>
[folder link](https://github.com/roseannee/PP_Sem_1/tree/master/lab_6)<br/><br/>
Proszę napisać następujące funkcje:
1. menu (wyświetla menu i zwraca nr wybranej opcji),
2. obwodProstokata (liczy i zwraca obwód prostokąta, 2 parametry - liczby rzeczywiste),
3. poleProstokata,
4. obwodKwadratu (1 parametr, wykorzystuje funkcję obwodProstokata),
5. poleKwadratu  (1 parametr, wykorzystuje funkcję poleProstokata),
6. poleSzescianu (pole powierzchni całkowitej, 1 parametr, wykorzystuje poleKwadratu),
7. poleProstopadloscianu (3 parametry, wykorzystuje poleProstokata),
8. zwiekszLitere ('a' => 'A' 'A' => 'A' '```$```' => '```$```')
9. czyLitera ('a' => 1 'Z' => 1 '1' => 0 '%' => 0)
 
# Lab 7 - Struktury <a name="lab7"></a>
[folder link](https://github.com/roseannee/PP_Sem_1/tree/master/lab_7)<br/><br/>
Proszę napisać program do operowania na punktach 2D z następującymi możliwościami:
- pamiętanie dla każdego punktu nazwy (litery od A do Z) i współrzędnych x,y (wszystko podaje użytkownik)
1. dopisywanie kolejnych punktów do bazy (maks. 100 punktów), można to robić "na raty"
2. wyświetlanie wszystkich wprowadzonych punktów (bez "pustych miejsc")
3. modyfikacja wybranego punktu (punkt jest wybierany indeksem)
4. modyfikacja wybranego punktu (punkt jest wybierany nazwą)  
5. usuwanie wybranego punktu (punkt jest wybierany nazwą)
6. liczenie odległości między dwoma punktami  (punkt jest wybierany nazwą)
7. liczenie długości linii łamanej o podanych punktach  (punkt jest wybierany nazwą)
- kontrola unikalności nazw (niedopuszczenie do powtarzania nazw punktów, np. dwa punkty o nazwie A)

# Lab 8 - Napisy <a name="lab8"></a>
[folder link](https://github.com/roseannee/PP_Sem_1/tree/master/lab_8)<br/><br/>
Proszę napisać program, który będzie umożliwiał wykonywanie następujących operacji na napisach (napisy mogą zawierać spacje):
1. Wprowadź napis nr 1
2. Wprowadź napis nr 2
3. Wyświetl oba napisy
4. Wyświetl długości obu napisów
5. Dołącz napis nr 2 do napisu nr 1
6. Przepisz napis nr 2 do napisu nr 1
7. Sprawdź, czy napisy są takie same
8. Wyświetl napisy w kolejności alfabetycznej

# Lab 9 - Pliki <a name="lab9"></a>
[folder link](https://github.com/roseannee/PP_Sem_1/tree/master/lab_9)<br/><br/>
Proszę napisać program, który pozwala wykonać następujące operacje na domyślnym pliku tekstowym:
1. Odczyt i wyświetlenie pierwszej linijki
2. Zapis do pliku linii tekstu podanej przez użytkownika
3. Dopisanie do pliku linii tekstu podanej przez użytkownika
4. Odczyt i wyświetlenie n kolejnych linii tekstu z pliku (n podaje użytkownik)
5. Odczyt i wyświetlenie całego pliku
6. Odczyt i wyświetlenie pojedynczej n-tej linii (n podaje użytkownik)
7. Wyświetlenie listy pozycji, na których zaczynają się poszczególne linie
8. Odczyt i wyświetlenie pojedynczej n-tej linii (z wykorzystaniem informacji z punktu 7)  
9. Wybór przez użytkownika pliku, na którym będą wykonywane powyższe operacje
  
# Lab 10 - Wskaźniki <a name="lab10"></a>
[folder link](https://github.com/roseannee/PP_Sem_1/tree/master/Lab_10)<br/><br/>
Proszę napisać kalkulator do wykonywania czterech podstawowych działań (+ - * / ). Wszystkie zmienne używane w obliczeniach powinny być alokowane dynamicznie w trakcie wykonywania programu.
 
Program powinien mieć następujące opcje:
1. Wprowadź dane (a i b) (w tym punkcie następuje alokacja pamięci)
2. Wyświetl dane (a i b)
3. Suma (a + b)
4. Różnica (a - b)
5. Iloczyn (a * b)
6. Iloraz (a / b)
7. Usuń dane (a i b) (w tym punkcie następuje zwolnienie pamięci)
Dodatkowo:
- błędna kolejność operacji nie powoduje "problemów" (ale wyświetlamy komunikat)
- brak wycieków pamięci
- liczenia sumy i iloczynu dowolnej ilości liczb

# Lab 11 - Zapis liczb do pliku <a name="lab11"></a>
[folder link](https://github.com/roseannee/PP_Sem_1/tree/master/Lab_11)<br/><br/>
Proszę rozbudować program kalkulator wieloliczbowy z Lab 4 o możliwość zapisu/odczytu liczb do/z pliku (tekstowego):
1. Zapis wszystkich wprowadzonych liczb do domyślnego pliku.
2. Odczyt wszystkich liczb z domyślnego pliku.
3. Zapis wszystkich wprowadzonych liczb do pliku o nazwie podanej przez użytkownika.
4. Odczyt wszystkich liczb z pliku o nazwie podanej przez użytkownika.  
5. Dopisanie wszystkich wprowadzonych liczb do pliku o nazwie podanej przez użytkownika.
6. Odczytanie wszystkich liczb z pliku i dopisanie ich do tablicy (z zachowaniem "starej" zawartości tablicy).
7. Zamiast pytać użytkownika za każdym razem o nazwę pliku, pozwalamy mu podać domyślną nazwę pliku.

# Lab 12 - Tablice wielowymiarowe <a name="lab12"></a>
[folder link](https://github.com/roseannee/PP_Sem_1/tree/master/Lab_12)<br/><br/>
Proszę napisać program, który będzie umożliwiał przechowywanie liczb całkowitych w tablicy dwuwymiarowej, o wymiarach 5x5 i pozwalał na wykonanie następujących operacji:
1. wypełnienie całej tablicy podaną liczbą,
2. wyświetlenie całej tablicy (dwuwymiarowo),
3. wprowadzenie pojedynczej liczby na podanej pozycji,
4. wyświetlenie pojedynczej liczby z podanej pozycji,
5. wypełnienie wybranego wiersza kolejnymi liczbami, zaczynając od podanej,
6. wypełnienie wybranej kolumny kolejnymi liczbami, zaczynając od podanej,
7. obliczenie sumy liczb w wybranym wierszu,
8. obliczenie sumy liczb w wybranej kolumnie,
9. obliczenie sumy liczb w całej tablicy,
10. obliczenie sumy liczb na przekątnych (dwie oddzielne sumy),
11. wyświetlenie wybranego fragmentu tablicy.

# Project <a name="project"></a>
[folder link](https://github.com/roseannee/PP_Sem_1/tree/master/Project)<br/><br/>
[Specyfikacja.pdf](https://github.com/roseannee/PP_Sem_1/files/8534461/Specyfikacja.pdf)
