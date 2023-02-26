As you know, the dictionary consists of translatable words, each of which contains several words-translations. For each Latin word that appears anywhere in the dictionary, it is necessary to find all its translations (that is, all English words for which our Latin appeared in its list of translations), and consider them and only them as translations of this Latin word.

Input data

The first line contains a single integer N — the number of English words in the dictionary. Next comes N descriptions. Each description is contained on a separate line, which contains first an English word, then a space-separated hyphen (character number 45), then comma-separated, space-separated translations of that English word into Latin. Translations are sorted in lexicographic order. The order of English words in the dictionary is also lexicographic.

All words consist only of small Latin letters, the length of each word does not exceed 15 characters. The total number of words in the input does not exceed 100,000.

Output

On the first line, the program should print the number of words in the corresponding given Latin-English dictionary. From the second line, output the dictionary itself, following exactly the format of the input data. In particular, the translation of the lexicographically minimal Latin word should come first, then the second in that order, and so on. Within the translation, English words must also be sorted lexicographically.

Sample Input:

3

apple - malum, pomum, popula

fruit - baca, bacca, popum

punishment - malum, multa

Sample Output:

7

baca - fruit

bacca - fruit

malum - apple, punishment

multa - punishment

pomum - apple

popula - apple

popum - fruit
