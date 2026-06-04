# <h1 align="center">Laporan Praktikum Modul 10 </h1>
<p align="center">[Abyan Fito Arrasyid] - [109082500086]</p>

### 1. [Soal]
#### soal1.go

```go
package main
import "fmt"

const NCALON int = 20

type arrKandidat [NCALON]int

func seqSearch(T arrKandidat, n int, X int) int {
	var found int = -1
	var j int = 0
	for j < n && found == -1 {
		if T[j] == X {
			found = j
		}
		j = j + 1
	}
	return found
}

func main() {
	var daftar arrKandidat
	var rekap [NCALON]int
	var suara, suaraMasuk, suaraSah int

	for i := 0; i < NCALON; i++ {
		daftar[i] = i + 1
	}

	for {
		fmt.Scan(&suara)
		if suara == 0 {
			break
		}

		suaraMasuk++
		idx := seqSearch(daftar, NCALON, suara)

		if idx != -1 {
			suaraSah++
			rekap[idx]++
		}
	}

	fmt.Printf("Suara masuk: %d\n", suaraMasuk)
	fmt.Printf("Suara sah: %d\n", suaraSah)

	for i := 0; i < NCALON; i++ {
		if rekap[i] > 0 {
			fmt.Printf("%d: %d\n", daftar[i], rekap[i])
		}
	}
}
```
### Output Soal 1 :
![Screenshot Output soal1](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul12/Output/soal1.png)
[Program ini digunakan untuk penghitungan suara dalam sebuah pemilihan. Setiap kandidat diberi nomor urut dari 1 hingga 20 dimana Program menerima masukan berupa nomor kandidat yang dipilih oleh pemilih secara berulang sampai pengguna memasukkan angka 0 sebagai tanda bahwa proses input   selesai.
Untuk memvalidasi suara yang masuk, program menggunakan metode Sequential Search melalui fungsi seqSearch(). Fungsi ini mencari nomor kandidat yang dimasukkan terdapat dalam daftar kandidat yang valid. Jika ditemukan, maka suara tersebut dianggap sah dan jumlah suara kandidat yang bersangkutan akan ditambahkan pada array.
Selama proses berlangsung, program juga menghitung jumlah seluruh suara yang masuk suaraMasuk dan jumlah suara sah suaraSah. Setelah input selesai, program menampilkan total suara masuk, total suara sah, serta hasil perolehan suara masing-masing kandidat yang memperoleh minimal satu suara.]

### 2. [Soal2]
#### soal2.go

```go
package main
import "fmt"

const NCALON int = 20

type arrKandidat [NCALON]int

func seqSearch(T arrKandidat, n int, X int) int {
	var found int = -1
	var j int = 0
	for j < n && found == -1 {
		if T[j] == X {
			found = j
		}
		j = j + 1
	}
	return found
}

func main() {
	var daftar arrKandidat
	var rekap [NCALON + 1]int
	var suara, suaraMasuk, suaraSah int

	for i := 0; i < NCALON; i++ {
		daftar[i] = i + 1
	}

	for {
		fmt.Scan(&suara)
		if suara == 0 {
			break
		}

		suaraMasuk++

		idx := seqSearch(daftar, NCALON, suara)

		if idx != -1 {
			suaraSah++
			rekap[daftar[idx]]++
		}
	}

	fmt.Printf("Suara masuk: %d\n", suaraMasuk)
	fmt.Printf("Suara sah: %d\n", suaraSah)

	var max1, max2 int = -1, -1
	var id1, id2 int = 0, 0

	for i := 1; i <= NCALON; i++ {
		if rekap[i] > max1 {
			max2 = max1
			id2 = id1
			max1 = rekap[i]
			id1 = i
		} else if rekap[i] > max2 {
			max2 = rekap[i]
			id2 = i
		}
	}

	fmt.Printf("Ketua RT: %d\n", id1)
	fmt.Printf("Wakil ketua: %d\n", id2)
}
```
### Output Soal 2 :
![Screenshot Output soal2](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul12/Output/soal2.png)
[Berdasarkan program sebelumnya, koding ini digunakan untuk mencari siapa pemenang pemilihan ketua RT. Sekaligus juga ditentukan bahwa wakil ketua RT adalah calon yang mendapatkan suara terbanyak kedua. Pengguna memasukkan nomor kandidat yang dipilih, dan input akan berhenti ketika angka 0 dimasukkan.
Setiap suara yang masuk dicek menggunakan metode Sequential Search untuk memastikan nomor kandidat valid. Jika valid, suara akan dihitung sebagai suara sah dan ditambahkan ke perolehan kandidat tersebut.
Setelah semua data selesai dimasukkan, program menampilkan jumlah suara masuk dan jumlah suara sah. Selanjutnya, program mencari dua kandidat dengan perolehan suara terbanyak. Kandidat dengan suara terbanyak ditetapkan sebagai **Ketua RT**, sedangkan kandidat dengan suara terbanyak kedua menjadi Wakil Ketua RT.] 

### 3. [Soal3]
#### soal3.go

```go
package main
import "fmt"

const NMAX = 1000000

var data [NMAX]int

func main() {
	var n, k int
	fmt.Scan(&n, &k)

	isiArray(n)

	idx := posisi(n, k)
	if idx != -1 {
		fmt.Println(idx)
	} else {
		fmt.Println("TIDAK ADA")
	}
}

func isiArray(n int) {
	for i := 0; i < n; i++ {
		fmt.Scan(&data[i])
	}
}

func posisi(n, k int) int {
	var found int = -1
	var med int
	var kr int = 0
	var kn int = n - 1

	for kr <= kn && found == -1 {
		med = (kr + kn) / 2
		if k < data[med] {
			kn = med - 1
		} else if k > data[med] {
			kr = med + 1
		} else {
			found = med
		}
	}
	
	return found
}
```
### Output Soal 3 :
![Screenshot Output soal3](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul12/Output/soal3.png)
[Program ini digunakan untuk mencari posisi suatu angka dalam sebuah array yang sudah terurut menggunakan Binary Search. Pengguna memasukkan jumlah data n, angka yang ingin dicari k, lalu mengisi elemen array.
Data yang dimasukkan disimpan ke dalam array melalui prosedur isiArray(). Setelah itu, fungsi posisi() melakukan pencarian dengan membagi area pencarian menjadi dua bagian secara berulang hingga angka yang dicari ditemukan atau dipastikan tidak ada di dalam array. Jika angka ditemukan, program akan menampilkan indeks (posisi) angka tersebut dalam array. Jika tidak ditemukan, program akan menampilkan tulisan "TIDAK ADA". Metode Binary Search membuat proses pencarian lebih cepat dibanding pencarian berurutan, terutama untuk jumlah data yang besar.]
