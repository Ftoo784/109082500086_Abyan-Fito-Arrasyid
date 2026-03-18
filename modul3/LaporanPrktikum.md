# <h1 align="center">Laporan Praktikum Modul 3 </h1>
<p align="center">[Abyan Fito Arrasyid] - [109082500086]</p>

### 1. [Soal]
#### soal1.go

```go
package main

import "fmt"

func main() {
	var a, b, c, d int
	fmt.Scan(&a, &b, &c, &d)

	permutasiAC, faktorialC := 1, 1
	for i := 0; i < c; i++ {
		permutasiAC *= (a - i)
		faktorialC *= (i + 1)
	}

	permutasiBD, faktorialD := 1, 1
	for i := 0; i < d; i++ {
		permutasiBD *= (b - i)
		faktorialD *= (i + 1)
	}

	fmt.Println(permutasiAC, permutasiAC/faktorialC)
	fmt.Println(permutasiBD, permutasiBD/faktorialD)
}
```
### Output Soal 1 :
![Screenshot Output Unguided 1_1](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/modul3/Output/Soal1.png)
[Program pertama membaca empat bilangan yaitu a, b, c, dan d, lalu diminta menghitung permutasi dan kombinasi dari pasangan (a, c) dan (b, d). Permutasi digunakan untuk menghitung banyaknya cara penyusunan dengan memperhatikan urutan, sedangkan kombinasi menghitung banyaknya cara tanpa memperhatikan urutan. Cara menghitungnya dilakukan dengan perkalian menurun untuk permutasi, lalu hasilnya dibagi dengan faktorial untuk mendapatkan kombinasi. Program membaca input, menghitung kedua nilai tersebut untuk masing-masing pasangan, lalu menampilkan hasilnya dalam dua baris.]

