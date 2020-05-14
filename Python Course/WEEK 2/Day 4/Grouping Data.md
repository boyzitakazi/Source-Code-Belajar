<h1>Grouping Data</h1>

Dalam kesempatan sekarang kita akan membahas teknik-teknik grouping pada data.

Grouping adalah suatu teknik memisahkan data berdasarkan kriteria tertentu. untuk melakukan grouping di pandas kita menggunakan suatu method yang bernama groupby(). definisi abstraknya dari grouping adalah kita melakukan mapping suatu data terhadap suatu group.

ketika melakukan grouping ada beberapa proses yang terjadi secara berurutan, yaitu :

<ul>
    <li>Splitting : Memisahkan data kedalam suatu group berdasarkan kriteria tertentu.</li>
    <li>Applying : Melakukan suatu operasi terhadap sekumpulan data di group-group tersebut.</li>
    <li>Combining : Menggabungkan data menjadi suatu struktur baru</li>
</ul>

Langsung saja kita akan melihat bagaimana process split-apply-combine. kita akan menggunakan data sederhana untuk tujuan pembelajaran.

```sh
import numpy as np
import pandas as pd
df = pd.DataFrame([('bird', 'Falconiformes', 389.0),
                   ('bird', 'Psittaciformes', 24.0),
                   ('mammal', 'Carnivora', 80.2),
                   ('mammal', 'Primates', np.nan),
                   ('mammal', 'Carnivora', 58)],
                   index=['falcon', 'parrot', 'lion', 'monkey', 'leopard'],
                   columns=('class', 'order', 'max_speed'))

df
```

<img src="https://github.com/boyzitakazi/Source-Code-Belajar/blob/master/Python%20Course/img/grouping_data.png" alt="grouping_data">

Mari kita praktikan method groupby terhadap data tersebut. milskan kita group data tersebut berdasarkan class.

```sh
df.groupby('class')
====================
<pandas.core.groupby.generic.DataFrameGroupBy object at 0x000002054AEB2808>
```

Coba kalian perhatikan, pada tahap ini kita baru sampai pada process splitting berdasarkan kategori ‘class’. hasil dari groupby ini hanya sebuah objek GroupBy. objek groupby ini adalah representasi dari suatu hasil penggabungan data berdasarkan group class, namun tidak menghasilkan nilai apapun sebelum kita memberikan suatu operasi terhadap hasil dari setiap grouping tersebut. prosess melakukan operasi terhadap sekumpulan data yang telah di groupkan adalah process applying. kita bisa menggunakan berbagai jenis operasi terhadap objek groupby tersebut. ada operasi yang telah di sediakan sebagai operasi bawaan dari pandas seperti mean(), min(), max(), dan lain sebagainya. dapat pula menggunakan custom operasi tergantung apa yang kita inginkan. mari kita coba praktekan salah satu jenis operasi kepada objek groupby tersebut.

```sh
df.groupby('class').mean()
===========================
 	max_speed
class 	
bird 	206.5
mammal 	69.1
```

Coba kalian perhatikan. kita telah berhasil menggunakan groupby dan memberikan hasil. jenis operasi yang di apply terhadap setiap group adalah rata-rata. dan hasilnya di combine menjadi struktur data baru. dengan begini kita menhasilkan suatu hasil analisis sederhana yaitu bahwa binatang dengan class bird memiliki kecepatan maksimal rata-rata sebesar 206.5, dan bintang class mamalia sebesar 69.1

Untuk memahami mater lebih lanjut, silahkan kalian tonton video berikut.

<h2>Video Pembelajaran</h2>
<ul>
    <li><a href="https://youtu.be/FQWm_HJAhJ8">Grouping Data 1</a></li>
    <li><a href="https://youtu.be/I1ZTZuZ1dtw">Grouping Data 2</a></li>
</ul>
