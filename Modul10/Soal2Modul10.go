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
