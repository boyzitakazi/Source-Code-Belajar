<h1>Python Dictionary</h1>

Dictionary adalah suatu topik yang sangat penting dalam python dan data science. Karena dictionary seperti penyusun untuk suatu objek yang lebih kompleks seperti pandas dataframe yang akan kita pelajari nanti.

Jadi, dictionary ini adalah salah satu jenis tipe data di python yang memetakan antara key dan value dari suatu data. Berikut contohnya :

```sh
numbers = {'one':1, 'two':2, 'three':3}
```

Kita dapat mengakses suatu nilai dalam dictionary dengan cara seperti ini :

```sh
>>>print(numbers['one'])
1
```

Kita juga dapat mengubah suatu nilai dalam dictionary dengan cara berikut :

```sh
>>>numbers['one'] = 'satu'
>>>print(numbers)
 {'one':satu, 'two':2, 'three':3}
```

Perhatikan value dari key ‘one’ berubah dari awalnya 1 menjadi ‘satu’

Jika kita melakukan loop pada suatu dictionary, maka kita akan me-loop terhadap key pada dictionary tersebut :

```sh
or k in numbers:
    print("{} = {}".format(k, numbers[k]))

result :
one = satu
two = 2
three = 3
```

Object dictionary mempunyai suatu method yang bernama items(), dimana dengan fungsi ini kita dapat melakukan loop terhadap suatu dictionary beserta dengan key dan value nya :

```sh
or k, v in numbers.items():
    print("{} = {}".format(k, v))

result :
one = satu
two = 2
three = 3
```

Untuk memahami lebih jauh lagi tentang dictionary, kita bisa menggunakan fungsi help sebagai penolong.

<h2>External Resource</h2>

Untuk lebih memahami lagi tentang materi ini, kunjungi artikel/video dari link-link di bawah ini :

<h3>List Artikel/Tutorial :</h3>
<ul>
    <li><a href="https://belajarpython.com/tutorial/dictionary-python">Python Dictionary 1</a></li>
    <li><a href="https://www.petanikode.com/python-dictionary/">Python Dictionary 2</a></li>
</ul>

<h3>List Video :</h3>
<ul>
    <li><a href="https://www.youtube.com/watch?v=ARfcEqYpzkk&list=PLZS-MHyEIRo7cgStrKAMhgnOT66z2qKz1&index=21">Python Dictionary</a></li>
</ul>