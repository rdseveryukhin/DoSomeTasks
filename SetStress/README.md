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
