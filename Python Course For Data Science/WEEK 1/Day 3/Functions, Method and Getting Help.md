<h1>Functions, Method and Getting Help</h1>

Sebelumnya kita telah melihat dan menggunakan fungsi-fungsi seperti print, sum, len dan sebagainya. Python memiliki lebih banyak fungsi, dan membuat fungsi kita sendiri adalah bagian besar dari perjalanan kita belajar pemrograman python.

Dalam bagian ini kita akan belajar lebih banyak tentang menggunakan dan mendefinisikan fungsi.
Getting Help

Kita melihat fungsi ‘len’ di tutorial sebelumnya, tetapi bagaimana jika kita lupa fungsi apa itu?

Fungsi help () merupakan salah satu fungsi yang sangat penting untuk kita pelajari. Jika kita dapat mengingat cara menggunakan help(), kita memegang kunci untuk memahami sebagian besar fungsi lainnya. Karena fungsi help() adalah suatu fungsi untuk memahami fungsi semua fungsi.

Berikut ini sebuah contoh:

```sh
>>>print(help(len))
Help on built-in function len in module builtins:

len(obj, /)
    Return the number of items in a container.
```

help () menampilkan dua hal:
<ul>
	<li>header : header adalah bagian pertama dari output help, dari contoh diatas yaitu bagian len(obj, /). Baris ini memberitahu kita bahwa fungsi len ini menerima argument sebuah object.</li>
	<li>Deskripsi singkat tentang apa fungsinya. </li>
</ul>

<h2>Mendefinisikan fungsi</h2>

Python memiliki banyak sekali fungsi bawaan yang sangat membantu kita. Namun kita juga bisa membuat fungsi kita sendiri untuk melangkah lebih jauh dalam membuat suatu aplikasi. Berikut adalah contoh membuat fungsi di python :

```sh
def least_difference(a, b, c):
    diff1 = abs(a - b)
    diff2 = abs(b - c)
    diff3 = abs(a - c)
    return min(diff1, diff2, diff3)
```

Dari contoh di atas, kita membuat fungsi yang bernama least_difference, dimana fungsi ini memiliki tiga argument, yaitu a, b, c
Fungsi dimulai dengan kata kunci ‘def’. Blok kode yang menjorok setelah tanda ‘:’ dijalankan ketika fungsi dipanggil.

‘return’ adalah kata kunci lain juga yang berkaitan dengan fungsi. Kata kunci ‘return’ adalah untuk menentukan apa yang akan di hasilkan dari fungsi tersebut.

<h2>Default Arguments</h2>

Perhatikan fungsi berikut :

```sh
def greet(who="Colin"):
    print("Hello,", who)
```

Dari contoh di atas, kita mendefinisikan fungsi yang memiliki arguments ‘who’. Di dalam fungsi tersebut kita mengassign nilai “Colin” terhadap argumen ‘who’. Ini menunjukan, jika kita tidak memberikan nilai ‘who’ ketika kita memanggil fungsi tersebut.,maka fungsi tersebut akan memiliki nilai argument ‘who’ sebagai “Colion”. Berikut contohnya :

```sh
# memanggil fungsi tanpa memberikan nilai untuk argumentt who
>>>print(greet())
"Hello Colion"

# memanggil fungsi dengan memberikan argument untuk nilai who
>>>print(greet("Fauzan"))
"Hello Fauzan"
```

Method

Method adalah salah satu hal yang sangat penting dalam python. memahami method akan membuat kita semakin pro dalam menggunakan bahasa python.

Sederhananya, method adalah suatu fungsi yang dimiliki oleh suatu object.

Apa itu object? Segala yang ada di python adalah object. Contohnya kita membuat variabel bertipe string, bertipe list, bertipe numeric dan lain sebagainya, itu semua adalah object, dan setiap object memiki fungsi yang hanya bisa digunakan oleh object tersebut. Sebagai contoh, object string memiliki method uppercase, dimana method upper ini tidak bisa digunakan oleh object lain seperti list. Tapi list juga memiliki fungsi seperti index, yang dimana fungsi index ini tidak bisa digunakan oleh data dengan tipe objek lain seperti string contohnya. Jadi intinya, fungsi yang dimiliki oleh suatu object dinamakan method. Berikut adalah contohnya :

```sh
# membuat object string
>>> huruf_kecil = 'huruf_kecil'
# memanggil salah satu method string
>>> print(huruf_kecil.upper())
'HURUF_KECIL'

# mendifinisikan object list
>>>keluarga_ucup = ['mamah', 'papah', 'ucup', 'adek ucup', 'kaka ucup']
# memanggil method yang dimiliki oleh list
>>>print(keluarga_ucup.index('ucup'))
2

## jika kita menggunakan method upper ketika object list, maka akan error
## karena method tersebut bukan dimiliki object list
>>>print(keluarga_ucup.upper())
AttributeError                            Traceback (most recent call last)
<ipython-input-12-13e588d6418a> in <module>
----> 1 keluarga_ucup.upper()

AttributeError: 'list' object has no attribute 'upper'
```

<h2>Menggunakan External Library</h2>

So far, kita telah mengenal fungsi bawaan dari python. Fungsi bawaan adalah fungsi yang sudah ada di python tanpa kita harus menginstall apapun. Namun di python juga ada berbagai fungsi, method, object yang bukan merupakan bawaan dari python, tapi hasil kerja dari orang lain yang telah membagikannya kepada kita, sesuatu ini kita namakan external library. Kita bisa menggunakan external library tersebut dengan cara menginstallnya dan kemudian menggunakannya di kode kita.

Ada banyak sekali external library di python. Beberapa external library yang sangat penting untuk data science adalah numpy, pandas, skit-learn, dan lain sebagainya.

Cara untuk menginstall external library ini, yang paling mudah adalah dengan menggunakan package manager. Di python package manager ini bernama ‘pip’, contohnya bila kita ingin menginstsall library numpy, maka kita cukup membuka command prompt lalu ketikan ‘pip install numpy’, seperti contoh berikut :

<img src="https://github.com/boyzitakazi/Source-Code-Belajar/blob/master/Python%20Course%20For%20Data%20Science/WEEK%201/Day%203/fungction.png" alt="fungction"/>

Untuk menggunakan external library di kode python kita, kita terlebih dahulu memanggil library tersebut menggunakan suatu keyword yaitu ‘import’. Berikut adalah contoh memanggil dan menggunakan external library di python :

```sh
# Definition of radius
>>>r = 0.43

# Import the math package
>>>import math
>>>pi=math.pi 

# Calculate C
>>>C = 2*pi*r 

# Calculate A
>>>A = pi*r*r 

# Build printout
>>>print("Circumference: " + str(C))
Circumference: 2.701769682087222
>>>print("Area: " + str(A))
Area: 0.5808804816487527
```

Dari kode block di atas kita memanggil library math, kemudian kita menggunakan attribute pi yang ada di dalam library math.
<h2>External Resource</h2>

Untuk lebih memahami lagi materi, silakan kunjungi artikel dan video di bawah ini :

<h3>List Artikel :</h3>
<ul>
    <li><a href="https://belajarpython.com/tutorial/fungsi-python">Python Fungsi 1</a></li>
    <li><a href="https://www.petanikode.com/python-fungsi/">Python Fungsi 2</a></li>
</ul>

<h3>List Videos :</h3>
<ul>
    <li><a href="https://www.youtube.com/watch?v=WjM68icSw3s&list=PLZS-MHyEIRo7cgStrKAMhgnOT66z2qKz1&index=12">Pengenalan Fungsi</a></li>
    <li><a href="https://www.youtube.com/watch?v=vWuSLG_6rxA&list=PLZS-MHyEIRo7cgStrKAMhgnOT66z2qKz1&index=13">Fungsi Argument</a></li>
    <li><a href="https://www.youtube.com/watch?v=23dDEp6WPH4&list=PLZS-MHyEIRo7cgStrKAMhgnOT66z2qKz1&index=14">Return Value Function</a></li>
</ul>
