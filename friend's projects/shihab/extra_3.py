# Question-3:
# Write a python function called replacer()  that takes two strings as 
# arguments.
#              Argument1: A sentence where you have to make the changes.
#              Argument2: A word with the values either “vowel” or “consonant”.
# Your function should replace the sen_list[i]acters of the sentence with “V” or “C” 
# depending on the 2nd argument. If the word is “vowel”, then replace all the 
# vowels with “V”. If the word is “consonant”, then replace all the 
# consonants with “C”.
# [You are not allowed to use the replace() function]

# ================================================
# Function call1:
# replacer("It is MAT110 final", "vowels")
# Sample Output1:
# Vt Vs MVT110 fVnVl

# ================================================
# Function call2:
# replacer("It is CSE110 final", "consonants")
# Sample Output 02:
# IC iC CCE110 CiCaC

def replacer(sentence, word):
    sen_list = list(sentence)

    if word == "vowels":
        for i in range(0, len(sen_list)):
            if sen_list[i] == 'a' or sen_list[i] == 'e' or sen_list[i] == 'i' or sen_list[i] == 'o' or sen_list[i] == 'u' or sen_list[i] == 'A' or sen_list[i] == 'E' or sen_list[i] == 'I' or sen_list[i] == 'O' or sen_list[i] == 'U':
                sen_list[i] = 'V'
    if word == "consonants":
        for i in range(0, len(sen_list)):
            if sen_list[i] != 'a' and sen_list[i] != 'e' and sen_list[i] != 'i' and sen_list[i] != 'o' and sen_list[i] != 'u' and sen_list[i] != 'A' and sen_list[i] != 'E' and sen_list[i] != 'I' and sen_list[i] != 'O' and sen_list[i] != 'U' and sen_list[i] != ' ' and not (sen_list[i] >= '0' and sen_list[i] <= '9'):
                sen_list[i] = 'C'

    sentence = ''.join(sen_list)
    print(sentence)

replacer("It is CSE110 final", "consonants")
replacer("It is MAT110 final", "vowels")
