package main
import "fmt"

func pembagian(x int, i int) {
	if x%i == 0 {
		fmt.Print(i, " ")
	}
	if x >= i {
		pembagian(x, i+1)
	}
}

func main() {
	var x int
	fmt.Scan(&x)
	pembagian(x, 1)
}
