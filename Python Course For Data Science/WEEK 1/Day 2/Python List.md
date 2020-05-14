<h1>Python List</h1>

<b>List</b> adalah salah satu tipe data untuk mengoleksikan data di python. Contohnya, kita punya koleksi data suhu semua anggota keluarga kita, untuk menyimpan data ini, tentunya lebih mudah kalau kita menyimpannya dalam satu tempat, dan tempat itu salah satunya bisa bernama list. Mengapa salah satunya? Karena tempat menyimpan koleksi data di python tidak hanya list, ada tipe data lain seperti dictionary, tuple, set dan lain-lain. Namun dalam pembahasan ini kita akan fokus membahas tentang list.

Sampai di sini setidaknya kita sudah dapat sedikit gambaran tentang apa itu list. Selanjutnya kita akan coba pelajari bagaimana cara membuat list di python.. Berikut caranya.. 

```sh
# inisialisasi suhu anggota keluarga
suhu1 = 21
suhu2 = 20
suhu3 = 22

# simpan dalam list
suhu_keluarga = [suhu1, suhu2, suhu3]
```

<h2>Akses Data List</h2>

Setelah kita bisa membuat data sederhana dengan list. Sekarang kita akan belajar bagaimana caranya mengakses data dalam list. Untuk mengakses data dalam list, python menggunakan sesuatu yang bernama index. Index menunjukan posisi suatu data di dalam list, dan python memulai index dari 0. Perlu diketahui sebelumnya bahwa ada 2 teknik untuk mengakses data di dalam list. Pertama dengan subsetting list, kedua dengan slicing list. Mari kita lihat contohnya : 

```sh
# Membuat data list
>>> tinggi_badan = [
                162, # index 0 
                177, # index 1
                182, # index 2
                150, # index 3
                166 # index 4
                ]

# Subsetting list
>>> print(tinggi_badan[0]) # posisi pertama
162
>>> print(tinggi_badan[-2]) # posis kedua dari belakang
150

# Slicinglist
# Mengambil data dengan index 0, 1, 2, 3
>>> print(tinggi_badan[:4]) 
[162, 177, 182, 150, 166]
# Mengambil data dengan index 2, 3, 4
>>> print(tinggi_badan[2:5])
[182, 150, 166]
```

<h2>Sifat List</h2>

Sebelumnya, kita sudah mengenal sedikit tentang list, mari kita kenal lebih dalam lagi tentang list.
<ul>
    <li>List berisi koleksi nilai/data.</li>
    <li>List bisa berisi tipe data apapun dan tidak harus semua data berisi tipe data yang sama.</li>
    <li>List bisa berubah </li>
</ul>
Untuk sifat no 1. sudah dijelaskan dan tunjukan di atas. Sekarang kita langsung bahas sifat no.2. Sebelumnya, kita sudah mengenal tentang beberapa tipe data dalam list, ada numerik, string, boolean, dan sebagainya. Nah, nilai-nilai yang bertipe data apapun dapat dimasukan sebagai koleksi di dalam list, bahkan list itu sendiri bisa ada di dalam list. Untuk lebih jelasnya mari kita lihat contoh berikut.. 

```sh
# membuat list
suhu_keluarga_ucup = [
                'ayah ucup', 19, 'ucup', 19, 'ibu ucup', 20
                ]
suhu_keluarga_boy = [
                'istri boy', 20, 'anak boy', 18, 'istri kedua boy', 21
                ]

# membuat list dalam list dan di campur dengan data boolean
suhu_keluarga = [
                suhu_keluarga_ucup, suhu_keluarga_boy 
                ]
```

<h2>Manipulasi List</h2>

List adalah <b>“mutable”</b>, artinya dapat diubah.
Salah satu cara untuk mengubah daftar adalah dengan menetapkan indeks atau ekspresi irisan.
Misalnya, katakanlah kita ingin mengubah suhu ucup:

```sh
# mengubah suhu ucup
suhu_keluarga_ucup[3] = 22

print(suhu_keluarga_ucup)
>>> ['ayah ucup', 19, 'ucup', 22, 'ibu ucup', 20]
```
katakanlah kita ingin mengganti ‘ibu ucup’ dengan ‘mamah ucup’, beserta suhunya :

```sh
suhu_keluarga_ucup[-2:] = ['mamah ucup', 22]
print(suhu_keluarga_ucup)
>>> ['ayah ucup', 19, 'ucup', 22, 'mamah ucup', 22]
```

kita juga bisa menambahkan elemen di list, yaitu dengan menggunakan ‘+’ operator, katakanlah kita ingin menambahkan adik ucup beserta suhunya, berikut contohnya :

```sh
suhu_keluarga_ucup = suhu_keluarga_ucup + ['adik ucup', 20]

print(suhu_keluarga_ucup)
>> ['ayah ucup', 19, 'ucup', 22, 'mamah ucup', 22, 'adik ucup', 20]
```

terakhir, kita juga bisa menhilangkan element di dalam list, yaitu seperti ini :

```sh
del(suhu_keluarga_ucup[0])
```

Perhatian, setelah suatu elemen di dalam list dihapus, maka index dari seluruh elemennya pun akan berubah, contohnya di atas kita mendelete elemen dengan index 0 di list, artinya kita mendelete elemen ‘ayah ucup’, maka elemen yang lain akan berubah menyesuaikan dengan perubahan tersebut, maka ketika kita mengambil index 0 di list tersebut maka hasilnya akan seperti ini :

```sh
print(suhu_keluarga_ucup[0])
>>>19
```

<h2>Some Function in List</h2>

Python memiliki beberapa fungsi bawaan yang berguna untuk bekerja dengan list. diantaranya adalah :
‘len’ memberikan panjang daftar:
```sh
keluarga_ucup = ['mamah', 'papah', 'ucup', 'adek ucup', 'kaka ucup']

# berapa banyak anggota keluarga ucup
print(len(keluarga_ucup))
>>>5
```

‘sorted’ mengurutkan elemen list:

```sh
>>>print(sorted(keluarga_ucup))
>>>['adek ucup', 'kaka ucup', 'mamah', 'papah', 'ucup']
```

‘sum’, tentu fungsi ini untuk menjumlahkan:

```sh
primes = [2, 3, 5, 7]
print(sum(primes))
>>>17
```

<h2>External Resource</h2>

<h3>List Artikel/Tutorial :</h3>
<ul>
    <li><a href="https://www.petanikode.com/python-list/">Python List</a></li>
</ul>

<h3>List Video :</h3>
<ul>
    <li><a href="https://www.youtube.com/watch?v=kuLBqkpnKDk&list=PLZS-MHyEIRo7cgStrKAMhgnOT66z2qKz1&index=5">Python List</a></li>
    <li><a href="https://www.youtube.com/watch?v=NoX5wnjBaHo&list=PLZS-MHyEIRo7cgStrKAMhgnOT66z2qKz1&index=17">Python List 2</a></li>
</ul>