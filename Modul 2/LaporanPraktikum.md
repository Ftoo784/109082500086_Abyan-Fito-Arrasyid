# <h1 align="center">Laporan Praktikum Modul 1 - </h1>
<p align="center">[Abyan Fito Arrasyid] - [109082500086]</p>

## Laprak

### 1. [Soal]
#### soal latihan modul 2A

    Bagian (1)
pada bagian var (
    satu, dua, tiga string
    temp string
)

//bagian ini membuat empat Variable bertipe String 
    
    Bagian (2)
fmt.Scanln(&satu)
fmt.Scanln(&dua)
fmt.Scanln(&tiga)

//kode ini digunakan untuk menginput data

    Bagian (3)
fmt.Println("Output awal = " + satu + " " + dua + " " + tiga)

//Program akan menampilkan isi variabel sebelum dilakukan pertukaran

    Bagian (4)
temp = satu
satu = dua
dua = tiga
tiga = temp

//Program ini melakukan pertukaran nilai variabel, contoh 
  1. temp menyimpan nilai satu
  2. satu diganti dengan nilai dua
  3. dua diganti dengan nilai tiga
  4. tiga dengan nilai temp 
  Temp digunakan untuk menyimpan variabel sementara

fmt.Println("Output akhir = " + satu + " " + dua + " " + tiga)

//Sebagai output Program

### 2. [Soal]
#### soal latihan modul 2B

```go
package main

import "fmt"

func main() {
	var w1, w2, w3, w4 string
	benar := true

	for i := 1; i <= 5; i++ {
		fmt.Scan(&w1, &w2, &w3, &w4)

		if !(w1 == "merah" && w2 == "kuning" && w3 == "hijau" && w4 == "ungu") {
			benar = false
		}
	}

	fmt.Println(benar)
}
```
### Output soal :

##### Output 


