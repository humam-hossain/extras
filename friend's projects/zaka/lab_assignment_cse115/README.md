# Notes
## Problem_3.c

* **You must run Problem_3.c and Provide 3 or more entries. Last entry should be your Name, ID, Course, Section. These information will be stored in my_file.txt**

## Problem_5.c

**Question:**
---

d) Study the following sequence **3,1,3,7,11,21,39,71,131,241,443,815,..........** In mathematical terms,the sequence Tn is defined as follows: 

**Tn = Tn-1 + Tn-2 + Tn-3 (for n>=0)** 

with initial values, **T0=0, T1=1, T2=0**

Now take an integer input ‘n’ from the user and print the sequence upto ‘n’. [5pts]

---

* The sequence doesn't match with initial values, **T0=0, T1=1, T2=0**
* Rather The sequence can be found with initial values, **T0=3, T1=1, T2=3**

> Important Note: Lookup MID-1 Problem 4. Same problem but accurate inital values.

##### When T0=0, T1=1, T2=0 <- I left it this way

```c
98     tarr[0] = 0;
99     tarr[1] = 1;
100    tarr[2] = 0;

//Output
0 1 0 1 2 3 6 11 20 37 68 125 230 423 778 1431 2632
```

##### When T0=3, T1=1, T2=3 <- change to these values to get accurate result

```c

98     tarr[0] = 3;
99     tarr[1] = 1;
100    tarr[2] = 3;

// Output
3 1 3 7 11 21 39 71 131 241 443 815 1499 2757 5071 9327 17155
```
