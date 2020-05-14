<h1>Mini Project 2 : Membuat ChatBot Sederhana</h1>
<h2>Persoalan</h2>

Buah sebuah fungsi chatbot yang memberikan suatu respon dimana chatbot ini menerima satu argument string.

Chatbot ini akan mengecek terlebih dahulu apakah argument ini adalah sebuah pertanyaan atau pernyataan.

Jika argument adalah pertanyaan kemudian chatbot mengecek lagi apakah pertanyaan tersebut adalah pertanyaan yang bisa di jawab atau tidak. Jika pertanyaannya bisa di jawab maka fungsi akan memberikan jawaban yang bersifat random berdasarkan opsi list jawaban yang disediakan berdasarkan jenis pertanyaan tersebut. Jika tidak maka chatbot akan memberikan jawaban default bahwa chatbot tidak mengerti pertanyaannya.

Jika argument adalah bukan pertanyaan maka chatbot akan memberikan sebuah statement random yang disediakan.

Untuk memulai mengerjakan soal ini, download file berikut :
<h2>Lingkup Materi :</h2>
<ul>
    <li>String</li>
    <li>Dictionary</li>
    <li>If-elif-else</li>
    <li>Fungsi</li>
    <li>List</li>
    <li>Library/Module Random</li>
</ul>

<h2>Simulasi Expected Result :</h2>

```sh
# import library
from datetime import datetime
import random

# ganti dengan sebuah nama
nama  = "Nama Anda"
# variabel tanggal
tanggal = datetime.now().day
# default variabel untuk pertanyaan tidak diketahui
default = "maaf, aku tidak tahu jawaban dari pertanyaanmu"

# Membuat objek dictionary berisi berbagai opsi jawaban

# list jawaban untuk pertanyaan tentang nama
jawaban_nama = [
      "nama saya  {0}".format(nama),
      "orang-orang memanggil saya {0}".format(nama),
      "panggil saja saya {0}".format(nama)
   ]

# list jawaban untuk pertanyaan tentang tanggal
jawaban_tanggal = [
      "hari ini tanggal {0}".format(tanggal),
      "ya ampun masa tidak tahu, hari ini tanggal".format(tanggal)
    ]

# opsi pertanyaan yang bisa dijawab
pertanyaan = {
  "nama kamu siapa?": jawaban_nama,
  "kamu siapa?" : jawaban_nama,
  "tanggal berapa hari ini?": jawaban_tanggal,
  "hari ini tanggal berapa?" : jawaban_tanggal,
  "default": default
}

# list jawaban untuk sebuah argument selain pertanyaan
statement =  [
                  'ceritakan lebih banyak!',
                  'kenapa kamu berpikir begitu?',
                  'sudah berapa lama kamu merasa seperti ini?',
                  'Itu sangat menarik!',
                  'oh wow!',
                  ':)'
              ]

# respon keseluruhan
responses = {
    'pertanyaan' : pertanyaan,
    'statement' : statement
}
#------
             
# ayo buat chatbotmu
def chatbot(message):
    ## code disini

print(chatbot('Selamat Pagi'))
print(chatbot('Mau bermain bersamaku?'))
print(chatbot('nama kamu siapa?'))
print(chatbot('hari ini tanggal berapa?'))

output :
:)
maaf, aku tidak tahu jawaban dari pertanyaanmu
orang-orang memanggil saya Nama Anda
ya ampun masa tidak tahu, hari ini tanggal
```

<h2>Penjelasan</h2>
<ul>
    <li>Pada code yang ini print(chatbot(‘Selamat Pagi’)), chatbot melihat list opsi jawaban yang ada pada variabel statement, kemudian memilih secara random jawaban yang akan diberikan.</li>
    <li>Pada code yang ini print(chatbot(‘Mau bermain bersamaku?’)), chatbot melihat bahwa pesan ini adalah sebuah pertanyaan karena di akhiri dengan tanda tanya, kemudian value dari key ‘default’ karena pertanyaan tersebut tidak bisa dijawab oleh chatbot.</li>
    <li>Pada code yang ini print(chatbot(‘nama kamu siapa?’)), chatbot melihat bahwa pesan ini adalah sebuah pertanyaan karena di akhiri dengan tanda tanya, kemudian melihat pada variabel ‘jawaban_nama’ dan memilih secara random jawaban yang akan di berikan.</li>
    <li>Pada code yang ini print(chatbot(‘hari ini tanggal berapa?’)), chatbot melihat bahwa pesan ini adalah sebuah pertanyaan karena di akhiri dengan tanda tanya, melihat pada variabel ‘jawaban_tanggal’ dan memilih secara random jawaban yang akan diberikan.</li>
</ul>