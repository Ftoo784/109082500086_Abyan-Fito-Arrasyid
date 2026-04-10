package main
import "fmt"

func bintang(x int) {
	if x != 0 {
		fmt.Print("*")
		bintang(x - 1)
	}
}

func main() {
	var y int
	fmt.Scan(&y)

	for i := 1; i <= y; i++ {
		bintang(i)
		fmt.Println()
	}
}

