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
![Screenshot Output soal1](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul10/Output/Soal1.png)
[Program ini digunakan untuk mencari nilai berat kelinci paling kecil dan paling besar dari sejumlah data yang dimasukkan pengguna. Pada awal program, pengguna diminta memasukkan jumlah anak kelinci yang akan didata, kemudian data berat setiap kelinci disimpan ke dalam array bertipe float64 agar dapat menampung bilangan desimal. Setelah semua data berhasil dimasukkan, program menganggap data pertama sebagai nilai awal minimum dan maksimum. Selanjutnya dilakukan proses perulangan untuk membandingkan seluruh data berat yang ada di dalam array. Jika ditemukan berat yang lebih kecil dari nilai minimum, maka nilai minimum akan diperbarui. Begitu juga jika ditemukan berat yang lebih besar dari nilai maksimum, maka nilai maksimum akan diganti dengan data tersebut. Setelah seluruh data selesai diperiksa, program akan menampilkan berat kelinci terkecil dan terbesar sebagai hasil akhir.]

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
![Screenshot Output soal2](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul10/Output/Soal2.png)
[Program ini digunakan untuk menghitung total berat ikan pada setiap wadah serta mencari rata rata berat ikan per wadah. Pada awal program, pengguna diminta memasukkan dua buah bilangan bulat yaitu x dan y. Nilai x menyatakan jumlah ikan yang akan dijual, sedangkan y menyatakan kapasitas jumlah ikan dalam setiap wadah. Setelah itu, pengguna memasukkan data berat ikan sebanyak x buah yang kemudian disimpan ke dalam array. Program akan melakukan proses penjumlahan berat ikan sesuai urutan data yang dimasukkan dan membaginya ke dalam beberapa wadah berdasarkan kapasitas y. Setiap kali jumlah ikan dalam satu wadah sudah memenuhi kapasitas, maka total berat pada wadah tersebut akan ditampilkan dan proses dilanjutkan ke wadah berikutnya. Setelah seluruh data selesai diproses, program akan menghitung rata rata berat ikan dari seluruh wadah yang digunakan dengan cara menjumlahkan seluruh total berat wadah kemudian dibagi banyaknya wadah. Hasil akhir program berupa total berat pada masing-masing wadah serta nilai rata rata berat ikan per wadah.] 

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
![Screenshot Output soal3](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul10/Output/Soal3.png)
[Program ini digunakan untuk membantu petugas posyandu dalam mencatat dan mengolah data berat balita. Data berat balita dimasukkan ke dalam array bertipe float64 sehingga dapat menyimpan nilai desimal. Program memiliki dua subprogram utama, yaitu hitungMinMax dan rerata. Subprogram hitungMinMax digunakan untuk mencari nilai berat balita paling kecil dan paling besar dengan cara membandingkan seluruh data dalam array secara berulang. Nilai minimum dan maksimum kemudian dikirim kembali menggunakan parameter pointer. Selanjutnya, subprogram rerata digunakan untuk menghitung rata rata berat balita dengan menjumlahkan seluruh data berat kemudian membaginya dengan jumlah data yang dimasukkan. Setelah seluruh proses selesai dilakukan, program akan menampilkan berat minimum, berat maksimum, dan nilai rata rata berat balita sebagai hasil akhir.]
