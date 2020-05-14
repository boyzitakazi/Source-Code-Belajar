<h1>Mini-Project 1 : Remove Duplikat List</h1>

Buatlah sebuah fungsi, yang menerima suatu argument objek list, dan return sebuah objek list baru, dimana objek list baru ini berisi list sebelumnya dikurangi dengan data yang duplikat, sehingga setiap element di dalam list adalah unik.
<ul>
    <li>Berikan 2 solusi, solusi pertama menggunakan loop dan list, solusi yang kedua menggunakan objek set!</li>
</ul>

<b>New Concept :</b> Set
<b>Resource Materi tentang Set:</b>
<ul>
    <li><a href="https://www.youtube.com/watch?v=Fn6073uEifE&list=PLZS-MHyEIRo7cgStrKAMhgnOT66z2qKz1&index=20">Tentang Set</a></li>
</ul>

Example :

```sh
# solusi tanpa menggunakan set
def remove_duplicate(obj_list):
    ''''
    code Here
    ''''
    return new_list

# solusi dengan menggunakan set
def remove_duplicate_with_set(obj_list):
    ''''
    code Here
    ''''
    return new_list

obj_list = [1, 2, 4, 6, 2, 1, 4, 5, 7, 8, 6]
print(remove_duplicate(obj_list))
print(remove_duplicate_with_set(obj_list))

output :
[1, 2, 4, 6, 5, 7, 8]
[1, 2, 4, 5, 6, 7, 8]
```