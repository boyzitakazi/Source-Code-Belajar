<h1>Logic Control Flow and Loop</h1>

Python memiliki sebuah tipe data bernama boolean, yang hanya memiliki 2 nilai, yaitu True atau False.

```sh
>>>x = True
>>>print(x)
>>>print(type(x))
True
<class 'bool'>
```

Daripada memasukan nilai boolean (True or False) langsung kepada variable, lebih baik mendapatkan nilai dengan melakukan suatu operasi. Operasi itu dinamakan comparison operator. Comparison operator ini yang nantinya akan memberikan jawaban nilai berdasarkan logic yang kita bangun. Ada beberapa dasar comparison operator, yaitu sebagai berikut :

<img src="https://github.com/boyzitakazi/Source-Code-Belajar/blob/master/Python%20Course%20For%20Data%20Science/WEEK%201/Day%204/comparasion.png" alt="comparasion" />

```sh
def can_run_for_president(age):
    """Can someone of the given age run for president in the US?"""
    # The US Constitution says you must "have attained to the Age of thirty-five Years"
    return age >= 35

print("Can a 19-year-old run for president?", can_run_for_president(19))
print("Can a 45-year-old run for president?", can_run_for_president(45))

result :
Can a 19-year-old run for president? False
Can a 45-year-old run for president? True
```

Comparison cukup pintar juga, perhatikan :

```sh
print(3.0 == 3)
True
```

Tapi tidak terlalu pintar

```sh
print('3'==3)
False
```

Python menyediakan operator untuk menggabungkan nilai boolean menggunakan konsep bahasa standar yang biasa kita pahami seperti “and”, “or”, dan “not”.
Dengan ini, kita dapat membuat fungsi seperti ini :

```sh
def can_run_for_president(age, is_natural_born_citizen):
    """Can someone of the given age and citizenship status run for president in the US?"""
    # The US Constitution says you must be a natural born citizen *and* at least 35 years old
    return is_natural_born_citizen and (age >= 35)

print(can_run_for_president(19, True))
print(can_run_for_president(55, False))
print(can_run_for_president(55, True))

result : 
False
False
True
```

Boolean dan conditional operator sangat berguna dalam mengatur alur atau logic di dalam kode kita. Namun Boolean dan conditional akan lebih powerful ketika kita menggunakannya bersama conditional statement, dengan menggunakan keyword if, else, dan elif. Conditional statement biasa disebut dengan if-then.

Conditional Statement, memungkinkan programmer untuk mengeksekusi suatu kode tertentu tergantung pada beberapa kondisi Boolean. Contoh dasar dari pernyataan conditional Python adalah ini:

```sh
def inspect(x):
    if x == 0:
        print(x, "is zero")
    elif x > 0:
        print(x, "is positive")
    elif x < 0:
        print(x, "is negative")
    else:
        print(x, "is unlike anything I've ever seen...")

inspect(0)
inspect(-15)

result :
 0 is zero 
-15 is negative 
```

<h2>Loop</h2>
Loop adalah cara untuk berulang kali mengeksekusi beberapa kode. Ini sebuah contoh:

```sh
planets = ['Mercury', 'Venus', 'Earth', 'Mars', 'Jupiter', 'Saturn', 'Uranus', 'Neptune']
for planet in planets:
    print(planet, end=' ') # print all on same line

result :
Mercury Venus Earth Mars Jupiter Saturn Uranus Neptune 
```

Ketika kita menggunakan loop, ada beberapa hal yang perlu diperhatikan :
<ul>
    <li>Kita perlu memberikan nama variable yang akan digunakan (dalam contoh di atas adalah planet)</li>
    <li>Serentetan nilai yang ingin kita looping untuk melakukan operasi kepada setiap elemennya ( dalam contoh di atas adalah planets ).</li>
</ul>

range(), range() adalah suatu fungsi yang menghasilkan suatu baris nilai. Lebih jauhnya lagi ,kita bisa menggunakan fungsi help yang telah kita pelajari sebelumnya untuk lebih faham berbagai macam cara untuk menggunakannya. Berikut merupakan satu contoh sederhana :

```sh
for i in range(5):
    print("Doing important work. i =", i)

result :
Doing important work. i = 0
Doing important work. i = 1
Doing important work. i = 2
Doing important work. i = 3
Doing important work. i = 4
```

Di python ada sebuah fungsi bawaan yang bernama enumerate(). Enumerate() memungkinkan kita untuk melakukan loop terhadap suatu object semacam list disertai dengan pengambilan index dari setiap elemennya. Contohnya seperti berikut :

```sh
# areas list
areas = [11.25, 18.0, 20.0, 10.75, 9.50]

# Change for loop to use enumerate() and update print()
for index,area in enumerate(areas) :
    print("room"+str(index)+": "+str(area))

result :
room0: 11.25
room1: 18.0
room2: 20.0
room3: 10.75
room4: 9.5
```

Jenis loop lain dalam python adalah while loop, yang terus menerus melakukan looping sampai memenuhi suatu kondisi yang membuat dia harus berhenti, berikut contohnya :

```sh
i = 0
while i < 10:
    print(i, end=' ')
    i += 1

result :
0 1 2 3 4 5 6 7 8 9 
```

Argumen dari while loop dievaluasi setiap looping, dan loop dijalankan sampai hasil evaluasi dari conditional operator bernilai False. 


<h2>External Resource</h2>

<h3>List Artikel :</h3>
<ul>
    <li><a href="https://www.petanikode.com/python-percabangan/">Python Percabangan</a></li>
    <li><a href="https://www.petanikode.com/python-perulangan/">Python Perulangan</a></li>
</ul>

<h3>List Videos :</h3>
<ul>
    <li><a href="https://www.youtube.com/watch?v=Hqndpzj0ZFg&list=PLZS-MHyEIRo7cgStrKAMhgnOT66z2qKz1&index=6">Percabangan 1</a></li>
    <li><a href="https://www.youtube.com/watch?v=f28RoIcHZhY&list=PLZS-MHyEIRo7cgStrKAMhgnOT66z2qKz1&index=7">Percabangan 2</a></li>
    <li><a href="https://www.youtube.com/watch?v=KMmZo_dvmyk&list=PLZS-MHyEIRo7cgStrKAMhgnOT66z2qKz1&index=8">Loop 1</a></li>
    <li><a href="https://www.youtube.com/watch?v=L5GGd1JHqnE&list=PLZS-MHyEIRo7cgStrKAMhgnOT66z2qKz1&index=9">Loop 2</a></li>
    <li><a href="https://www.youtube.com/watch?v=sLxR7vvPemY&list=PLZS-MHyEIRo7cgStrKAMhgnOT66z2qKz1&index=10">Loop 3</a></li>
    <li><a href="https://www.youtube.com/watch?v=S8PxQTcme9k&list=PLZS-MHyEIRo7cgStrKAMhgnOT66z2qKz1&index=11">Loop 4</a></li>
    <li><a href="https://www.youtube.com/watch?v=ZnBZWAUusj8&list=PLZS-MHyEIRo7cgStrKAMhgnOT66z2qKz1&index=22">Optional : Materi Pengayaan</a></li>
</ul>
