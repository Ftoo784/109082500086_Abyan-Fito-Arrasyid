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
![Screenshot Output soal1](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/modul3/Output/Soal1.png)
[Program pertama membaca empat bilangan yaitu a, b, c, dan d, lalu diminta menghitung permutasi dan kombinasi dari pasangan (a, c) dan (b, d). Permutasi digunakan untuk menghitung banyaknya cara penyusunan dengan memperhatikan urutan, sedangkan kombinasi menghitung banyaknya cara tanpa memperhatikan urutan. Cara menghitungnya dilakukan dengan perkalian menurun untuk permutasi, lalu hasilnya dibagi dengan faktorial untuk mendapatkan kombinasi. Program membaca input, menghitung kedua nilai tersebut untuk masing-masing pasangan, lalu menampilkan hasilnya dalam dua baris.]

### 2. [Soal2]
#### soal2.go

```go
package main

import "fmt"

func main() {
	var a, b, c int
	fmt.Scan(&a, &b, &c)

	fmt.Println((a - 1) * (a - 1))
	fmt.Println(b*b - 1)
	fmt.Println((c-2)*(c-2) + 1)
}
```
### Output Soal 2 :
![Screenshot Output soal2](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/modul3/Output/Soal2.png)
[Program ini menghitung hasil dari beberapa komposisi fungsi seperti f(g(h(x))), g(h(f(x))), dan h(f(g(x))). Cara menyelesaikannya adalah dengan mengerjakan fungsi dari bagian paling dalam terlebih dahulu, kemudian ke luar secara berurutan. Setelah disederhanakan, setiap komposisi dapat diubah menjadi bentuk matematika yang lebih sederhana sehingga lebih mudah dihitung. Program kemudian hanya perlu memasukkan nilai a, b, dan c ke dalam hasil fungsi yang sudah disederhanakan tersebut dan mencetak hasilnya.] 

### 3. [Soal3]
#### soal3.go

```go
package main

import (
	"fmt"
	"math"
)

func main() {
	var cx1, cy1, r1 float64
	var cx2, cy2, r2 float64
	var x, y float64

	fmt.Scan(&cx1, &cy1, &r1)
	fmt.Scan(&cx2, &cy2, &r2)
	fmt.Scan(&x, &y)

	jarak1 := math.Sqrt((x-cx1)*(x-cx1) + (y-cy1)*(y-cy1))
	jarak2 := math.Sqrt((x-cx2)*(x-cx2) + (y-cy2)*(y-cy2))

	dalam1 := jarak1 <= r1
	dalam2 := jarak2 <= r2

	if dalam1 && dalam2 {
		fmt.Println("Titik di dalam lingkaran 1 dan 2")
	} else if dalam1 {
		fmt.Println("Titik di dalam lingkaran 1")
	} else if dalam2 {
		fmt.Println("Titik di dalam lingkaran 2")
	} else {
		fmt.Println("Titik di luar lingkaran 1 dan 2")
	}
}
```
### Output Soal 3 :
![Screenshot Output soal3](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/modul3/Output/Soal3.png)
[Program ini menentukan sebuah titik yang berada di dalam lingkaran pertama, lingkaran kedua, keduanya, atau di luar keduanya. Hal ini dilakukan dengan menghitung jarak antara titik dan pusat lingkaran menggunakan rumus jarak. Jika jarak lebih kecil atau sama dengan jari-jari, maka titik berada di dalam lingkaran tersebut. Program akan membandingkan hasil untuk kedua lingkaran dan menggunakan percabangan untuk menentukan posisi akhir titik, lalu mencetak hasil sesuai kondisi yang terpenuhi.]
