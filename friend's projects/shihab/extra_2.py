# Assume, you have been given a dictionary where the keys present the name of 
# the father and the value is a list of names of the sons of that person. For 
# example A has 3 sons namely X, Y, and Z. Again X has three sons namely E, 
# F, and G. So, A is the grandfather of E, F, and G.

# family = {"A" : ["X", "Y", "Z"], "B": ["M", "N"], "W" : ["A", "B"], "X" : 
# ["E", "F", "G"]}

# You need to write a code which takes an input and prints the names of all 
# his grandsons in the format shown in output samples. If he does not have 
# any grandchildren just print “Get your sons married first! 
# Wanna_be_grandpa!!~”

# You can assume the input will always be a key from the dictionary. But we 
# will check your code with a different dictionary. So do not write a code 
# for this particular dictionary only.
# ================================================

# Input sample 1:
# A
# Output sample 1:
# E, F, and G
# Explanation1:
# A has three sons X, Y, and Z but only one of them namely X has sons. So the 
# sons of X will be the grandsons of A. So the output is E, F, and G.
# ================================================
# Input sample 2:
# W
# Output sample 2:
# X, Y, Z, M, and N
# Explanation2:
# Since W has two sons A and B and each of them has sons in return. The sons 
# of A namely X, Y, and Z, and the sons of B namely M and N are the grandsons 
# of W.
# ================================================
# Input sample 3:
# B
# Output sample 3:
# Get your sons married first! Wanna_be_grandpa!!
# Explanation3:
# B has sons M and N but none of them have sons. So no grandsons for B.

def grandchilds(family, grandfather):
    grandchilds = list()
    
    for sons in family[grandfather]:
        try:
            for son in sons:
                for grandchild in family[son]:
                    grandchilds.append(grandchild)
        except:
            continue

    if len(grandchilds) > 0:
        for i, grandchild in enumerate(grandchilds):
            if grandchilds[i] == grandchilds[-1]:
                print(f"and {grandchild}")
            else:
                print(grandchild, end=", ")
    else:
        print("Get your sons married first! Wanna_be_grandpa!!")
       
family = {"A":["X", "Y", "Z"], "B":["M", "N"], "W":["A", "B"], "X":["E", "F", "G"]}

grandfather = input()
grandchilds(family, grandfather)