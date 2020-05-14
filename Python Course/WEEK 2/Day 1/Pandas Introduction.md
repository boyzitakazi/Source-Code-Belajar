<h1>Pandas Introduction</h1>

<h2>Instalasi Pandas</h2>

Kali ini, kamu akan mempelajari semua tentang pandas, pandas adalah suatu liblary di Python yang paling populer untuk analisis data.

Pandas adalah suatu liblary yang open source, menyediakan performance yang sangat baik, struktur data yang mudah digunakan dan alat analisis data untuk Python. Pandas akan menjadi langkah besar kamu dalam perjalanan mempelajari data science.

Untuk menggunakan pandas, kamu terlebih dahulu mesti menginstall nya di command prompt dengan mengetikan pip install pandas.

<img src="">

Tunggu sampai installasi selesai, ketika kamu hendak menginstall pandas, tidak hanya pandas yang akan di install, tapi juga beserta dependency nya, di gambar, ketika menginstall pandas kamu juga menginstall pytz dan numpy.

Pada artikel ini, akan dijelaskan beberapa materi fondasi untuk memahami pandas. diantaranya adalah :
<ul>
    <li>Objek Pandas : DataFrame vs Series</li>
    <li>Membaca data dari File</li>
    <li>Pemeriksaan sederhana tentang Karakteristik Data</li>
</ul>

<h2>Objek Panas : DataFrame vs Series</h2>

Dataframe dan series ini adalah suatu objek tempat kita menyimpan data secara terstruktur. perbedaan dari DataFrame dan Series ini terletak pada struktur nya dan juga attribute dan method-method yang mereka miliki, untuk perbedaan strukturnya adalah sebagai berikut :

<ul>
    <li>DataFrame adalah suatu objek 2 dimensi, mirip seperti tabel</li>
    <li>Series adalah objek 1 dimensi</li>
</ul>

<h3>Series</h3>

Series adalah suatu objek satu dimensi yang dapat menyimpan berbagai jenis tipe data seperti integer, string, dan lain sebagainya. tipe data dari objek series ini harus seragam. berikut contoh membuat list :

```sh
import pandas as pd

x = pd.Series([6,3,4,6])
print(x)
=============
0    6
1    3
2    4
3    6
dtype: int64
```

Series memiliki satu sumbu saja, dari contoh di atas sumbu tersebut berada baris baris, yaitu 0, 1, 2, 3. kita bisa mengubah sumbu tersebut dengan sebagai berikut :

```sh
# cara pertama
x.index = ['a', 'b', 'c', 'd']
print(x)
===========
a    6
b    3
c    4
d    6
dtype: int64
```
```sh
# cara kedua
x = pd.Series([6,3,4,6], index=['a', 'b', 'c', 'd'])
print(x)
===========
a    6
b    3
c    4
d    6
dtype: int64

# check tipe data
print(type(x))
================
pandas.core.series.Series
```

<b><i>Perhatikan : jumlah index harus sama dengan jumlah data.</i></b>

<h3>DataFrame</h3>

DataFrame adalah suatu objek 2 dimensi tempat menyimpan data dengan lebih terstruktur. dataframe memiliki 2 index, yaitu index baris dan index columns. Dalam satu column dataframe harus memiliki tipe data yang sama. tapi antar columnnya dataframe bisa memiliki jenis data yang berbeda. untuk lebih jelasnya perhatikan contoh berikut :

```sh
import pandas as pd

df = pd.DataFrame({'tipe_int': [50, 21], 'tipe_string': ['a', 'b']})
print(df)
==========
tipe_int    tipe_string
0 	50 	a
1 	21 	b

# check tipe data
print(type(df))
==========
<class 'pandas.core.frame.DataFrame'>
```

<h2>Membaca data dari File</h2>

Membaca data dari file adalah hal pertama yang dilakukan dalam suatu pekerjaan data science. maka hal ini sangat penting.

Ada beberapa tipe file yang biasa di gunakan untuk menyimpan data, seperti database, excel, csv. disini akan di jelaskan beberapa saja tentang cara membaca file dari berbagai sumber tersebut. akan di jelaskan 2 yaitu csv dan excel karena csv dan excel adalah sumber yang biasa di gunakan untuk menyimpan data karena kemudahannya. ok kita langsung saja.

Pandas menyediakan metode yang berbeda untuk membaca file dengan tipe berbeda. untuk membaca file bertipe csv pandas menggunakan suatu metode read_csv(), untuk membaca file bertipe excel pandas menggunkan suatu metode bernama read_excel. perhatikan contoh berikut :

```sh
# membaca dari dari csv
df_from_csv = pd.read_csv('jabar-corona-virus-case.csv')

# membaca data dari excel
df_from_excel = pd.read_excel('jabar-corona-virus-case.xlsx')
```

Untuk menggunakan method tersebut kita hanya perlu memasukan argument wajib, yaitu path dari file yang akan kita baca. lebih lanjutnya lagi pandas memiliki beberapa argumen optional, kalian bisa mecarinya dengan menggunakan metode help yang telah kalian pelajari sebelumnya

<h2>Pemeriksaan sederhana tentang Karakteristik Data</h2>

Pandas memiliki beberapa method untuk memahami gambaran besar karakteristik dari data kita. diantaranya adalah :

<ul>
    <li>head()</li>
    <li>tail()</li>
    <li>info()</li>
    <li>describe()</li>
</ul>

Metode head() adalah secara default adalah untuk melihat 5 pertama data kita, sedangkan metode tail() secara default untuk melihat 5 data kita dari terakhir. kita bisa mengganti jumlah data yang akan di tampilkan dengan memberikan data integer sebagai argument terhadap metode tersebut. contohnya sebagai beriktu :

<img src="" alt="head()">
<img src="" alt="tail()">

info() adalah suatu method untuk melakukan summary terhadap data yang memberikan informasi tentang tipe dari index data, tipe dari column data, non-null values pada setiap column dan jumlah memory yang digunakan. berikut adalah contohnya :

<img src="" alt="info()">

descirbe() adalah sutau metode yang menghasilkan kesimpulan deskriptif statistik dari data. kesimpulan deskriptif statistik yang dihasilkan adalah seperti central tendency, dispersi dan bentuk distributsi dari data. untuk mengetahui lebih dalam tentang deskriptik statistik silahkan baca artikel ini. berikut contoh penggunaan metode ini.

<img src="" alt="describe()">

<h2>Video Pembelajaran</h2>
<ul>
    <li><a href="https://youtu.be/3sU4Fn9w_ag">Membuat Series dari list</a></li>
    <li><a href="https://youtu.be/j-o7vsiWafg">Perbedaan Series dan List</a></li>
    <li><a href="https://youtu.be/fg4HNG17qgI">Perbedaan Series dan Dictionary</a></li>
    <li><a href="https://youtu.be/vKnx8sr9xHo">Membaca dan Membuat DataFrame</a></li>
</ul>

<h2>External Source</h2>

<h3>List Artikel :</h3>
<ul>
    <li><a href="https://www.yuksinau.id/statistika-deskriptif/">Deskriptif Statistik</a></li>
    <li><a href="https://petruknisme.com/2019/04/15/pengenalan-pandas-dan-series/">Pandas Series</a></li>
    <li><a href="https://code.tutsplus.com/id/tutorials/introducing-pandas–cms-26514">Pandas cms</a></li>
</ul>

<h3>List Video :</h3>
<ul>
    <li><a href="https://www.youtube.com/watch?v=06cjWxfk-Zc&list=PLxBhf17jrfxEFnWyV4nuRZ24MglbAjZTE">Numpy</a></li>
    <li><a href="https://www.youtube.com/watch?v=3krwFrozpek&list=PLxBhf17jrfxEFnWyV4nuRZ24MglbAjZTE&index=2">Google Colab : Optional</a></li>
    <li><a href="https://www.youtube.com/watch?v=qghFcRSdCSk&list=PLxBhf17jrfxEFnWyV4nuRZ24MglbAjZTE&index=3">Pandas Indexing</a></li>
</ul>