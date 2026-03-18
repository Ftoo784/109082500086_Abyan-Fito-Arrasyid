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
### Output Unguided :![Uploading Screenshot 2026-03-19 013847.png…]()


##### Output 
![Screenshot Output Unguided 1_1]()
[penjelasan]

