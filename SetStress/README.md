V slovakh, kotorykh net v slovare postavleno udareniye pravil'no, yesli v etom slove postavleno rovno odno udareniye. Okazalos', chto v nekotorykh slovakh udareniye mozhet byt' postavleno bol'she, chem odnim sposobom. V etom sluchaye yesli udareniye, sootvetstvuyet odnomu iz privedennykh v slovare variantov, on budet zaschityvat' eto kak pravil'nuyu rasstanovku udareniya, a yesli ne sootvetstvuyet, to kak oshibku. Vasha zadacha — opredelit' kolichestvo oshibok v etom zadanii. Vkhodnyye dannyye Vvoditsya snachala chislo N — kolichestvo slov v slovare (0 ≤ N ≤ 20000). Daleye idet N strok so slovami iz slovarya. Kazhdoye slovo sostoit ne boleye chem iz 30 simvolov. Vse slova sostoyat iz malen'kikh i zaglavnykh latinskikh bukv. V kazhdom slove zaglavnaya rovno odna bukva — ta, na kotoruyu popadayet udareniye. Slova v slovare raspolozheny v alfavitnom poryadke. Yesli yest' neskol'ko vozmozhnostey rasstanovki udareniya v odnom i tom zhe slove, to eti varianty v slovare idut v proizvol'nom poryadke. Daleye idet uprazhneniye. Uprazhneniye predstavlyayet soboy stroku teksta, summarnym ob"yemom ne boleye 300000 simvolov. Stroka sostoit iz slov, kotoryye razdelyayutsya mezhdu soboy rovno odnim probelom. Dlina kazhdogo slova ne prevyshayet 30 simvolov. Vse slova sostoyat iz malen'kikh i zaglavnykh latinskikh bukv (zaglavnymi oboznacheny te bukvy, nad kotorymi postavleno udareniye). V kakom-to slove mozhet byt' postavleno boleye odnogo udareniya ili ne postavleno udareniye vovse. Vykhodnyye dannyye Vyvedite kolichestvo oshibok v tekste. Primechaniye k primeru 1. V slove cannot, soglasno slovaryu vozmozhno dva varianta rasstanovki udareniya. Eti varianty v slovare mogut byt' perechisleny v lyubom poryadke (t.ye. kak snachala cAnnot, a potom cannOt, tak i naoborot). Dve oshibki — eto slova be (udareniye voobshche ne postavleno) i fouNd (udareniye postavleno neverno). Slovo thE otsutstvuyet v slovare, no poskol'ku v nem postavleno rovno odno udareniye, priznayetsya vernym. 2. Neverno rasstavleny udareniya vo vsekh slovakh, krome The (ono otsutstvuyet v slovare, v nem postavleno rovno odno udareniye). V ostal'nykh slovakh libo udarnyye vse bukvy (v slove PAGE), libo ne postavleno ni odnogo udareniya.
Ещё
2 115 / 5 000
Результаты перевода
Перевод
In words that are not in the dictionary, the stress is correctly placed if exactly one stress is placed in this word.

It turned out that some words can be stressed in more than one way. In this case, if the stress corresponds to one of the options given in the dictionary, it will count it as the correct placement of the stress, and if it does not match, then as a mistake.

Your task is to determine the number of errors in this task.

Input data

First, the number N is entered — the number of words in the dictionary (0 ≤ N ≤ 20000).

Next comes N lines with words from the dictionary. Each word consists of no more than 30 characters. All words consist of small and capital Latin letters. In each word, there is exactly one capital letter - the one on which the stress falls. The words in the dictionary are in alphabetical order. If there are several possibilities for placing stress in the same word, then these options in the dictionary go in random order.

Next comes the exercise. The exercise is a line of text with a total volume of no more than 300,000 characters. A string consists of words separated by exactly one space. The length of each word does not exceed 30 characters. All words consist of small and capital Latin letters (capitalized are those letters that are stressed). A word may have more than one stress or no stress at all.

Output

Print the number of errors in the text.

Note for example


1. In the word cannot, according to the dictionary, there are two options for placing stress. These options in the dictionary can be listed in any order (i.e. first cAnnot, and then cannOt, and vice versa).
The two errors are the words be (no stress at all) and fouNd (wrong stress). The word thE is not in the dictionary, but since it has exactly one stress, it is recognized as correct.

2. Incorrectly placed stresses in all words, except for The (it is not in the dictionary, it has exactly one stress). In other words, either all letters are stressed (in the word PAGE), or not a single stress is put.

Sample Input 1:

4
cAnnot
cannOt
fOund
pAge
thE pAge cAnnot be fouNd
Sample Output 1:

2
Sample Input 2:

4
cAnnot
cannOt
fOund
pAge
The PAGE cannot be found
Sample Output 2:

4
