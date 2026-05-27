# <h1 align="center">Laporan Praktikum Modul 10 </h1>
<p align="center">[Abyan Fito Arrasyid] - [109082500086]</p>

### 1. [Soal]
#### soal1.go

```go
package main
import "fmt"

const NMAX int = 1000

func main() {
	var n int
	var berat [NMAX]float64
	fmt.Scan(&n)

	for i := 0; i < n; i++ {
		fmt.Scan(&berat[i])
	}

	min := berat[0]
	max := berat[0]

	for i := 1; i < n; i++ {
		if berat[i] < min {
			min = berat[i]
		}

		if berat[i] > max {
			max = berat[i]
		}
	}
	fmt.Println(min, max)
}
```
### Output Soal 1 :
![Screenshot Output soal1](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul9/output/Soal1.png)
[Program ini membaca dua lingkaran yang masing-masing didefinisikan oleh koordinat pusat dan jari-jari, lalu membaca satu titik sembarang. Program kemudian menghitung jarak titik tersebut ke masing-masing pusat lingkaran menggunakan rumus jarak Euclidean. Jika jarak titik ke pusat lingkaran lebih kecil atau sama dengan jari-jari, maka titik dianggap berada di dalam lingkaran tersebut. Berdasarkan hasil pengecekan terhadap kedua lingkaran, program menentukan apakah titik berada di dalam lingkaran pertama, lingkaran kedua, keduanya, atau di luar keduanya, lalu menampilkan hasilnya sesuai format yang diminta.]

### 2. [Soal2]
#### soal2.go

```go
package main
import "fmt"

const NMAX int = 1000

func main() {
	var x, y int
	var ikan [NMAX]float64
	var total, rata float64
	var jumlahWadah int
	fmt.Scan(&x, &y)

	for i := 0; i < x; i++ {
		fmt.Scan(&ikan[i])
	}

	for i := 0; i < x; i++ {
		total += ikan[i]

		if (i+1)%y == 0 || i == x-1 {
			fmt.Print(total, " ")
			rata += total
			jumlahWadah++
			total = 0
		}
	}
	fmt.Println()
	rata = rata / float64(jumlahWadah)
	fmt.Println(rata)
}
```
### Output Soal 2 :
![Screenshot Output soal2](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul9/output/Soal2.png)
Baris pertama adalah jumlah elemen array, lalu diikuti isi array sebanyak n angka. Setelah itu dimasukkan nilai x untuk indeks kelipatan, kemudian indeks yang ingin dihapus, dan terakhir angka yang ingin dicari frekuensinya. Program ini bekerja dengan membaca sejumlah bilangan ke dalam array, lalu menampilkan berbagai informasi seperti seluruh isi array, elemen pada indeks ganjil dan genap, serta elemen dengan indeks kelipatan tertentu. Program juga dapat menghapus elemen pada indeks tertentu dan menampilkan hasil array setelah penghapusan. Selanjutnya, program menghitung rata-rata dan standar deviasi dari data yang ada, lalu menghitung berapa kali suatu angka muncul di dalam array.] 

### 3. [Soal3]
#### soal3.go

```go
package main
import "fmt"

type arrBalita [100]float64

func hitungMinMax(arrBerat arrBalita, n int, bMin, bMax *float64) {
	*bMin = arrBerat[0]
	*bMax = arrBerat[0]

	for i := 1; i < n; i++ {
		if arrBerat[i] < *bMin {
			*bMin = arrBerat[i]
		}

		if arrBerat[i] > *bMax {
			*bMax = arrBerat[i]
		}
	}
}

func rerata(arrBerat arrBalita, n int) float64 {
	var total float64

	for i := 0; i < n; i++ {
		total += arrBerat[i]
	}

	return total / float64(n)
}

func main() {
	var data arrBalita
	var n int
	var min, max float64

	fmt.Print("Masukan banyak data berat balita : ")
	fmt.Scan(&n)

	for i := 0; i < n; i++ {
		fmt.Printf("Masukan berat balita ke-%d: ", i+1)
		fmt.Scan(&data[i])
	}

	hitungMinMax(data, n, &min, &max)
	fmt.Printf("Berat balita minimum: %.2f kg\n", min)
	fmt.Printf("Berat balita maksimum: %.2f kg\n", max)
	fmt.Printf("Rerata berat balita: %.2f kg\n", rerata(data, n))
}
```
### Output Soal 3 :
![Screenshot Output soal3](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul9/output/Soal3.png)
[Program ini digunakan untuk menentukan hasil dari beberapa pertandingan antara dua klub yang diinput oleh pengguna. Pertama, pengguna diminta untuk memasukkan nama dua klub yang akan bertanding. Setelah itu, program akan membaca skor dari setiap pertandingan secara berulang. Setiap skor terdiri dari dua bilangan yang mewakili jumlah gol dari masing-masing klub. Proses input ini akan terus berlangsung hingga pengguna memasukkan nilai negatif pada salah satu skor sebagai tanda untuk menghentikan input.
Selama proses tersebut, program tidak langsung menampilkan hasil pertandingan, melainkan menyimpan terlebih dahulu hasilnya ke dalam sebuah struktur data berupa slice. Jika skor klub A lebih besar dari klub B, maka nama klub A disimpan sebagai pemenang. Sebaliknya, jika skor klub B lebih besar, maka nama klub B yang disimpan. Jika kedua skor sama, maka hasil pertandingan dicatat sebagai “Draw”.
Setelah seluruh data pertandingan selesai dimasukkan, program kemudian menampilkan hasil dari setiap pertandingan secara berurutan sesuai dengan urutan input.]
