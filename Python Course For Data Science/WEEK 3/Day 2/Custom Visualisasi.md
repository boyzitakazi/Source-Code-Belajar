<h1>Custom Visualisasi</h1>

Pada materi sebelumnya telah di jelaskan cara membuat objek figure, axes, dan memplot data ke dalam axis tersebut.

Pada artikel ini akan di bahas tentang meng-custom visualisasi kita agar lebih informatif dan menarik.

Berikut adalah raw objek visualisasi data yang akan di custom :
```sh
import matplotlib.pyplot as plt

# membuat component figure dan axis
fig, ax = plt.subplots()

data_x = [1, 2, 3, 4, 5, 6, 7]
data_y = [10, 20, 25, 30, 15, 18, 10]

# memberikan data kedalam axis
ax.plot(data_x, data_y)
plt.show()
```
<img src="https://github.com/boyzitakazi/Source-Code-Belajar/blob/master/Python%20Course%20For%20Data%20Science/img/IMG%20WEEK%203/custom1.png" alt="custom1">

<h2>Marker Data Point</h2>

Coba perhatikan bahwa bentuk plot dari data adalah berupa line plot, tidak dapat di ketahu dimana tepatnya data poin terletak. terdapat sebuah argument dalam methode plot untuk memberikan marker/tanda terhadap data poin, argument tersebut adalah marker, perhatikan kode berikut :
```sh
import matplotlib.pyplot as plt

# membuat component figure dan axis
fig, ax = plt.subplots()

data_x = [1, 2, 3, 4, 5, 6, 7]
data_y = [10, 20, 25, 30, 15, 18, 10]

# memberikan data kedalam axis
ax.plot(data_x, data_y, marker='o')
plt.show()
```
<img src="https://github.com/boyzitakazi/Source-Code-Belajar/blob/master/Python%20Course%20For%20Data%20Science/img/IMG%20WEEK%203/custom2.png" alt="custom2">


Di atas telah di berikan nilai ‘o’ terhadap arguent marker, ‘o’ artinya bulat, jadi di berikan marker bulat terhadap setiap data poin, sehingga dapat lebih jelas membedakan antara garis penghubung dengan data poin.

Nilai marker tidak hanya ‘o’ berikut opsi nilai untuk memberikan berbagai jenis bentuk marker terhadap data poin.

<img src="https://github.com/boyzitakazi/Source-Code-Belajar/blob/master/Python%20Course%20For%20Data%20Science/img/IMG%20WEEK%203/custom3.png" alt="custom3">

<h2>Custom LineStyle</h2>

Garos penghubung antara data poin dapat di ubah dengan memberikan argument linestyle terhadap method plot, perhatikan contoh berikut :
```sh
import matplotlib.pyplot as plt

# membuat component figure dan axis
fig, ax = plt.subplots()

data_x = [1, 2, 3, 4, 5, 6, 7]
data_y = [10, 20, 25, 30, 15, 18, 10]

# memberikan data kedalam axis
ax.plot(data_x, data_y, marker='x', linestyle='--')
plt.show()
```

<img src="https://github.com/boyzitakazi/Source-Code-Belajar/blob/master/Python%20Course%20For%20Data%20Science/img/IMG%20WEEK%203/custom4.png" alt="custom4">

Di atas di berikan nilai ‘–‘ terhadap argument linestyle, terdapat berbagai opsi untuk memberikan berbagai jenis bentuk terhdap linestyle, yaitu sebagai berikut :

<img src="https://github.com/boyzitakazi/Source-Code-Belajar/blob/master/Python%20Course%20For%20Data%20Science/img/IMG%20WEEK%203/custom5.png" alt="custom5">

<h2>Memilih Warna</h2>

Dapat di pilih warna plot dengan memberikan argument color terhadap method plot.

Memilhi value untuk argument color bisa dengan berbagai bentuk format warna, seperti format RGB, hex code, atau label warna biasa seperti ‘r’ untuk read, ‘b’ untuk blue dan lain sebagainya. seperti beriktu :
```sh
import matplotlib.pyplot as plt

# membuat component figure dan axis
fig, ax = plt.subplots()

data_x = [1, 2, 3, 4, 5, 6, 7]
data_y = [10, 20, 25, 30, 15, 18, 10]

# memberikan data kedalam axis
ax.plot(data_x, data_y, marker='D', linestyle='dotted', color='#9934FF')
plt.show()
```
<img src="https://github.com/boyzitakazi/Source-Code-Belajar/blob/master/Python%20Course%20For%20Data%20Science/img/IMG%20WEEK%203/custom6.png" alt="custom6">

<h2>Custom Axis Label and Title</h2>

Component lain yang penting untuk di custom adalah axis label karena axis label menunjukan variabel apa yang sedang di plot.

Axis terdapat 2, yaitu x-axis dan y-axis. untuk mengubah x-axis dapat menggungkan method set_xlabel(), untuk mengubah y-axis dapat menggungkan set_ylabel().

Title juga adalah component yang sangat penting untuk menunjukan data apa yang sedang di visualisasikan. untuk mengubah title dapat menggunakan method set_title().

perhatikan contoh berikut :
```sh
import matplotlib.pyplot as plt

# membuat component figure dan axis
fig, ax = plt.subplots()

data_x = [1, 2, 3, 4, 5, 6, 7]
data_y = [10, 20, 25, 30, 15, 18, 10]

# memberikan data kedalam axis
ax.plot(data_x, data_y, marker='D', linestyle='dotted', color='#9934FF')

# mengubah axis label dan title
ax.set_xlabel('X Label Axis')
ax.set_ylabel('Y Label Axis')
ax.set_title('Title of Graph')

plt.show()
```
<img src="https://github.com/boyzitakazi/Source-Code-Belajar/blob/master/Python%20Course%20For%20Data%20Science/img/IMG%20WEEK%203/custom7.png" alt="custom7">

<h2>Video Pembelajaran</h2>
<ul>
    <li><a href="https://youtu.be/yj-Vdi0t4rk">Custom Style</a></li>
</ul>