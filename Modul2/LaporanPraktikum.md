# <h1 align="center">Laporan Praktikum Modul 2 </h1>
<p align="center">[Abyan Fito Arrasyid] - [109082500086]</p>

### 1. [Soal]
#### soal1.go
## Penjelasan Program
Program ini meminta pengguna memasukkan 3 buah string, lalu menampilkan urutan awalnya. Setelah itu, isi variabel digeser menggunakan variabel `temp`, sehingga nilai `satu` pindah ke `tiga`, `dua` pindah ke `satu`, dan `tiga` pindah ke `dua`.

Contoh:

Input:

A
B
C

Output awal = A B C <br>
Output akhir = B C A <br> <br>
[Program digunakan untuk melakukan pergeseran urutan 3 buah string (circular shift) dengan bantuan variabel sementara (`temp`).]

### Output Soal 1 :
![Screenshot Output soal1](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul2/Output/Soal%201.png)

### 2. [Soal2]
#### soal2.go

```go
package main
import "fmt"

func main() {
	var w1, w2, w3, w4 string
	berhasil := true

	for i := 1; i <= 5; i++ {
		fmt.Printf("Percobaan %d: ", i)
		fmt.Scan(&w1, &w2, &w3, &w4)

		if !(w1 == "merah" && w2 == "kuning" && w3 == "hijau" && w4 == "ungu") {
			berhasil = false
		}
	}

	fmt.Println("BERHASIL:", berhasil)
}
```
### Output Soal 2 :
![Screenshot Output soal2](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul2/Output/Soal%202.png)
[Program digunakan sebagai perulangan sebanyak 5 kali warna dari 4 tabung reaksi. Pada setiap percobaan, program akan mengecek apakah urutan warna yang dimasukkan adalah merah, kuning, hijau, ungu. Jika ada satu saja percobaan yang urutannya berbeda, maka variabel berhasil diubah menjadi false. Setelah semua percobaan selesai, program menampilkan nilai true jika semua urutan benar, atau false jika ada minimal satu urutan yang salah.] 

### 3. [Soal3]
#### soal3.go

```go
package main
import "fmt"

func main() {
	var berat, kg, gram, biayaKg, biayaGram, total int

	fmt.Print("Berat parsel (gram): ")
	fmt.Scan(&berat)

	kg = berat / 1000
	gram = berat % 1000

	biayaKg = kg * 10000

	if gram >= 500 {
		biayaGram = gram * 5
	} else {
		biayaGram = gram * 15
	}

	total = biayaKg + biayaGram

	if kg > 10 {
		total = biayaKg
	}

	fmt.Printf("Detail berat: %d kg + %d gr\n", kg, gram)
	fmt.Printf("Detail biaya: Rp. %d + Rp. %d\n", biayaKg, biayaGram)
	fmt.Printf("Total biaya: Rp. %d\n", total)
}
```
### Output Soal 3 :
![Screenshot Output soal3](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul2/Output/Soal%203.png)
[Program digunakan untuk menghitung berat parsel dalam satuan gram, kemudian menghitung jumlah kilogram dan sisa gram menggunakan operasi pembagian (/) dan modulus (%). Biaya pengiriman dihitung sebesar Rp10.000 per kilogram, sedangkan sisa gram dikenakan biaya Rp5 per gram jika sisa gram ≥ 500, atau Rp15 per gram jika sisa gram < 500. Setelah itu, biaya kilogram dan biaya gram dijumlahkan menjadi total biaya. Namun, jika berat parsel lebih dari 10 kg, maka biaya tambahan untuk sisa gram digratiskan sehingga total biaya hanya dihitung dari biaya per kilogram.]
