<h1>Multiple Plots</h1>

Pada hari pertama di minggu ke 3 ini, telah di tunjukan bahwa memungkinkan untuk membuat multiple data plot dalam satu axis. seperti ini :
```sh
fig, ax = plt.subplots()
data_x1 = [1, 2, 3, 4]
data_y1 = [10, 20, 25, 30]
data_x2 = [1, 2, 3, 4, 5]
data_y2 = [5, 15, 20, 25, 30]
ax.plot(data_x1, data_y1)
ax.plot(data_x2, data_y2)
plt.show()
```

<img src="https://github.com/boyzitakazi/Source-Code-Belajar/blob/master/Python%20Course%20For%20Data%20Science/img/IMG%20WEEK%203/multiple1.png" alt="multiple1">

Namun, dalam beberapa kasus, ketika multiple plots di masukan ke dalam satu axes, dapat memungkinkan membuat objek visualisasi menjadi tidak rapi. contohnya seperti ini :
```sh
fig, ax = plt.subplots()
data_x1 = [1, 2, 3, 4]
data_y1 = [10, 20, 25, 30]
data_x2 = [1, 2, 3, 4, 5]
data_y2 = [800, 1005, 900, 195, 700]
ax.plot(data_x1, data_y1)
ax.plot(data_x2, data_y2)
plt.show()
```

<img src="https://github.com/boyzitakazi/Source-Code-Belajar/blob/master/Python%20Course%20For%20Data%20Science/img/IMG%20WEEK%203/multiple2.png" alt="multiple2">

atau seperti ini :
```sh
data_x1 = [1, 2, 3, 4]
data_y1 = [10, 20, 25, 30]
data_x2 = [1, 2, 3, 4, 5]
data_y2 = [20, 25, 20, 40, 50]
data_x3 = data_x2
data_y3 = [50, 10, 30, 15, 30]
data_x4 = data_x2
data_y4 = [10, 40, 24, 30, 29]

fig, ax = plt.subplots()
ax.plot(data_x1, data_y1)
ax.plot(data_x2, data_y2)
ax.plot(data_x3, data_y3)
ax.plot(data_x4, data_y4)
plt.show()
```

<img src="https://github.com/boyzitakazi/Source-Code-Belajar/blob/master/Python%20Course%20For%20Data%20Science/img/IMG%20WEEK%203/multiple3.png" alt="multiple3">

Terdapat berbagai kasus yang apabila kita memplot data dalam satu axis, dapat membuat data visualisasi kita menjadi berantakan sehingga kita susah u/ menemukan pola.

Pada kasus pertama, perbedaan yang besar nilai y antara data pertama dan kedua membuat data pertama menjadi tidak jelas visualisasinya, tidak jelas terlihat pola grafiknya.

Pada kasus kedua banyaknya plot data membuat visualisasi menjadi berantakan tak karuan. hal ini dapat meangganggu proses analisis dalam menemukan pola.

Oleh karena itu, solusinya adalah membuat multiple axis, dan meletakan data di axis-axis yang berbeda. hal ini bisa dilakukan dengan metode yang sama yaitu subplots().

Metode subplots ini memiliki argument untuk mengatur jumlah axis yang di hasilkan, argument ini adalah nrows dan ncols. tidak memberikan nilai pada argument ini di contoh-contoh sebelumnya karena secara default, nrows dan ncols bernilai satu.

Untuk menghasilkan multiple axis, bisa di lakukan dengan memberikan nilai nrows dan ncols lebih dari satu, seperti ini :
```sh
fig, ax = plt.subplots(nrows=3, ncols=2)
print('Figure ini memiliki {0} axis di baris dan {1} axis di column'.format(ax.shape[0], ax.shape[1]))
print(ax)
===========================
Figure ini memiliki 3 axis di baris dan 2 axis di column
[[<matplotlib.axes._subplots.AxesSubplot object at 0x0000024384AD4248>
  <matplotlib.axes._subplots.AxesSubplot object at 0x00000243849B3A88>]
 [<matplotlib.axes._subplots.AxesSubplot object at 0x0000024384A2B708>
  <matplotlib.axes._subplots.AxesSubplot object at 0x0000024384A23908>]
 [<matplotlib.axes._subplots.AxesSubplot object at 0x0000024384981D88>
  <matplotlib.axes._subplots.AxesSubplot object at 0x000002438494E788>]]
```
Coba perhatikan dengan attribute shape didapatkan bahwa dimensi dari objek axis adalah 3, 2, artinya axis memiliki 3 rows dan 2 columns. dan ketika variable ax di print. dihasilkan sebuah nested list berisi 3 elemen list didlam element list terluar, dan dalam setiap list di dalam list terdapat objek axis berjumlah 2. ini artinya adalah bahwa ax[0] akan menghasilkan objek list berisi objek axis di row pertama. dan setereusnya.

Untuk lebih jelasnya, mari lihat bentuk dari figure ini :
```sh
fig, ax = plt.subplots(nrows=3, ncols=2)
plt.show()
```

<img src="https://github.com/boyzitakazi/Source-Code-Belajar/blob/master/Python%20Course%20For%20Data%20Science/img/IMG%20WEEK%203/multiple4.png" alt="multiple4">

Sekarang mari coba membuat visualisasi data 4 plots dengan multiple axis.
```sh
import matplotlib.pyplot as plt

data_x1 = [1, 2, 3, 4]
data_y1 = [10, 20, 25, 30]
data_x2 = [1, 2, 3, 4, 5]
data_y2 = [20, 25, 20, 40, 50]
data_x3 = data_x2
data_y3 = [50, 10, 30, 15, 30]
data_x4 = data_x2
data_y4 = [10, 40, 24, 30, 29]

fig, ax = plt.subplots(nrows=2, ncols=2)
ax[0][0].plot(data_x1, data_y1)
ax[0][1].plot(data_x2, data_y2)
ax[1][0].plot(data_x3, data_y3)
ax[1][1].plot(data_x4, data_y4)
plt.show()
```
<img src="https://github.com/boyzitakazi/Source-Code-Belajar/blob/master/Python%20Course%20For%20Data%20Science/img/IMG%20WEEK%203/multiple5.png" alt="multiple5">

Coba perhatikan bahwa axis-y di setiap axis mempunyai interval yang berbeda-beda, begitu pula axis-x nya pada axis baris pertama column pertama hanya pada interval 1-4, sedangkan yang lainnya 1-5. Visualisasi ini bisa di improve agar mendapatkan interval axis yang sama dengan menambahkan argument sharex dan sharey terhadap method subplots. seperti ini :
```sh
import matplotlib.pyplot as plt

data_x1 = [1, 2, 3, 4]
data_y1 = [10, 20, 25, 30]
data_x2 = [1, 2, 3, 4, 5]
data_y2 = [20, 25, 20, 40, 50]
data_x3 = data_x2
data_y3 = [50, 10, 30, 15, 30]
data_x4 = data_x2
data_y4 = [10, 40, 24, 30, 29]

fig, ax = plt.subplots(nrows=2, ncols=2, sharex=True, sharey=True)
ax[0][0].plot(data_x1, data_y1)
ax[0][1].plot(data_x2, data_y2)
ax[1][0].plot(data_x3, data_y3)
ax[1][1].plot(data_x4, data_y4)
plt.show()
```
<img src="https://github.com/boyzitakazi/Source-Code-Belajar/blob/master/Python%20Course%20For%20Data%20Science/img/IMG%20WEEK%203/multiple6.png" alt="multiple6">

<h2>Video Pembelajaran</h2>
<ul>
    <li><a href="https://youtu.be/_Kx4qT0sgGM">Membuat Beberapa Axes</a></li>
    <li><a href="https://youtu.be/f9jhv8-WvuY">Axes di Dalam Axes</a></li>
</ul>
