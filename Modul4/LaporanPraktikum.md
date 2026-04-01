# <h1 align="center">Laporan Praktikum Modul 4 </h1>
<p align="center">[Abyan Fito Arrasyid] - [109082500086]</p>

### 1. [Soal]
#### soal1.go

```go
package main
import "fmt"

func factorial(n int, hasil *int64) {
	*hasil = 1
	for i := 1; i <= n; i++ {
		*hasil *= int64(i)
	}
}

func permutation(n, r int, hasil *int64) {
	var fn, fnr int64
	factorial(n, &fn)
	factorial(n-r, &fnr)
	*hasil = fn / fnr
}

func combination(n, r int, hasil *int64) {
	var fn, fr, fnr int64
	factorial(n, &fn)
	factorial(r, &fr)
	factorial(n-r, &fnr)
	*hasil = fn / (fr * fnr)
}

func main() {
	var a, b, c, d int
	var p, k int64

	fmt.Scan(&a, &b, &c, &d)

	permutation(a, c, &p)
	combination(a, c, &k)
	fmt.Println(p, k)

	permutation(b, d, &p)
	combination(b, d, &k)
	fmt.Println(p, k)
}
```
### Output Soal 1 :
![Screenshot Output soal1](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul4/Output/Soal1.png)
[Program ini digunakan untuk menghitung nilai permutasi dan kombinasi dari dua pasang bilangan yang diberikan oleh pengguna Proses perhitungan dilakukan secara modular dengan memanfaatkan tiga fungsi, yaitu faktorial, permutasi, dan kombinasi. Prosedur faktorial digunakan untuk menghitung nilai faktorial dari suatu bilangan, yang kemudian dimanfaatkan oleh prosedur permutasi untuk menghitung nilai permutasi dan oleh prosedur kombinasi untuk menghitung nilai kombinasi.]

### 2. [Soal2]
#### soal2.go

```go
package main
import "fmt"

func hitungSkor(waktu [8]int, soal *int, skor *int) {
	*soal = 0
	*skor = 0

	for i := 0; i < 8; i++ {
		if waktu[i] <= 300 {
			*soal++
			*skor += waktu[i]
		}
	}
}

func main() {
	var nama, pemenang string
	var waktu [8]int
	var soal, skor int
	var maxSoal, minSkor int
	var first = true

	for {
		fmt.Scan(&nama)
		if nama == "Selesai" {
			break
		}

		for i := 0; i < 8; i++ {
			fmt.Scan(&waktu[i])
		}

		hitungSkor(waktu, &soal, &skor)

		if first || soal > maxSoal || (soal == maxSoal && skor < minSkor) {
			first = false
			maxSoal = soal
			minSkor = skor
			pemenang = nama
		}
	}

	fmt.Println(pemenang, maxSoal, minSkor)
}
```
### Output Soal 2 :
![Screenshot Output soal2](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul4/Output/Soal2.png)
[Program ini digunakan untuk menentukan pemenang dalam suatu kompetisi pemrograman berdasarkan jumlah soal yang berhasil diselesaikan dan total waktu pengerjaan. Setiap peserta memiliki satu nama dan delapan data waktu pengerjaan soal dalam satuan menit. Program menggunakan prosedur hitungSkor untuk menghitung jumlah soal yang berhasil diselesaikan, yaitu soal tidak lebih dari 300 menit, serta menghitung total waktu dari soal tersebut. Data peserta dibaca berulang ulang sampai ada penanda “Selesai”. Pemenang ditentukan berdasarkan jumlah soal terbanyak yang berhasil diselesaikan, dan apabila terdapat jumlah yang sama, maka dipilih peserta dengan total waktu paling kecil. Hasil akhir berupa nama pemenang, jumlah soal yang diselesaikan, serta total waktu yang dibutuhkan ditampilkan dalam satu baris keluaran.] 

### 3. [Soal3]
#### soal3.go

```go
package main
import "fmt"

func cetakDeret(n int) {
	for {
		fmt.Print(n)

		if n == 1 {
			break
		}

		fmt.Print(" ")

		if n%2 == 0 {
			n = n / 2
		} else {
			n = 3*n + 1
		}
	}
}

func main() {
	var n int
	fmt.Scan(&n)
	cetakDeret(n)
}
```
### Output Soal 3 :
![Screenshot Output soal3](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul4/Output/Soal3.png)
[Program ini digunakan untuk menampilkan deret bilangan berdasarkan aturan Skiena. Program menerima sebuah bilangan bulat positif sebagai nilai awal, kemudian program mencetak deret bilangan dengan aturan bahwa jika bilangan saat ini genap maka dibagi dua, tetapi jika ganjil maka dikalikan tiga lalu ditambah satu. Proses ini dilakukan secara berulang hingga mencapai nilai 1 untuk kondisi berhenti. Pencetakan deret dilakukan dalam satu baris dan setiap suku dipisahkan oleh spasi. Untuk menjaga struktur modular, proses pembentukan dan pencetakan deret dilakukan di dalam prosedur cetakDeret yang menerima satu parameter masukan. Program ini memastikan bahwa setiap nilai awal yang diberikan akan menghasilkan deret yang berakhir pada angka 1.]
