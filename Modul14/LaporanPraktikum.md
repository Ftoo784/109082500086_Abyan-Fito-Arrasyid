# <h1 align="center">Laporan Praktikum Modul 14 </h1>
<p align="center">[Abyan Fito Arrasyid] - [109082500086]</p>

### 1. [Soal]
#### soal1.go

```go
package main
import "fmt"

const NMAX = 1000000

var arr [NMAX]int

func selectionSort(n int) {
	for i := 0; i < n-1; i++ {
		idxMin := i
		for j := i + 1; j < n; j++ {
			if arr[j] < arr[idxMin] {
				idxMin = j
			}
		}
		temp := arr[i]
		arr[i] = arr[idxMin]
		arr[idxMin] = temp
	}
}

func main() {
	var n, m int
	fmt.Scan(&n)
	for i := 0; i < n; i++ {
		fmt.Scan(&m)

		for j := 0; j < m; j++ {
			fmt.Scan(&arr[j])
		}

		selectionSort(m)

		for j := 0; j < m; j++ {
			fmt.Print(arr[j])
			if j < m-1 {
				fmt.Print(" ")
			}
		}
		fmt.Println()
	}
}
```
### Output Soal 1 :
![Screenshot Output soal1](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul14/Output/Soal1.png)
[Program ini diguakan untuk mengurutkan sekumpulan data bilangan bulat menggunakan metode Selection Sort. Pada awal program, dideklarasikan sebuah array global bernama "arr" dengan kapasitas maksimum satu juta elemen yang digunakan sebagai tempat penyimpanan data yang akan diurutkan. Program menerima masukan berupa jumlah kasus uji "n", kemudian untuk setiap kasus uji pengguna memasukkan banyaknya data "m" yang akan diproses beserta nilai-nilai bilangan yang akan disimpan ke dalam array.

Proses pengurutan dilakukan oleh fungsi "selectionSort". Algoritma Selection Sort bekerja dengan cara mencari elemen terkecil dari bagian array yang belum terurut, kemudian menukarkannya dengan elemen pada posisi saat ini. Proses tersebut dilakukan berulang kali mulai dari elemen pertama hingga elemen terakhir sehingga seluruh data tersusun secara berurutan dari nilai terkecil ke nilai terbesar. Pada setiap iterasi, program menentukan indeks elemen minimum "idxMin", lalu melakukan pertukaran nilai menggunakan variabel sementara "temp".

Setelah proses pengurutan selesai, program menampilkan kembali seluruh elemen array yang telah terurut dalam satu baris dengan setiap angka dipisahkan oleh spasi. Langkah tersebut dilakukan untuk setiap kasus uji yang dimasukkan oleh pengguna. Dengan demikian, program mampu mengolah beberapa kelompok data sekaligus dan menghasilkan keluaran berupa urutan bilangan yang telah disusun secara menaik sesuai dengan prinsip kerja algoritma Selection Sort.]

### 2. [Soal2]
#### soal2.go

```go
package main
import "fmt"

const NMAX = 1000000

var arrGanjil [NMAX]int
var arrGenap [NMAX]int

func sortGanjil(n int) {
	for i := 0; i < n-1; i++ {
		idxMin := i
		for j := i + 1; j < n; j++ {
			if arrGanjil[j] < arrGanjil[idxMin] {
				idxMin = j
			}
		}
		temp := arrGanjil[i]
		arrGanjil[i] = arrGanjil[idxMin]
		arrGanjil[idxMin] = temp
	}
}

func sortGenap(n int) {
	for i := 0; i < n-1; i++ {
		idxMax := i
		for j := i + 1; j < n; j++ {
			if arrGenap[j] > arrGenap[idxMax] {
				idxMax = j
			}
		}
		temp := arrGenap[i]
		arrGenap[i] = arrGenap[idxMax]
		arrGenap[idxMax] = temp
	}
}

func main() {
	var n, m, num int
	fmt.Scan(&n)
	for i := 0; i < n; i++ {
		fmt.Scan(&m)

		var nGanjil int = 0
		var nGenap int = 0

		for j := 0; j < m; j++ {
			fmt.Scan(&num)
			if num%2 != 0 {
				arrGanjil[nGanjil] = num
				nGanjil++
			} else {
				arrGenap[nGenap] = num
				nGenap++
			}
		}

		sortGanjil(nGanjil)
		sortGenap(nGenap)

		var pertama int = 1
		for j := 0; j < nGanjil; j++ {
			if pertama == 1 {
				fmt.Print(arrGanjil[j])
				pertama = 0
			} else {
				fmt.Print(" ", arrGanjil[j])
			}
		}

		for j := 0; j < nGenap; j++ {
			if pertama == 1 {
				fmt.Print(arrGenap[j])
				pertama = 0
			} else {
				fmt.Print(" ", arrGenap[j])
			}
		}
		fmt.Println()
	}
}
```
### Output Soal 2 :
![Screenshot Output soal2](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul14/Output/Soal2.png)
[Program ini digunakan untuk mengelompokkan dan mengurutkan sekumpulan bilangan bulat berdasarkan sifatnya, yaitu bilangan ganjil dan bilangan genap. Program menerima masukan berupa jumlah kasus uji yang akan diproses. Pada setiap kasus uji, pengguna memasukkan sejumlah bilangan yang kemudian dipisahkan ke dalam dua array berbeda, yaitu "arrGanjil" untuk menyimpan bilangan ganjil dan "arrGenap" untuk menyimpan bilangan genap.

Setelah proses pemisahan selesai, program melakukan pengurutan pada masing-masing kelompok bilangan menggunakan algoritma Selection Sort. Untuk bilangan ganjil, pengurutan dilakukan secara menaik (ascending), sehingga bilangan dengan nilai terkecil akan berada di posisi awal array. Sebaliknya, untuk bilangan genap, pengurutan dilakukan secara menurun (descending), sehingga bilangan dengan nilai terbesar akan ditempatkan di bagian depan array. Proses pengurutan dilakukan dengan mencari elemen minimum atau maksimum pada setiap iterasi, kemudian menukarkannya dengan elemen pada posisi yang sedang diproses hingga seluruh data tersusun sesuai urutan yang diinginkan.

Setelah kedua kelompok bilangan selesai diurutkan, program menampilkan hasil akhir dengan menggabungkan seluruh bilangan ganjil yang telah diurutkan secara menaik terlebih dahulu, kemudian diikuti oleh seluruh bilangan genap yang telah diurutkan secara menurun. Setiap bilangan dipisahkan oleh spasi sehingga menghasilkan keluaran yang mudah dibaca. Dengan demikian, program tidak hanya melakukan pengurutan data, tetapi juga mengelompokkan bilangan berdasarkan paritasnya sebelum menampilkan hasil akhir sesuai aturan yang telah ditentukan.

Secara umum, algoritma yang digunakan memiliki kompleksitas waktu sebesar O(n²) pada proses pengurutan karena metode Selection Sort melakukan pencarian elemen minimum atau maksimum secara berulang pada bagian array yang belum terurut. Meskipun kurang efisien untuk data berukuran sangat besar, algoritma ini mudah dipahami dan cocok digunakan untuk mempelajari konsep dasar pengurutan serta manipulasi array dalam bahasa pemrograman Go.] 

### 3. [Soal3]
#### soal3.go

```go
package main
import "fmt"

const NMAX = 1000000

var arr [NMAX]int

func insertionSort(n int) {
	for i := 1; i < n; i++ {
		key := arr[i]
		j := i - 1
		for j >= 0 && arr[j] > key {
			arr[j+1] = arr[j]
			j--
		}
		arr[j+1] = key
	}
}

func main() {
	var n int = 0
	var num int

	fmt.Scan(&num)
	for num != -5313 {
		if num == 0 {
			if n > 0 {
				insertionSort(n)
				if n%2 != 0 {
					fmt.Println(arr[n/2])
				} else {
					fmt.Println((arr[n/2-1] + arr[n/2]) / 2)
				}
			}
		} else {
			arr[n] = num
			n++
		}
		fmt.Scan(&num)
	}
}
```
### Output Soal 3 :
![Screenshot Output soal3](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul14/Output/Soal3.png)
[Program ini digunakan untuk menghitung nilai median dari sekumpulan bilangan bulat yang dimasukkan secara bertahap oleh pengguna. Seluruh data yang diterima disimpan ke dalam sebuah array bernama "arr" yang memiliki kapasitas maksimum satu juta elemen. Program membaca input secara terus-menerus hingga pengguna memasukkan nilai "-5313", yang berfungsi sebagai penanda akhir proses input dan menghentikan jalannya program.

Setiap bilangan yang dimasukkan, selain "0" dan "-5313", akan disimpan ke dalam array. Jumlah data yang telah tersimpan dicatat menggunakan variabel "n". Ketika pengguna memasukkan angka "0", program akan menganggap bahwa pengguna ingin mengetahui median dari seluruh data yang telah dimasukkan sampai saat itu. Sebelum median dapat ditentukan, seluruh data terlebih dahulu diurutkan menggunakan algoritma Insertion Sort melalui fungsi "insertionSort".

Algoritma Insertion Sort bekerja dengan membandingkan setiap elemen dengan elemen-elemen sebelumnya yang telah terurut. Jika ditemukan posisi yang lebih sesuai, elemen tersebut akan digeser dan disisipkan pada tempat yang tepat. Proses ini dilakukan berulang hingga seluruh data tersusun dalam urutan menaik. Setelah data terurut, program dapat menentukan median dengan lebih mudah.

Apabila jumlah data yang tersimpan merupakan bilangan ganjil, median diperoleh dari elemen yang berada tepat di tengah array. Sebaliknya, jika jumlah data genap, median dihitung sebagai rata-rata dari dua elemen yang berada di posisi tengah. Nilai median yang diperoleh kemudian langsung ditampilkan ke layar. Proses ini dapat dilakukan berkali-kali selama program masih berjalan, sehingga pengguna dapat menambahkan data baru dan meminta perhitungan median kembali dengan memasukkan angka "0".

Secara keseluruhan, program ini menggabungkan konsep penyimpanan data dalam array, pengurutan menggunakan Insertion Sort, serta perhitungan median berdasarkan jumlah elemen yang tersedia. Program ini cocok digunakan untuk mempelajari pengolahan data numerik sederhana, khususnya dalam menentukan nilai tengah suatu kumpulan data yang telah diurutkan.]

### 4. [Soal]
#### soal4.go

```go
package main
import "fmt"
const NMAX = 1000

type tabInt [NMAX]int

func insertionSort(arr *tabInt, n int) {
	for i := 1; i < n; i++ {
		key := (*arr)[i]
		j := i - 1
		for j >= 0 && (*arr)[j] > key {
			(*arr)[j+1] = (*arr)[j]
			j--
		}
		(*arr)[j+1] = key
	}
}

func cekJarak(arr tabInt, n int) {
	if n > 1 {
		diff := arr[1] - arr[0]
		status := 1

		for i := 1; i < n-1; i++ {
			if arr[i+1]-arr[i] != diff {
				status = 0
			}
		}

		if status == 1 {
			fmt.Printf("Data berjarak %d\n", diff)
		} else {
			fmt.Println("Data berjarak tidak tetap")
		}
	}
}

func main() {
	var arr tabInt
	var n int
	var num int

	fmt.Scan(&num)
	for num >= 0 {
		arr[n] = num
		n++
		fmt.Scan(&num)
	}

	insertionSort(&arr, n)

	for i := 0; i < n; i++ {
		fmt.Print(arr[i])
		if i < n-1 {
			fmt.Print(" ")
		}
	}
	fmt.Println()

	cekJarak(arr, n)
}
```
### Output Soal 4 :
![Screenshot Output soal1](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul14/Output/Soal4.png)
[Program ini digunakan untuk mengolah sekumpulan bilangan bulat yang dimasukkan oleh pengguna. Data disimpan ke dalam array hingga pengguna memasukkan bilangan negatif sebagai tanda berakhirnya input. Setelah seluruh data diterima, program mengurutkan data menggunakan algoritma Insertion Sort sehingga bilangan tersusun dari yang terkecil hingga terbesar.

Setelah proses pengurutan selesai, program menampilkan seluruh data yang telah terurut. Selanjutnya, program memeriksa apakah selisih antara setiap pasangan bilangan yang berurutan memiliki nilai yang sama. Jika semua selisih bernilai sama, program akan menampilkan bahwa data memiliki jarak tetap beserta nilai jaraknya. Namun, jika terdapat selisih yang berbeda, program akan menyatakan bahwa data memiliki jarak yang tidak tetap.

Secara keseluruhan, program ini menggabungkan proses input data, pengurutan bilangan, dan pemeriksaan pola selisih antar elemen untuk menentukan apakah data membentuk suatu barisan dengan beda yang konstan.]

### 5. [Soal]
#### soal5.go

```go
package main
import "fmt"
const nMax int = 7919

type Buku struct {
	id, judul, penulis, penerbit string
	eksemplar, tahun, rating     int
}

type DaftarBuku [nMax + 1]Buku

func DaftarkanBuku(pustaka *DaftarBuku, n int) {
	for i := 1; i <= n; i++ {
		fmt.Scan(&pustaka[i].id, &pustaka[i].judul, &pustaka[i].penulis, &pustaka[i].penerbit, &pustaka[i].eksemplar, &pustaka[i].tahun, &pustaka[i].rating)
	}
}

func CetakTerfavorit(pustaka DaftarBuku, n int) {
	if n > 0 {
		maxRating := pustaka[1].rating
		for i := 2; i <= n; i++ {
			if pustaka[i].rating > maxRating {
				maxRating = pustaka[i].rating
			}
		}

		for i := 1; i <= n; i++ {
			if pustaka[i].rating == maxRating {
				fmt.Printf("%s, %s, %s, %d\n", pustaka[i].judul, pustaka[i].penulis, pustaka[i].penerbit, pustaka[i].tahun)
			}
		}
	}
}

func UrutBuku(pustaka *DaftarBuku, n int) {
	for i := 2; i <= n; i++ {
		key := pustaka[i]
		j := i - 1
		for j >= 1 && pustaka[j].rating < key.rating {
			pustaka[j+1] = pustaka[j]
			j--
		}
		pustaka[j+1] = key
	}
}

func Cetak5Terbaru(pustaka DaftarBuku, n int) {
	limit := 5
	if n < 5 {
		limit = n
	}
	for i := 1; i <= limit; i++ {
		fmt.Println(pustaka[i].judul)
	}
}

func CariBuku(pustaka DaftarBuku, n int, r int) {
	kiri := 1
	kanan := n
	found := -1

	for kiri <= kanan && found == -1 {
		med := (kiri + kanan) / 2
		if pustaka[med].rating == r {
			found = med
		} else if pustaka[med].rating < r {
			kanan = med - 1
		} else {
			kiri = med + 1
		}
	}

	if found != -1 {
		fmt.Printf("%s, %s, %s, %d, %d, %d\n", pustaka[found].judul, pustaka[found].penulis, pustaka[found].penerbit, pustaka[found].tahun, pustaka[found].eksemplar, pustaka[found].rating)
	} else {
		fmt.Println("Tidak ada buku dengan rating seperti itu")
	}
}

func main() {
	var n, targetRating int
	var pustaka DaftarBuku

	fmt.Scan(&n)
	DaftarkanBuku(&pustaka, n)
	fmt.Scan(&targetRating)

	CetakTerfavorit(pustaka, n)
	UrutBuku(&pustaka, n)
	Cetak5Terbaru(pustaka, n)
	CariBuku(pustaka, n, targetRating)
}
```
### Output Soal 5 :
![Screenshot Output soal1](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul14/Output/Soal5.png)
[Program ini digunakan untuk mengelola data buku dalam sebuah perpustakaan. Setiap buku memiliki informasi berupa ID, judul, penulis, penerbit, jumlah eksemplar, tahun terbit, dan rating. Data buku dimasukkan oleh pengguna dan disimpan ke dalam array bertipe "DaftarBuku".

Setelah data berhasil dimasukkan, program akan mencari dan menampilkan buku dengan rating tertinggi sebagai buku terfavorit. Selanjutnya, seluruh data buku diurutkan berdasarkan rating secara menurun menggunakan algoritma Insertion Sort, sehingga buku dengan rating tertinggi berada di posisi awal.

Setelah proses pengurutan selesai, program menampilkan maksimal lima judul buku pertama dari hasil pengurutan. Program juga menyediakan fitur pencarian buku berdasarkan rating menggunakan metode Binary Search. Jika ditemukan buku dengan rating yang dicari, informasi lengkap buku tersebut akan ditampilkan. Namun, jika tidak ditemukan, program akan menampilkan pesan bahwa tidak ada buku dengan rating tersebut.

Secara keseluruhan, program ini menerapkan konsep pengolahan array, pengurutan data, dan pencarian data untuk membantu mengelola serta menampilkan informasi buku berdasarkan nilai ratingnya.]
