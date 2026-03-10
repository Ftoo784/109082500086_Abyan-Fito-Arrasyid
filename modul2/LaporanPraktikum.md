# <h1 align="center">Laporan Praktikum Modul 2 </h1>
<p align="center">[Abyan Fito Arrasyid] - [109082500086]</p>
<br>

### 1. [Soal]
#### soal latihan modul 2A
**Bagian (1)**
```go 
pada bagian var (
    satu, dua, tiga string
    temp string
)
```
> bagian ini membuat empat Variabel bertipe String

**Bagian (2)**
```go 
fmt.Scanln(&satu)
fmt.Scanln(&dua)
fmt.Scanln(&tiga)
```
> kode ini digunakan untuk men scan variabel

**Bagian (3)**
```go
temp = satu
satu = dua
dua = tiga
tiga = temp
```
> Program ini melakukan pertukaran nilai variabel, contoh 
  1. temp menyimpan nilai satu
  2. satu diganti dengan nilai dua
  3. dua diganti dengan nilai tiga
  4. tiga dengan nilai temp
- Temp digunakan untuk menyimpan variabel sementara

**Bagian (4)**
```go
fmt.Println("Output akhir = " + satu + " " + dua + " " + tiga)
```
> Sebagai output Program

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
### Output soal latihan modul 2B :

##### Output 
<img width="1920" height="1080" alt="Screenshot 2026-03-10 121314" src="https://github.com/user-attachments/assets/cf5af5db-6c2b-49c2-9b98-99e19b6817c0" />
[Program ini dibuat untuk menentukan susunan warna cairan pada tabung reaksi sesuai dengan ketentuan atau tidak. dengan urutan warna benar yaitu Merah - Kuning - Hijau - Ungu, jika dalam 5 kali percobaan ada warna yang tidak sesuai dengan urutan maka, program akan mengeluarkan output false. Jika 5 kali percobaan warna sesuai dengan ketentuan maka program akan mengeluarkan output True.]

### 3. [Soal]
#### soal latihan modul 2C

```go
package main

import "fmt"

func main() {
	var gram int

	fmt.Print("Berat parsel (gram): ")
	fmt.Scan(&gram)

	kg := gram / 1000
	sisa := gram % 1000

	biayaKg := kg * 10000
	biayaSisa := 0

	if kg >= 10 {
		biayaSisa = 0
	} else {
		if sisa >= 500 {
			biayaSisa = sisa * 5
		} else {
			biayaSisa = sisa * 15
		}
	}

	total := biayaKg + biayaSisa

	fmt.Printf("Detail berat: %d kg + %d gr\n", kg, sisa)
	fmt.Printf("Detail biaya: Rp. %d + Rp. %d\n", biayaKg, biayaSisa)
	fmt.Printf("Total biaya: Rp. %d\n", total)
}
```
### Output soal latihan modul 2C :

##### Output 
<img width="1920" height="1080" alt="Screenshot 2026-03-10 131515" src="https://github.com/user-attachments/assets/39e8b023-c03b-4d92-bfbf-53db9764f1f3" />
[Program ini dibuat untuk menghitung biaya pengiriman parsel sesuai dengan beratnya dalam satuan Gram. Pertama tama program menghitung dalam jumlah Kg menggunakan operasi pemabgian dan sisa Gram menggunakan Modulus. Kg disini digunakan untuk menghitung biaya utama pengirima dengan tarif Rp. 10.000 per Kg nya. kemudian Program memeriksa apakah terdapat sisa berat dibawah 1Kg. Jika sisa berat lebih dari atau sama dengan 500 Gram, maka biaya tambahan dihitung sebesar Rp. 5 per Gram. Jika berat kurang dari 500 Gram, maka biaya tambahan dikenakan adalah RP. 15 per Gram]
